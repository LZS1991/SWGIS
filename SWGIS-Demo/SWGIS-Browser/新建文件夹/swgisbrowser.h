#ifndef SWGISBROWSER_H
#define SWGISBROWSER_H

#include <QMainWindow>

namespace Ui {
class SWGISBrowser;
}

class SWGISBrowser : public QMainWindow
{
    Q_OBJECT

public:
    explicit SWGISBrowser(QWidget *parent = 0);
    ~SWGISBrowser();

private:
    Ui::SWGISBrowser *ui;
};

#endif // SWGISBROWSER_H
