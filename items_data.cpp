
//#include "bluetoothinfogui.h"

#include "main.h"


ITEMS_DATA::SERVICE::SERVICE(QString name)
{
	createServiceItem(name);
}

/*******************************************************/
/* SERVICE items */
void ITEMS_DATA::SERVICE::createServiceItem(QString text)
{
	service = new SERVICE_DATA(text);
}

void ITEMS_DATA::SERVICE::addServiceItem(Ui::BluetoothInfoGUIClass ui)
{
	service->addToTreeView(ui);
}

/***********************************************************************************/
/* ATTRIBUTE items */

void ITEMS_DATA::SERVICE::createAttributeItem(QString text, int show)
{
	service->attributes_list.push_back(new ATTRIBUTE_DATA(text));

	if(show == 1)
		service->addChildToService(service->attributes_list.size()-1);
}

void ITEMS_DATA::SERVICE::addAttributeItem(int attributeItem_pos)
{
	service->addChildToService(attributeItem_pos);
}





