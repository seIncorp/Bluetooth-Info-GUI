//#include "main.h"
#include "main.h"
//#include "bluetoothinfogui.h"



//IOCTL_S::DEFAULT_DATA dd;
/**********************************************************************************************************************************/
/* MAIN WINDOW */

BluetoothInfoGUI::BluetoothInfoGUI(QWidget *parent) : QMainWindow(parent)
{
    ui.setupUi(this);
    //setCentralWidget(ui.treeWidget);
    
    /********************/
    /* MENU actions */

    // Connect by address
    connect(ui.action_By_Address, &QAction::triggered, this, &BluetoothInfoGUI::on_ByAddress);

    // search and select
    connect(ui.action_Search_and_Select, &QAction::triggered, this, &BluetoothInfoGUI::on_SearchAndSelect);

    // about
    connect(ui.actionAbout, &QAction::triggered, this, &BluetoothInfoGUI::on_About);

    // Exit
    connect(ui.action_Exit, &QAction::triggered, this, &BluetoothInfoGUI::on_Exit);

    /********************************************************************/
    /* CONNECTION TO LOCAL RADIO */

    if (IOCTL_S::connectToDevice(L"\\\\?\\GLOBALROOT\\Device\\USBPDO-4", &dd) == 1)
    {
        
        printLog("> Connected to local radio", 0);
        //ui.statusBar->showMessage("Connected to local radio");
    }
    else
    {
        ui.textEdit->setText("> ERROR to connect");
        //ui.statusBar->showMessage("ERROR to connect");
    }
}

BluetoothInfoGUI::~BluetoothInfoGUI()
{
//    delete &ui;

    IOCTL_S::closeConnectionToDevice(&dd);

}

void BluetoothInfoGUI::on_ByAddress()
{
    //ITEMS_DATA::SERVICE aa = ITEMS_DATA::SERVICE("MAP");

    //aa.addServiceItem(ui);

    //aa.createAttributeItem("Service Record", 1);
    ////aa.addAttributeItem(0);

    //aa.createAttributeItem("Service Class ID", 1);
    ////aa.addAttributeItem(1);
    



    dialog = new Dialog(this);

    QMetaObject::Connection aa = connect(dialog, &Dialog::button0, this, &BluetoothInfoGUI::connect_and_search);

    aa = connect(dialog, SIGNAL(checkBox2(int)), this, SLOT(saveState_2(int)));
    aa = connect(dialog, SIGNAL(checkBox3(int)), this, SLOT(saveState_3(int)));
    aa = connect(dialog, SIGNAL(checkBox4(int)), this, SLOT(saveState_4(int)));
    aa = connect(dialog, SIGNAL(checkBox5(int)), this, SLOT(saveState_5(int)));
    aa = connect(dialog, SIGNAL(checkBox6(int)), this, SLOT(saveState_6(int)));
    aa = connect(dialog, SIGNAL(checkBox7(int)), this, SLOT(saveState_7(int)));
    aa = connect(dialog, SIGNAL(checkBox8(int)), this, SLOT(saveState_8(int)));
    aa = connect(dialog, SIGNAL(checkBox9(int)), this, SLOT(saveState_9(int)));
    aa = connect(dialog, SIGNAL(checkBox10(int)), this, SLOT(saveState_10(int)));
    aa = connect(dialog, SIGNAL(checkBox11(int)), this, SLOT(saveState_11(int)));
    aa = connect(dialog, SIGNAL(checkBox12(int)), this, SLOT(saveState_12(int)));
    aa = connect(dialog, SIGNAL(checkBox13(int)), this, SLOT(saveState_13(int)));
    aa = connect(dialog, SIGNAL(checkBox14(int)), this, SLOT(saveState_14(int)));
    aa = connect(dialog, SIGNAL(checkBox15(int)), this, SLOT(saveState_15(int)));

    //if (aa == NULL)
    //{
    //    //QString test = "aaaa";
    //    ui.statusBar->showMessage("EEROR");
    //}
    dialog->setVisible(true);
    dialog->show();
    dialog->exec(); 
}

void BluetoothInfoGUI::on_SearchAndSelect()
{

}

void BluetoothInfoGUI::on_About()
{

}

void BluetoothInfoGUI::on_Exit()
{
    IOCTL_S::closeConnectionToDevice(&dd);
}

void BluetoothInfoGUI::connect_and_search()
{
    
    printLog("NAJ BI SE POVEZALO IN DOBILO PODATKE");

    char add[] = "A8:B8:6E:E7:5A:B6";

    if (IOCTL_S::SDPsearch(&dd, add) == 1)
    {
        printLog("> SDP search complete");
    }
    else
    {
        printLog("> ERROR SDPsearch");
    }

    dialog->close();
}

void BluetoothInfoGUI::saveState_2(int state)      // Headset
{
    switch (state)
    {
        case Qt::Checked:
            //ui.textEdit->append("> Headset is checked");
            printLog("> Headset is checked");
            dd.services_for_search.Headset = 0x01;
        break;

        case Qt::Unchecked:
            //ui.textEdit->append("> Headset is unchecked");
            printLog("> Headset is unchecked");
            dd.services_for_search.Headset = 0x00;
        break;
    }
}

void BluetoothInfoGUI::saveState_3(int state)      // Headset_AG
{
    switch (state)
    {
        case Qt::Checked:
            //ui.statusBar->showMessage("Headset_AG is checked");
            printLog("> Headset_AG is checked");
            dd.services_for_search.Headset_Audio_Gateway = 0x01;
        break;

        case Qt::Unchecked:
            //ui.statusBar->showMessage("Headset_AG is unchecked");
            printLog("> Headset_AG is unchecked");
            dd.services_for_search.Headset_Audio_Gateway = 0x00;
        break;
    }
}

void BluetoothInfoGUI::saveState_4(int state)      // AudioSource
{
    switch (state)
    {
        case Qt::Checked:
            //ui.statusBar->showMessage("AudioSource is checked");
            printLog("> AudioSource is checked");
            dd.services_for_search.AudioSource = 0x01;
        break;

        case Qt::Unchecked:
            //ui.statusBar->showMessage("AudioSource is unchecked");
            printLog("> AudioSource is unchecked");
            dd.services_for_search.AudioSource = 0x00;
        break;
    }
}

void BluetoothInfoGUI::saveState_5(int state)      // Hands-Free
{
    switch (state)
    {
        case Qt::Checked:
            //ui.statusBar->showMessage("Hands-Free is checked");
            printLog("> Hands-Free is checked");
            dd.services_for_search.Handsfree = 0x01;
        break;

        case Qt::Unchecked:
            //ui.statusBar->showMessage("Hands-Free is unchecked");
            printLog("> Hands-Free is unchecked");
            dd.services_for_search.Handsfree = 0x00;
        break;
    }
}

void BluetoothInfoGUI::saveState_6(int state)      // Hands-free AG
{
    switch (state)
    {
        case Qt::Checked:
            //ui.statusBar->showMessage("Hands-free AG is checked");
            printLog("> Hands-free AG is checked");
            dd.services_for_search.HandsfreeAudioGateway = 0x01;
        break;

        case Qt::Unchecked:
            //ui.statusBar->showMessage("Hands-free AG is unchecked");
            printLog("> Hands-free AG is unchecked");
            dd.services_for_search.HandsfreeAudioGateway = 0x00;
        break;
    }
}

void BluetoothInfoGUI::saveState_7(int state)      // Objec tPush
{
    switch (state)
    {
        case Qt::Checked:
            //ui.statusBar->showMessage("Objec tPush is checked");
            printLog("> Objec tPush is checked");
            dd.services_for_search.OBEXObjectPush = 0x01;
        break;

        case Qt::Unchecked:
            //ui.statusBar->showMessage("Objec tPush is unchecked");
            printLog("> Objec tPush is unchecked");
            dd.services_for_search.OBEXObjectPush = 0x00;
        break;
    }
}

void BluetoothInfoGUI::saveState_8(int state)      // AV RemoteControl
{
    switch (state)
    {
        case Qt::Checked:
            //ui.statusBar->showMessage("AV RemoteControl is checked");
            printLog("> AV RemoteControl is checked");
            dd.services_for_search.A_V_RemoteControl = 0x01;
        break;

        case Qt::Unchecked:
            //ui.statusBar->showMessage("AV RemoteControl is unchecked");
            printLog("> AV RemoteControl is unchecked");
            dd.services_for_search.A_V_RemoteControl = 0x00;
        break;
    }
}

void BluetoothInfoGUI::saveState_9(int state)      // AV Remote Control Target
{
    switch (state)
    {
        case Qt::Checked:
            //ui.statusBar->showMessage("AV Remote Control Target is checked");
            printLog("> AV Remote Control Target is checked");
            dd.services_for_search.A_V_RemoteControlTarget = 0x01;
        break;

        case Qt::Unchecked:
            //ui.statusBar->showMessage("AV Remote Control Target is unchecked");
            printLog("> AV Remote Control Target is unchecked");
            dd.services_for_search.A_V_RemoteControlTarget = 0x00;
        break;
    }
}

void BluetoothInfoGUI::saveState_10(int state)      // AV Remote Control Controller
{
    switch (state)
    {
        case Qt::Checked:
            //ui.statusBar->showMessage("AV Remote Control Controller is checked");
            printLog("> AV Remote Control Controller is checked");
            dd.services_for_search.A_V_RemoteControlController = 0x01;
        break;

        case Qt::Unchecked:
            //ui.statusBar->showMessage("AV Remote Control Controller is unchecked");
            printLog("> AV Remote Control Controller is unchecked");
            dd.services_for_search.A_V_RemoteControlController = 0x00;
        break;
    }
}

void BluetoothInfoGUI::saveState_11(int state)      // PANU
{
    switch (state)
    {
        case Qt::Checked:
            //ui.statusBar->showMessage("PANU is checked");
            printLog("> PANU is checked");
            dd.services_for_search.PANU = 0x01;
        break;

        case Qt::Unchecked:
            //ui.statusBar->showMessage("PANU is unchecked");
            printLog("> PANU is unchecked");
            dd.services_for_search.PANU = 0x00;
        break;
    }
}

void BluetoothInfoGUI::saveState_12(int state)      // NAP
{
    switch (state)
    {
        case Qt::Checked:
            //ui.statusBar->showMessage("NAP is checked");
            printLog("> NAP is checked");
            dd.services_for_search._NAP = 0x01;
        break;

        case Qt::Unchecked:
            //ui.statusBar->showMessage("NAP is unchecked");
            printLog("> NAP is unchecked");
            dd.services_for_search._NAP = 0x00;
        break;
    }
}

void BluetoothInfoGUI::saveState_13(int state)      // PBAP
{
    switch (state)
    {
        case Qt::Checked:
            //ui.statusBar->showMessage();
            printLog("> PBAP is checked");
            dd.services_for_search.Phonebook_Access_PSE = 0x01;
        break;

        case Qt::Unchecked:
            //ui.statusBar->showMessage("PBAP is unchecked");
            printLog("> PBAP is unchecked");
            dd.services_for_search.Phonebook_Access_PSE = 0x00;
        break;
    }
}

void BluetoothInfoGUI::saveState_14(int state)      // MAP
{
    switch (state)
    {
        case Qt::Checked:
            //ui.statusBar->showMessage();
            printLog("> MAP is checked");
            dd.services_for_search.Message_Access_Server = 0x01;
        break;

        case Qt::Unchecked:
            //ui.statusBar->showMessage("MAP is unchecked");
            printLog("> MAP is unchecked");
            dd.services_for_search.Message_Access_Server = 0x00;
        break;
    }
}

void BluetoothInfoGUI::saveState_15(int state)      // PnP info
{
    switch (state)
    {
        case Qt::Checked:
            //ui.statusBar->showMessage("PnP info is checked");
            printLog("> PnP info is checked");
            dd.services_for_search.PnPInformation = 0x01;
        break;

        case Qt::Unchecked:
            //ui.statusBar->showMessage("PnP info is unchecked");
            printLog("> PnP info is unchecked");
            dd.services_for_search.PnPInformation = 0x00;
        break;
    }
}


void BluetoothInfoGUI::printLog(QString str, int append)
{
    // TODO: add time for every line of log

    if(append == 0)
        ui.textEdit->setText(str);
    else
        ui.textEdit->append(str);
}


/**********************************************************************************************************************************/
/* DIALOG */

Dialog::Dialog(QWidget* parent) : QDialog(parent), ui_dialog(new Ui::Dialog)
{
    ui_dialog->setupUi(this);

    QMetaObject::Connection aa = connect(ui_dialog->checkBox, SIGNAL(stateChanged(int)), this, SLOT(check_all_services(int)));

    if (aa == NULL)
    {
        //QString test = "aaaa";
        //ui_dialog->lineEdit->setText(test);
    }

    aa = connect(ui_dialog->pushButton, &QPushButton::clicked, this, &Dialog::button0);
    
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

Dialog::~Dialog()
{
    delete ui_dialog;
}

void Dialog::setCehckBoxes()
{
    
    
    /*if (flag_check == 1)
    {
        ui_dialog->checkBox->setCheckState(Qt::Checked);
        BluetoothInfoGUI::printLog("CHECKLED");
    }
    else
        ui_dialog->checkBox->setCheckState(Qt::Unchecked);*/
    
    ui_dialog->checkBox_2->setCheckState(dd.services_for_search.Headset == 1                        ? Qt::Checked : Qt::Unchecked);
    ui_dialog->checkBox_3->setCheckState(dd.services_for_search.Headset_Audio_Gateway == 1          ? Qt::Checked : Qt::Unchecked);
    ui_dialog->checkBox_4->setCheckState(dd.services_for_search.AudioSource == 1                    ? Qt::Checked : Qt::Unchecked);
    ui_dialog->checkBox_5->setCheckState(dd.services_for_search.Handsfree == 1                      ? Qt::Checked : Qt::Unchecked);
    ui_dialog->checkBox_6->setCheckState(dd.services_for_search.HandsfreeAudioGateway == 1          ? Qt::Checked : Qt::Unchecked);
    ui_dialog->checkBox_7->setCheckState(dd.services_for_search.OBEXObjectPush == 1                 ? Qt::Checked : Qt::Unchecked);
    ui_dialog->checkBox_8->setCheckState(dd.services_for_search.A_V_RemoteControl == 1              ? Qt::Checked : Qt::Unchecked);
    ui_dialog->checkBox_9->setCheckState(dd.services_for_search.A_V_RemoteControlTarget == 1        ? Qt::Checked : Qt::Unchecked);
    ui_dialog->checkBox_10->setCheckState(dd.services_for_search.A_V_RemoteControlController == 1   ? Qt::Checked : Qt::Unchecked);
    ui_dialog->checkBox_11->setCheckState(dd.services_for_search.PANU == 1                          ? Qt::Checked : Qt::Unchecked);
    ui_dialog->checkBox_12->setCheckState(dd.services_for_search._NAP == 1                          ? Qt::Checked : Qt::Unchecked);
    ui_dialog->checkBox_13->setCheckState(dd.services_for_search.Phonebook_Access_PSE == 1          ? Qt::Checked : Qt::Unchecked);
    ui_dialog->checkBox_14->setCheckState(dd.services_for_search.Message_Access_Server == 1         ? Qt::Checked : Qt::Unchecked);
    ui_dialog->checkBox_15->setCheckState(dd.services_for_search.PnPInformation == 1                ? Qt::Checked : Qt::Unchecked);
}

void Dialog::check_all_services(int state)
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





