#pragma once

#include <QtWidgets>
#include "ui_bluetoothinfogui.h"

class BluetoothInfoGUI : public QMainWindow
{
    Q_OBJECT

public:
    BluetoothInfoGUI(QWidget *parent = Q_NULLPTR);


    //void on_SearchAndSelect();
    void on_ByAddress();
    //void on_About();
    //void on_Exit();


private:
    Ui::BluetoothInfoGUIClass ui;
};





#include "items_data.h"