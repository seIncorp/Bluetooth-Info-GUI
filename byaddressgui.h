#pragma once

#include "ui_by_address_dialog.h"

class ByAddress : public QDialog
{
    // TODO: dodaj gumb za clear all selections preko  dd.set_all_SDP_service_for_search(); in setCehckBoxes();


    Q_OBJECT

public:
    ByAddress(QWidget* parent = Q_NULLPTR);

    ~ByAddress();

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