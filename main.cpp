//#include "main.h"

//#include "qtwidgetsapplication1_test_1.h"

//#include <QtWidgets>
//#include <QtWidgets/QApplication>
//#include "ui_bluetoothinfogui.h"
//#include "ui_by_address_dialog.h"
//

#include "main.h"



/*
    TODO za DLL:
        - dodaj da se vrne int status za closetodevice
        - dodaj za export data v json in excel

*/


SEARCH_SETTINGS::SEARCH_ATTR search_attr;

IOCTL_S::DEFAULT_DATA dd;


int main(int argc, char *argv[])
{
    dd.sdp_settings.print_info = 1;
    dd.sdp_settings.debug = 1;
    
    QApplication a(argc, argv);
    BluetoothInfoGUI w;
    w.show();

    

    return a.exec();
}
