/********************************************************************************
** Form generated from reading UI file 'bluetoothinfogui.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLUETOOTHINFOGUI_H
#define UI_BLUETOOTHINFOGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BluetoothInfoGUIClass
{
public:
    QWidget *centralWidget;
    QTreeWidget *treeWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *BluetoothInfoGUIClass)
    {
        if (BluetoothInfoGUIClass->objectName().isEmpty())
            BluetoothInfoGUIClass->setObjectName(QString::fromUtf8("BluetoothInfoGUIClass"));
        BluetoothInfoGUIClass->resize(604, 400);
        centralWidget = new QWidget(BluetoothInfoGUIClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        treeWidget = new QTreeWidget(centralWidget);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(0, 0, 601, 341));
        BluetoothInfoGUIClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(BluetoothInfoGUIClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 604, 22));
        BluetoothInfoGUIClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(BluetoothInfoGUIClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        BluetoothInfoGUIClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(BluetoothInfoGUIClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        BluetoothInfoGUIClass->setStatusBar(statusBar);

        retranslateUi(BluetoothInfoGUIClass);

        QMetaObject::connectSlotsByName(BluetoothInfoGUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *BluetoothInfoGUIClass)
    {
        BluetoothInfoGUIClass->setWindowTitle(QCoreApplication::translate("BluetoothInfoGUIClass", "BluetoothInfoGUI", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("BluetoothInfoGUIClass", "Value", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("BluetoothInfoGUIClass", "Text", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BluetoothInfoGUIClass: public Ui_BluetoothInfoGUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLUETOOTHINFOGUI_H
