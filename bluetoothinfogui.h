#pragma once

#include <QtWidgets>
#include "ui_bluetoothinfogui.h"
#include "ui_by_address_dialog.h"






class Dialog : public QDialog
{
    // TODO: dodaj gumb za clear all selections preko  dd.set_all_SDP_service_for_search(); in setCehckBoxes();
    
    
    Q_OBJECT

public:
    Dialog(QWidget* parent = Q_NULLPTR);

    ~Dialog();

    void setCehckBoxes();

    int flag_check;

signals:
    void stateChanged(int);
    void button0();
    void checkBox2(int);
    void checkBox3(int);
    void checkBox4(int);
    void checkBox5(int);
    void checkBox6(int);
    void checkBox7(int);
    void checkBox8(int);
    void checkBox9(int);
    void checkBox10(int);
    void checkBox11(int);
    void checkBox12(int);
    void checkBox13(int);
    void checkBox14(int);
    void checkBox15(int);



    

public slots:
    void check_all_services(int state);
    

private:
    Ui::Dialog* ui_dialog;
    
};






class BluetoothInfoGUI : public QMainWindow
{
    Q_OBJECT

public:
    BluetoothInfoGUI(QWidget *parent = Q_NULLPTR);


    Dialog* dialog;
    ~BluetoothInfoGUI();


    void on_SearchAndSelect();
    void on_ByAddress();
    void on_About();
    void on_Exit();

    void printLog(QString str, int append = 1);

private slots:
    void connect_and_search();
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










