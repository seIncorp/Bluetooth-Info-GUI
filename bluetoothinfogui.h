#pragma once

#include <QtWidgets>
#include "ui_bluetoothinfogui.h"
#include "settingsgui.h"
#include "radiogui.h"
#include "byaddressgui.h"



class BluetoothInfoGUI : public QMainWindow
{
    Q_OBJECT

public:
    BluetoothInfoGUI(QWidget *parent = Q_NULLPTR);
    ~BluetoothInfoGUI();

    ByAddress* dialog;
    Radio* radio_dialog;
    Settings* settings_dialog;

    struct FLAGS
    {
        int connected_local_radio;
    };
    FLAGS flags;

    void on_SearchAndSelect();
    void on_ByAddress();
    void on_radioData();
    void on_settings();
    void on_About();
    void on_Exit();

   

    void printLog(QString str, int append = 1);



private slots:
    void connect_and_search();
    void connect_local_radio();
    void saveState_2(int state);
    void saveState_3(int state);
    void saveState_4(int state);
    void saveState_5(int state);
    void saveState_6(int state);
    void saveState_7(int state);
    void saveState_8(int state);
    void saveState_9(int state);
    void saveState_10(int state);
    void saveState_11(int state);
    void saveState_12(int state);
    void saveState_13(int state);
    void saveState_14(int state);
    void saveState_15(int state);

private:
    Ui::BluetoothInfoGUIClass ui;

    
};










