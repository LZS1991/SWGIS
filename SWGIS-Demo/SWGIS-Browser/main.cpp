#include <QLocale>
#include <QSettings>
#include <QTranslator>
#include <QMainWindow>
#include <QLabel>
#include <QDialog>
#include <QApplication>
#include <QCoreApplication>
#include "swgisbrowser.h"
#include "qgsapplication.h"
#include "qgslogger.h"
#include "qgsconfig.h"

#include "qgseditorwidgetconfig.h"

int main(int argc, char *argv[])
{
    QgsApplication a(argc, argv, true);
    a.initQgis();
    QCoreApplication::setOrganizationName(QObject::tr("SWGIS"));
    QCoreApplication::setOrganizationDomain(QObject::tr("SWGIS"));
    QCoreApplication::setApplicationName(QObject::tr("SWGIS"));

    SWGISBrowser swgisBrowser;
    swgisBrowser.restoreWindowState();
    swgisBrowser.show();

    return a.exec();
}
