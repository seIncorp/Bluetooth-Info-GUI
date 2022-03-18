#include "main.h"


/**********************************************************************************************************************************/
/* MAIN WINDOW */

BluetoothInfoGUI::BluetoothInfoGUI(QWidget *parent) : QMainWindow(parent)
{
    ui.setupUi(this);
    //setCentralWidget(ui.treeWidget);
    
    flags = { 0 };
    search_attr.setAllTo(1);
    print_attr.setAllTo(1);

    /********************/
    /* MENU actions */

    // Connect by address
    connect(ui.action_By_Address, &QAction::triggered, this, &BluetoothInfoGUI::on_ByAddress);

    // Radio data
    connect(ui.action_Radio_data, &QAction::triggered, this, &BluetoothInfoGUI::on_radioData);

    // search and select
    connect(ui.action_Search_and_Select, &QAction::triggered, this, &BluetoothInfoGUI::on_SearchAndSelect);

    // settings
    connect(ui.actionSettings, &QAction::triggered, this, &BluetoothInfoGUI::on_settings);

    // about
    connect(ui.actionAbout, &QAction::triggered, this, &BluetoothInfoGUI::on_About);

    // Exit
    connect(ui.action_Exit, &QAction::triggered, this, &BluetoothInfoGUI::on_Exit);
    
    

    
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
    



    dialog = new ByAddress(this);

    QMetaObject::Connection aa = connect(dialog, &ByAddress::button0, this, &BluetoothInfoGUI::connect_and_search);

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

void BluetoothInfoGUI::on_settings()
{
    settings_dialog = new Settings(this);
    settings_dialog->setVisible(true);
    settings_dialog->show();
    settings_dialog->exec();


    char test[100];
    sprintf_s(test, "--> %d", search_attr.audiosource.ServiceName);
    printLog(test);
}

void BluetoothInfoGUI::on_About()
{

}

void BluetoothInfoGUI::on_Exit()
{
    IOCTL_S::closeConnectionToDevice(&dd);
}



void BluetoothInfoGUI::on_radioData()
{
    radio_dialog = new Radio(this);

    QMetaObject::Connection aa = connect(radio_dialog, &Radio::connect, this, &BluetoothInfoGUI::connect_local_radio);

    radio_dialog->setVisible(true);
    radio_dialog->show();
    radio_dialog->exec();

}


void BluetoothInfoGUI::connect_local_radio()
{
    //printLog("> connect_local_radio");

    radio_dialog->hide();

    /********************************************************************/
    /* CONNECTION TO LOCAL RADIO */

    QString temp = "";

    if (IOCTL_S::connectToDevice(L"\\\\?\\GLOBALROOT\\Device\\USBPDO-7", &dd) == 1)
    {
        printLog("> Connected to local radio", 0);
        //ui.statusBar->showMessage("Connected to local radio");
    }
    else
    {
        printLog("> ERROR to connect", 0);
        
        //ui.textEdit->setText("> ERROR to connect");
        //ui.statusBar->showMessage("ERROR to connect");
    }


    
}

void BluetoothInfoGUI::connect_and_search()
{

    printLog("NAJ BI SE POVEZALO IN DOBILO PODATKE");

    //char add[] = "A8:B8:6E:E7:5A:B6";
    char add[] = "44:80:EB:EF:D2:CE";

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
            printLog("> Headset is checked");
            dd.services_for_search.Headset = 0x01;
        break;

        case Qt::Unchecked:
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
            printLog("> Headset_AG is checked");
            dd.services_for_search.Headset_Audio_Gateway = 0x01;
        break;

        case Qt::Unchecked:
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
            printLog("> AudioSource is checked");
            dd.services_for_search.AudioSource = 0x01;
        break;

        case Qt::Unchecked:
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
            printLog("> Hands-Free is checked");
            dd.services_for_search.Handsfree = 0x01;
        break;

        case Qt::Unchecked:
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
            printLog("> Hands-free AG is checked");
            dd.services_for_search.HandsfreeAudioGateway = 0x01;
        break;

        case Qt::Unchecked:
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
            printLog("> Objec tPush is checked");
            dd.services_for_search.OBEXObjectPush = 0x01;
        break;

        case Qt::Unchecked:
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
            printLog("> AV RemoteControl is checked");
            dd.services_for_search.A_V_RemoteControl = 0x01;
        break;

        case Qt::Unchecked:
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
            printLog("> AV Remote Control Target is checked");
            dd.services_for_search.A_V_RemoteControlTarget = 0x01;
        break;

        case Qt::Unchecked:
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
            printLog("> AV Remote Control Controller is checked");
            dd.services_for_search.A_V_RemoteControlController = 0x01;
        break;

        case Qt::Unchecked:
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
            printLog("> PANU is checked");
            dd.services_for_search.PANU = 0x01;
        break;

        case Qt::Unchecked:
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
            printLog("> NAP is checked");
            dd.services_for_search._NAP = 0x01;
        break;

        case Qt::Unchecked:
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
            printLog("> PBAP is checked");
            dd.services_for_search.Phonebook_Access_PSE = 0x01;
        break;

        case Qt::Unchecked:
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
            printLog("> MAP is checked");
            dd.services_for_search.Message_Access_Server = 0x01;
        break;

        case Qt::Unchecked:
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
            printLog("> PnP info is checked");
            dd.services_for_search.PnPInformation = 0x01;
        break;

        case Qt::Unchecked:
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










