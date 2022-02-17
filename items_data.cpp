
#include "bluetoothinfogui.h"



ITEMS_DATA::ITEMS_USING::ITEMS_USING()
{
	i = new ITEMS();
}

void ITEMS_DATA::ITEMS_USING::createTopItem(int level, QString text)
{
	i->top_level_items_list.push_back(new QTreeWidgetItem());
	i->top_level_items_list.at(i->top_level_items_list.size() - 1)->setText(level, text);
}

void ITEMS_DATA::ITEMS_USING::addTopItem(int pos, Ui::BluetoothInfoGUIClass ui)
{
	ui.treeWidget->addTopLevelItem(i->top_level_items_list.at(pos));
}

void ITEMS_DATA::ITEMS_USING::createChildItem(int level, QString text)
{
	i->child_items_list.push_back(new QTreeWidgetItem());
	i->child_items_list.at(i->child_items_list.size() - 1)->setText(level, text);

}

void ITEMS_DATA::ITEMS_USING::addChildItem(int topItem, int pos)
{
	i->top_level_items_list.at(topItem)->addChild(i->child_items_list.at(pos));
}