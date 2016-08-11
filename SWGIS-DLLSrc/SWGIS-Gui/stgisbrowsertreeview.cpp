#include <QSettings>
#include <QModelIndex>

#include "qgsbrowsermodel.h"
#include "STGISbrowsertreeview.h"
#include "qgslogger.h"

STGISBrowserTreeView::STGISBrowserTreeView(QWidget *parent)
    : QTreeView(parent)
    , m_SettingsSection(tr("browser"))
{
}

STGISBrowserTreeView::~STGISBrowserTreeView()
{
}

void STGISBrowserTreeView::setModel(QAbstractItemModel *model)
{
    QTreeView::setModel(model);
    restoreState();
}

void STGISBrowserTreeView::showEvent(QShowEvent *e)
{
    //e没有使用，避免编译器警告
    Q_UNUSED(e);
    if(this->model())
        this->restoreState();
    QTreeView::showEvent(e);
}

void STGISBrowserTreeView::hideEvent(QHideEvent *e)
{
    Q_UNUSED(e);
    if(this->model())
        this->saveState();
    QTreeView::hideEvent(e);
}

bool STGISBrowserTreeView::hasExpandedDescendant(const QModelIndex &index) const
{
    if(!this->model())
        return false;

    for(int i = 0; i < this->model()->rowCount(index); i++)
    {
        QModelIndex childIndex = this->model()->index(i, 0, index);
        if(this->isExpanded(childIndex))
            return true;

        if(this->hasExpandedDescendant(childIndex))
            return true;
    }
    return false;
}

void STGISBrowserTreeView::rowsInserted(const QModelIndex &parentIndex, int start, int end)
{
    QTreeView::rowsInserted(parentIndex, start, end);

    if(!this->model())
        return;

    if(this->m_ExpandPaths.isEmpty())
        return;

    qDebug() << "m_expandPaths = " + this->m_ExpandPaths.join(",");
    QString parentPath = this->model()->data(parentIndex, QgsBrowserModel::PathRole).toString();
    qDebug() << "parentPath = " + parentPath;

    this->m_ExpandPaths.removeOne(parentPath);
    if(!this->treeExpanded(parentIndex))
    {
        foreach (const QString& path, this->m_ExpandPaths) {
            if(path.startsWith(parentPath + '/'))
                m_ExpandPaths.removeOne(path);
        }
        return;
    }

    for(int i = start; i < end; i++)
    {
        QModelIndex childIndex = this->model()->index(i, 0, parentIndex);
        QString childPath = this->model()->data(childIndex, QgsBrowserModel::PathRole).toString();
        QString escapedChildPath = childPath;
        escapedChildPath.replace('|', "\\|");

        qDebug() << "childPath = " + childPath + "escapedChildPath = " + escapedChildPath;
        if(m_ExpandPaths.contains(childPath) || m_ExpandPaths.indexOf(QRegExp("^" + escapedChildPath + "/.*")) != -1)
        {
            qDebug() << "-> expand";
            this->expand(childIndex);
        }
    }
}

void STGISBrowserTreeView::saveState()
{
    qDebug() << "Enter";
    QSettings settings;
    QStringList expandedPaths = expandedPathsList(QModelIndex());
    settings.setValue(this->expandedPathsKey(), expandedPaths);
    qDebug() << "expandedPaths = " + expandedPaths.join("  ");
}

void STGISBrowserTreeView::restoreState()
{
    qDebug() << "Entered";
    QSettings settings;
    m_ExpandPaths = settings.value(this->expandedPathsKey(), QVariant()).toStringList();

    qDebug() << "m_ExpandedPaths = " + m_ExpandPaths.join("  ");
    if(!m_ExpandPaths.isEmpty())
    {
        QSet<QModelIndex> expandIndexSet;
        foreach (const QString& path, m_ExpandPaths) {
            QModelIndex expandIndex= QgsBrowserModel::findPath(model(), path, Qt::MatchStartsWith);
            if(expandIndex.isValid())
                expandIndexSet.insert(expandIndex);
            else
                qDebug() << "index for path " + path + " not found";
        }

        foreach (const QModelIndex& expandIndex, expandIndexSet) {
            this->expandTree(expandIndex);
        }
    }else{
        QModelIndex index = QgsBrowserModel::findPath(this->model(), tr("favourites"));
        this->expandTree(index);
    }
}

QString STGISBrowserTreeView::expandedPathsKey() const
{
    return '/' + m_SettingsSection + "/expandedPaths";
}

QStringList STGISBrowserTreeView::expandedPathsList(const QModelIndex &index)
{
    QStringList paths;

    if(!this->model())
        return paths;

    for(int i = 0; i < this->model()->rowCount(index); i++)
    {
        QModelIndex childIndex = this->model()->index(i, 0, index);
        if(this->isExpanded(childIndex))
        {
            QStringList childrenPaths = this->expandedPathsList(childIndex);
            if(!childrenPaths.isEmpty())
                paths.append(childrenPaths);
            else
                paths.append(this->model()->data(childIndex, QgsBrowserModel::PathRole).toString());
        }
    }
    return paths;
}

void STGISBrowserTreeView::expandTree(const QModelIndex &index)
{
    if(!this->model())
        return;

    QString itemPath = this->model()->data(index, QgsBrowserModel::PathRole).toString();
    qDebug() << "itemPath = " + itemPath;

    this->expand(index);

    QModelIndex parentIndex = this->model()->parent(index);
    if(parentIndex.isValid())
        this->expandTree(parentIndex);
}

bool STGISBrowserTreeView::treeExpanded(const QModelIndex &index)
{
    if(!this->model())
        return false;

    if(!this->isExpanded(index))
        return false;

    QModelIndex parentIndex  = this->model()->parent(index);
    if(parentIndex.isValid())
        return this->treeExpanded(parentIndex);

    return true;
}
