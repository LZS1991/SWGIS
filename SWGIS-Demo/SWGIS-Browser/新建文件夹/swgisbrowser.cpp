#include "swgisbrowser.h"
#include "ui_swgisbrowser.h"

SWGISBrowser::SWGISBrowser(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SWGISBrowser)
{
    ui->setupUi(this);
    int a = 10;
}

SWGISBrowser::~SWGISBrowser()
{
    delete ui;
}
