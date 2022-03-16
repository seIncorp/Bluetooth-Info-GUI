#pragma once


#include <stdio.h>
#include <vector>
#include <iostream>

#include <initguid.h>
#include <winsock2.h>
#include <ws2bth.h>
#include <strsafe.h>
#include <intsafe.h>
#include <bluetoothapis.h>
#include <bthdef.h>
#include <bthsdpdef.h>
#include <combaseapi.h>
#include <bthioctl.h>


#include <QtWidgets/QDialog>
#include <QtWidgets/QMainWindow>
//#include "ui_bluetoothinfogui.h"
//#include "ui_by_address_dialog.h"


#pragma comment(lib, "Ws2_32.lib")
#pragma comment(lib, "Bthprops.lib")
#pragma comment(lib, "Ole32.lib")


#include "ioctl_data.h"
#pragma comment(lib, "SDP_data.lib")
extern IOCTL_S::DEFAULT_DATA dd;


#include "bluetoothinfogui.h"
#include "settingsgui.h"
#include "radiogui.h"
#include "byaddressgui.h"
#include <QtWidgets/QApplication>



#include "items_data.h"












//#include <QtWidgets>
//#include "ui_bluetoothinfogui.h"
//#include "ui_by_address_dialog.h"











//extern IOCTL_S::DEFAULT_DATA dd;



