#include "WallClockDlg.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CWallClockDlg w;
    w.show();
    return a.exec();
}
