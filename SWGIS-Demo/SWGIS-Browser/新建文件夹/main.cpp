#include "swgisbrowser.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SWGISBrowser w;
    w.show();

    return a.exec();
}
