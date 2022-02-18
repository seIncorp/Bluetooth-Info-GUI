#include "bluetoothinfogui.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BluetoothInfoGUI w;
    w.show();

    

    return a.exec();
}
