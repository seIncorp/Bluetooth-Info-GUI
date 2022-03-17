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


namespace SEARCH_SETTINGS
{
    struct SEARCH_ATTR
    {
        union HEADSET
        {
            struct
            {
                int ServiceRecord;
                int ServiceClassIDList;
                int ProtocolDescriptorList;
                int ServiceName;
                int BluetoothProfileDescriptorList;

                int RemoteAudioVolumeControl;
            };
            int init[6];
        };

        union HEADSET_AG
        {
            struct
            {
                int ServiceRecord;
                int ServiceClassIDList;
                int ProtocolDescriptorList;
                int ServiceName;
                int BluetoothProfileDescriptorList;

                int RemoteAudioVolumeControl;
            };
            int init[6];
        };

        union AUDIOSOURCE
        {
            struct
            {
                int ServiceRecord;
                int ServiceClassIDList;
                int ProtocolDescriptorList;
                int ServiceName;
                int BluetoothProfileDescriptorList;
                int ProviderName;

                int SupportedFeatures;
            };
            int init[7];
        };

        union HANDSFREE
        {
            struct
            {
                int ServiceRecord;
                int ServiceClassIDList;
                int ProtocolDescriptorList;
                int ServiceName;
                int BluetoothProfileDescriptorList;
            
                int Network;
                int SupportedFeatures;
            };
            int init[7];
        };

        union HANDSFREE_AG
        {
            struct
            {
                int ServiceRecord;
                int ServiceClassIDList;
                int ProtocolDescriptorList;
                int ServiceName;
                int BluetoothProfileDescriptorList;

                int Network;
                int SupportedFeatures;
            };
            int init[7];
        };

        union OBJECTPUSH
        {
            struct
            {
                int ServiceRecord;
                int ServiceClassIDList;
                int ProtocolDescriptorList;
                int ServiceName;
                int BluetoothProfileDescriptorList;

                int Goepl2cappsm;
                int SupportedFormats;
                int ServiceVersion;
            };
            int init[8];
        };

        union AV_REMOTECONTROL
        {
            struct
            {
                int ServiceRecord;
                int ServiceClassIDList;
                int ProtocolDescriptorList;
                int ServiceName;
                int BluetoothProfileDescriptorList;

                int ProviderName;
                int SupportedFeatures;
            };
            int init[7];
        };

        union AV_REMOTECONTROLTARGET
        {
            struct
            {
                int ServiceRecord;
                int ServiceClassIDList;
                int ProtocolDescriptorList;
                int ServiceName;
                int BluetoothProfileDescriptorList;

                int ProviderName;
                int SupportedFeatures;
            };
            int init[7];
        };

        union AV_REMOTECONTROLCONTROLLER
        {
            struct
            {
                int ServiceRecord;
                int ServiceClassIDList;
                int ProtocolDescriptorList;
                int ServiceName;
                int BluetoothProfileDescriptorList;

                int ProviderName;
                int SupportedFeatures;
            };
            int init[7];
        };

        union PANU
        {
            struct
            {
                int ServiceRecord;
                int ServiceClassIDList;
                int ProtocolDescriptorList;
                int ServiceName;
                int BluetoothProfileDescriptorList;

                int LanguageBaseAttributeIdList;
                int ServiceDescription;
                int SecurityDescription;
            };
            int init[8];
        };

        union NAP
        {
            struct
            {
                int ServiceRecord;
                int ServiceClassIDList;
                int ProtocolDescriptorList;
                int ServiceName;
                int BluetoothProfileDescriptorList;

                int LanguageBaseAttributeIdList;
                int ServiceDescription;
                int SecurityDescription;
                int NetAccessType;
                int MaxNetAccessRate;
            };
            int init[10];
        };

        union PBAP
        {
            struct
            {
                int ServiceRecord;
                int ServiceClassIDList;
                int ProtocolDescriptorList;
                int ServiceName;
                int BluetoothProfileDescriptorList;

                int Goepl2cappsm;
                int SupportedRepositories;
                int SupportedFeatures;
            };
            int init[8];
        };

        union MAP
        {
            struct
            {
                int ServiceRecord;
                int ServiceClassIDList;
                int ProtocolDescriptorList;
                int ServiceName;
                int BluetoothProfileDescriptorList;

                int Goepl2cappsm;
                int SupportedMessageTypes;
                int MasInstanceId;
                int MapSupportedFeatures;
            };
            int init[9];
        };


        HEADSET headset;
        HEADSET_AG headset_ag;
        AUDIOSOURCE audiosource;
        HANDSFREE handsfree;
        HANDSFREE_AG handsfree_ag;
        OBJECTPUSH objectpush;
        AV_REMOTECONTROL av_remotecontrol;
        AV_REMOTECONTROLTARGET av_remotecontroltarget;
        AV_REMOTECONTROLCONTROLLER av_remotecontrolcontroller;
        PANU panu;
        NAP nap;
        PBAP pbap;
        MAP map;
        
        void setAllTo(int value = 0)
        {
            for (int i = 0; i < 6; i++)
            {
                headset.init[i] = value;
                headset_ag.init[i] = value;
            }

            for (int i = 0; i < 7; i++)
            {
                audiosource.init[i] = value;
                handsfree.init[i] = value;
                handsfree_ag.init[i] = value;
                av_remotecontrol.init[i] = value;
                av_remotecontroltarget.init[i] = value;
                av_remotecontrolcontroller.init[i] = value;
            }

            for (int i = 0; i < 8; i++)
            {
                objectpush.init[i] = value;
                panu.init[i] = value;
                pbap.init[i] = value;
            }

            for (int i = 0; i < 9; i++)
                map.init[i] = value;

            for (int i = 0; i < 10; i++)
                nap.init[i] = value;
        }
    };
};


extern SEARCH_SETTINGS::SEARCH_ATTR search_attr;


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



