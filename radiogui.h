#pragma once

#include "ui_radio_data.h"




class Radio : public QDialog
{
    // TODO: dodaj gumb za clear all selections preko  dd.set_all_SDP_service_for_search(); in setCehckBoxes();


    Q_OBJECT

public:
    Radio(QWidget* parent = Q_NULLPTR);

    ~Radio();


signals:
    void connect();
    void close();


private:
    Ui::Dialog_Radio* ui_dialog_radio;

};