#pragma once
namespace ITEMS_DATA
{
	typedef struct ITEMS_S
	{
		std::vector<QTreeWidgetItem*> top_level_items_list;
		std::vector<QTreeWidgetItem*> child_items_list;

	} ITEMS, * PITEMS;


	class ITEMS_USING
	{
	public:
		ITEMS_USING();

		void createTopItem(int level, QString text);
		void addTopItem(int pos, Ui::BluetoothInfoGUIClass ui);

		void createChildItem(int level, QString text);
		void addChildItem(int topItem, int pos);

	private:
		PITEMS i;

	};
};
