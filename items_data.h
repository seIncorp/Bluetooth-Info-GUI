#pragma once
namespace ITEMS_DATA
{
	enum ELEMENT
	{
		ID_ELEMENT = 0,
		VALUE_ELEMENT
	};

	enum ITEM_OF_ELEMENT
	{
		TYPE_ITEM = 0,
		SIZE_ITEM,
		VALUE_ITEM
	};
	

	typedef struct DEFAULT_ITEM_DATA_S
	{
		QString text;
		int column;

		QTreeWidgetItem* item;

		DEFAULT_ITEM_DATA_S(QString s, int c) : text{ s }, column{c}
		{
			item = new QTreeWidgetItem();
			item->setText(column, text);
		}

	} DEFAULT_ITEM_DATA, *PDEFAULT_ITEM_DATA;

	typedef struct ITEM_DATA_S : DEFAULT_ITEM_DATA_S
	{
		// TODO: dodaj se da se shrani pravi value
		BYTE* value;

		ITEM_DATA_S(QString s, int c = 3) : DEFAULT_ITEM_DATA_S(s, c)
		{

		}

	} ITEM_DATA, *PITEM_DATA;

	typedef struct ID_VALUE_DATA_S : DEFAULT_ITEM_DATA_S
	{
		//int type;

		ITEM_DATA* type_item;
		ITEM_DATA* size_item;
		ITEM_DATA* value_item;


		ID_VALUE_DATA_S(QString s, int c = 2) : DEFAULT_ITEM_DATA_S(s, c)
		{

			type_item = new ITEM_DATA("TYPE");
			size_item = new ITEM_DATA("SIZE");
			value_item = new ITEM_DATA("VALUE");

			addChildToID_VALUE();
		}

		void addChildToID_VALUE()
		{
			item->addChild(type_item->item);
			item->addChild(size_item->item);
			item->addChild(value_item->item);
		}

	} ID_VALUE_DATA, * PID_VALUE_DATA;

	typedef struct ATTRIBUTE_DATA_S : DEFAULT_ITEM_DATA_S
	{
		ID_VALUE_DATA* id_element;
		ID_VALUE_DATA* value_element;
		
		ATTRIBUTE_DATA_S(QString s, int c = 1) : DEFAULT_ITEM_DATA_S(s, c)
		{
			id_element = new ID_VALUE_DATA("ID");
			value_element = new ID_VALUE_DATA("VALUE");

			addChildToATT();
		}

		void addChildToATT()
		{
			item->addChild(id_element->item);
			item->addChild(value_element->item);
		}

	} ATTRIBUTE_DATA, *PATTRIBUTE_DATA;

	typedef struct SERVICE_DATA_S : DEFAULT_ITEM_DATA_S
	{
		std::vector<ATTRIBUTE_DATA*> attributes_list;		// list of all service attributes

		SERVICE_DATA_S(QString s, int c = 0) : DEFAULT_ITEM_DATA_S(s, c)
		{

		}

		void addToTreeView(Ui::BluetoothInfoGUIClass ui)
		{
			ui.treeWidget->addTopLevelItem(item);
		}

		void addChildToService(int att_pos)
		{
			item->addChild(attributes_list.at(att_pos)->item);
		}

	} SERVICE_DATA, *PSERVICE_DATA;



	// class SERVICE for each service with all data
	class SERVICE
	{
	public:
		SERVICE(QString name);

		/*******************************************************/
		/* SERVICE items */
		void createServiceItem(QString text);
		void addServiceItem(Ui::BluetoothInfoGUIClass ui);

		/*******************************************************/
		/* ATTRIBUTE items */
		void createAttributeItem(QString text, int show);
		void addAttributeItem(int attributeItem_pos);


	private:

		SERVICE_DATA* service;

	};
};
