#include "main.h"

/**********************************************************************************************************************************/
/* DIALOG */

ByAddress::ByAddress(QWidget* parent) : QDialog(parent), ui_dialog(new Ui::Dialog)
{
    ui_dialog->setupUi(this);

    QMetaObject::Connection aa = connect(ui_dialog->checkBox, SIGNAL(stateChanged(int)), this, SLOT(check_all_services(int)));

    if (aa == NULL)
    {
        //QString test = "aaaa";
        //ui_dialog->lineEdit->setText(test);
    }

    aa = connect(ui_dialog->pushButton, &QPushButton::clicked, this, &ByAddress::button0);

    aa = connect(ui_dialog->checkBox_2, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox2(int)));
    aa = connect(ui_dialog->checkBox_3, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox3(int)));
    aa = connect(ui_dialog->checkBox_4, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox4(int)));
    aa = connect(ui_dialog->checkBox_5, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox5(int)));
    aa = connect(ui_dialog->checkBox_6, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox6(int)));
    aa = connect(ui_dialog->checkBox_7, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox7(int)));
    aa = connect(ui_dialog->checkBox_8, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox8(int)));
    aa = connect(ui_dialog->checkBox_9, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox9(int)));
    aa = connect(ui_dialog->checkBox_10, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox10(int)));
    aa = connect(ui_dialog->checkBox_11, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox11(int)));
    aa = connect(ui_dialog->checkBox_12, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox12(int)));
    aa = connect(ui_dialog->checkBox_13, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox13(int)));
    aa = connect(ui_dialog->checkBox_14, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox14(int)));
    aa = connect(ui_dialog->checkBox_15, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox15(int)));


    setCehckBoxes();


    /*if (aa == NULL)
    {
        QString test = "ERROR!!";
        ui_dialog->lineEdit->setText(test);
    }*/
}

ByAddress::~ByAddress()
{
    delete ui_dialog;
}

void ByAddress::setCehckBoxes()
{


    /*if (flag_check == 1)
    {
        ui_dialog->checkBox->setCheckState(Qt::Checked);
        BluetoothInfoGUI::printLog("CHECKLED");
    }
    else
        ui_dialog->checkBox->setCheckState(Qt::Unchecked);*/

    ui_dialog->checkBox_2->setCheckState(dd.services_for_search.Headset == 1 ? Qt::Checked : Qt::Unchecked);
    ui_dialog->checkBox_3->setCheckState(dd.services_for_search.Headset_Audio_Gateway == 1 ? Qt::Checked : Qt::Unchecked);
    ui_dialog->checkBox_4->setCheckState(dd.services_for_search.AudioSource == 1 ? Qt::Checked : Qt::Unchecked);
    ui_dialog->checkBox_5->setCheckState(dd.services_for_search.Handsfree == 1 ? Qt::Checked : Qt::Unchecked);
    ui_dialog->checkBox_6->setCheckState(dd.services_for_search.HandsfreeAudioGateway == 1 ? Qt::Checked : Qt::Unchecked);
    ui_dialog->checkBox_7->setCheckState(dd.services_for_search.OBEXObjectPush == 1 ? Qt::Checked : Qt::Unchecked);
    ui_dialog->checkBox_8->setCheckState(dd.services_for_search.A_V_RemoteControl == 1 ? Qt::Checked : Qt::Unchecked);
    ui_dialog->checkBox_9->setCheckState(dd.services_for_search.A_V_RemoteControlTarget == 1 ? Qt::Checked : Qt::Unchecked);
    ui_dialog->checkBox_10->setCheckState(dd.services_for_search.A_V_RemoteControlController == 1 ? Qt::Checked : Qt::Unchecked);
    ui_dialog->checkBox_11->setCheckState(dd.services_for_search.PANU == 1 ? Qt::Checked : Qt::Unchecked);
    ui_dialog->checkBox_12->setCheckState(dd.services_for_search._NAP == 1 ? Qt::Checked : Qt::Unchecked);
    ui_dialog->checkBox_13->setCheckState(dd.services_for_search.Phonebook_Access_PSE == 1 ? Qt::Checked : Qt::Unchecked);
    ui_dialog->checkBox_14->setCheckState(dd.services_for_search.Message_Access_Server == 1 ? Qt::Checked : Qt::Unchecked);
    ui_dialog->checkBox_15->setCheckState(dd.services_for_search.PnPInformation == 1 ? Qt::Checked : Qt::Unchecked);
}

void ByAddress::check_all_services(int state)
{
    switch (state)
    {
    case Qt::Checked:
        //flag_check = 1;

        if (!ui_dialog->checkBox_2->isChecked())
            ui_dialog->checkBox_2->setCheckState(Qt::Checked);

        if (!ui_dialog->checkBox_3->isChecked())
            ui_dialog->checkBox_3->setCheckState(Qt::Checked);

        if (!ui_dialog->checkBox_4->isChecked())
            ui_dialog->checkBox_4->setCheckState(Qt::Checked);

        if (!ui_dialog->checkBox_5->isChecked())
            ui_dialog->checkBox_5->setCheckState(Qt::Checked);

        if (!ui_dialog->checkBox_6->isChecked())
            ui_dialog->checkBox_6->setCheckState(Qt::Checked);

        if (!ui_dialog->checkBox_7->isChecked())
            ui_dialog->checkBox_7->setCheckState(Qt::Checked);

        if (!ui_dialog->checkBox_8->isChecked())
            ui_dialog->checkBox_8->setCheckState(Qt::Checked);

        if (!ui_dialog->checkBox_9->isChecked())
            ui_dialog->checkBox_9->setCheckState(Qt::Checked);

        if (!ui_dialog->checkBox_10->isChecked())
            ui_dialog->checkBox_10->setCheckState(Qt::Checked);

        if (!ui_dialog->checkBox_11->isChecked())
            ui_dialog->checkBox_11->setCheckState(Qt::Checked);

        if (!ui_dialog->checkBox_12->isChecked())
            ui_dialog->checkBox_12->setCheckState(Qt::Checked);

        if (!ui_dialog->checkBox_13->isChecked())
            ui_dialog->checkBox_13->setCheckState(Qt::Checked);

        if (!ui_dialog->checkBox_14->isChecked())
            ui_dialog->checkBox_14->setCheckState(Qt::Checked);

        if (!ui_dialog->checkBox_15->isChecked())
            ui_dialog->checkBox_15->setCheckState(Qt::Checked);
        break;

    case Qt::Unchecked:
        //flag_check = 0;

        if (ui_dialog->checkBox_2->isChecked())
            ui_dialog->checkBox_2->setCheckState(Qt::Unchecked);

        if (ui_dialog->checkBox_3->isChecked())
            ui_dialog->checkBox_3->setCheckState(Qt::Unchecked);

        if (ui_dialog->checkBox_4->isChecked())
            ui_dialog->checkBox_4->setCheckState(Qt::Unchecked);

        if (ui_dialog->checkBox_5->isChecked())
            ui_dialog->checkBox_5->setCheckState(Qt::Unchecked);

        if (ui_dialog->checkBox_6->isChecked())
            ui_dialog->checkBox_6->setCheckState(Qt::Unchecked);

        if (ui_dialog->checkBox_7->isChecked())
            ui_dialog->checkBox_7->setCheckState(Qt::Unchecked);

        if (ui_dialog->checkBox_8->isChecked())
            ui_dialog->checkBox_8->setCheckState(Qt::Unchecked);

        if (ui_dialog->checkBox_9->isChecked())
            ui_dialog->checkBox_9->setCheckState(Qt::Unchecked);

        if (ui_dialog->checkBox_10->isChecked())
            ui_dialog->checkBox_10->setCheckState(Qt::Unchecked);

        if (ui_dialog->checkBox_11->isChecked())
            ui_dialog->checkBox_11->setCheckState(Qt::Unchecked);

        if (ui_dialog->checkBox_12->isChecked())
            ui_dialog->checkBox_12->setCheckState(Qt::Unchecked);

        if (ui_dialog->checkBox_13->isChecked())
            ui_dialog->checkBox_13->setCheckState(Qt::Unchecked);

        if (ui_dialog->checkBox_14->isChecked())
            ui_dialog->checkBox_14->setCheckState(Qt::Unchecked);

        if (ui_dialog->checkBox_15->isChecked())
            ui_dialog->checkBox_15->setCheckState(Qt::Unchecked);
        break;
    }
}








