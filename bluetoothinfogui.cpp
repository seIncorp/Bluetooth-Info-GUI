#include "bluetoothinfogui.h"

BluetoothInfoGUI::BluetoothInfoGUI(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);


    connect(ui.action_By_Address, &QAction::triggered, this, &BluetoothInfoGUI::on_ByAddress);

}


void BluetoothInfoGUI::on_ByAddress()
{
    ITEMS_DATA::SERVICE aa = ITEMS_DATA::SERVICE("MAP");

    aa.addServiceItem(ui);

    aa.createAttributeItem("Service Record", 1);
    //aa.addAttributeItem(0);

    aa.createAttributeItem("Service Class ID", 1);
    //aa.addAttributeItem(1);
}

