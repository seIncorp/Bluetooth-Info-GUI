#include "bluetoothinfogui.h"

BluetoothInfoGUI::BluetoothInfoGUI(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);


    ITEMS_DATA::ITEMS_USING aa;

    

    aa.createTopItem(0, QString("TEST 1"));
    aa.createTopItem(0, QString("TEST 2"));

    aa.addTopItem(0, ui);
    aa.addTopItem(1, ui);

    aa.createChildItem(1, QString("1111"));
    aa.createChildItem(1, QString("2222"));

    aa.addChildItem(0, 0);
    aa.addChildItem(1, 1);
}
