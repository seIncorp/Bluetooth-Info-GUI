#include "main.h"


/**********************************************************************************************************************************/
/* RADIO DIALOG */

Radio::Radio(QWidget* parent) : QDialog(parent), ui_dialog_radio(new Ui::Dialog_Radio)
{
    ui_dialog_radio->setupUi(this);


    QObject::connect(ui_dialog_radio->pushButton, &QPushButton::clicked, this, &Radio::connect);




}

Radio::~Radio()
{
    delete ui_dialog_radio;
}