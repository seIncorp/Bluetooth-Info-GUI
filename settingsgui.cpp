#include "main.h"


/**********************************************************************************************************************************/
/* SETTINGS DIALOG */

Settings::Settings(QWidget* parent) : QDialog(parent), ui_dialog_settings(new Ui::Dialog_Settings)
{
    ui_dialog_settings->setupUi(this);







}

Settings::~Settings()
{
    delete ui_dialog_settings;
}
