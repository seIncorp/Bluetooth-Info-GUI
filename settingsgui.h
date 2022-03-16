#pragma once

//#include <QtWidgets>
#include "ui_Settings.h"




class Settings : public QDialog
{
    Q_OBJECT

public:
    Settings(QWidget* parent = Q_NULLPTR);

    ~Settings();

private:
    Ui::Dialog_Settings* ui_dialog_settings;
};