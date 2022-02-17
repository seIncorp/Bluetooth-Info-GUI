#pragma once

#include <QtWidgets>
#include "ui_bluetoothinfogui.h"

class BluetoothInfoGUI : public QMainWindow
{
    Q_OBJECT

public:
    BluetoothInfoGUI(QWidget *parent = Q_NULLPTR);

private:
    Ui::BluetoothInfoGUIClass ui;
};

#include "items_data.h"