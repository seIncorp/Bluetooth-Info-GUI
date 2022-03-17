#include "main.h"

/*
    TODO:
    - ADD: dodaj da se ob odprtju prikazejo prave vrednosti zatem ko je bilo ze spremenjeno
*/


/**********************************************************************************************************************************/
/* SETTINGS DIALOG */

Settings::Settings(QWidget* parent) : QDialog(parent), ui_dialog_settings(new Ui::Dialog_Settings)
{
    ui_dialog_settings->setupUi(this);

    connect(ui_dialog_settings->checkBox1, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox1(int)));
    connect(ui_dialog_settings->checkBox2, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox2(int)));
    connect(ui_dialog_settings->checkBox3, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox3(int)));
    connect(ui_dialog_settings->checkBox4, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox4(int)));
    connect(ui_dialog_settings->checkBox5, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox5(int)));
    connect(ui_dialog_settings->checkBox6, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox6(int)));
    connect(ui_dialog_settings->checkBox7, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox7(int)));
    connect(ui_dialog_settings->checkBox8, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox8(int)));
    connect(ui_dialog_settings->checkBox9, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox9(int)));
    connect(ui_dialog_settings->checkBox10, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox10(int)));

    connect(ui_dialog_settings->checkBox11, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox11(int)));
    connect(ui_dialog_settings->checkBox12, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox12(int)));
    connect(ui_dialog_settings->checkBox13, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox13(int)));
    connect(ui_dialog_settings->checkBox14, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox14(int)));
    connect(ui_dialog_settings->checkBox15, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox15(int)));
    connect(ui_dialog_settings->checkBox16, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox16(int)));
    connect(ui_dialog_settings->checkBox17, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox17(int)));
    connect(ui_dialog_settings->checkBox18, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox18(int)));
    connect(ui_dialog_settings->checkBox19, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox19(int)));
    connect(ui_dialog_settings->checkBox20, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox20(int)));

    connect(ui_dialog_settings->checkBox21, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox21(int)));
    connect(ui_dialog_settings->checkBox22, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox22(int)));
    connect(ui_dialog_settings->checkBox23, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox23(int)));
    connect(ui_dialog_settings->checkBox24, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox24(int)));
    connect(ui_dialog_settings->checkBox25, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox25(int)));
    connect(ui_dialog_settings->checkBox26, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox26(int)));
    connect(ui_dialog_settings->checkBox27, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox27(int)));
    connect(ui_dialog_settings->checkBox28, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox28(int)));
    connect(ui_dialog_settings->checkBox29, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox29(int)));
    connect(ui_dialog_settings->checkBox30, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox30(int)));

    connect(ui_dialog_settings->checkBox31, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox31(int)));
    connect(ui_dialog_settings->checkBox32, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox32(int)));
    connect(ui_dialog_settings->checkBox33, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox33(int)));
    connect(ui_dialog_settings->checkBox34, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox34(int)));
    connect(ui_dialog_settings->checkBox35, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox35(int)));
    connect(ui_dialog_settings->checkBox36, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox36(int)));
    connect(ui_dialog_settings->checkBox37, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox37(int)));
    connect(ui_dialog_settings->checkBox38, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox38(int)));
    connect(ui_dialog_settings->checkBox39, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox39(int)));
    connect(ui_dialog_settings->checkBox40, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox40(int)));

    connect(ui_dialog_settings->checkBox41, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox41(int)));
    connect(ui_dialog_settings->checkBox42, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox42(int)));
    connect(ui_dialog_settings->checkBox43, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox43(int)));
    connect(ui_dialog_settings->checkBox44, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox44(int)));
    connect(ui_dialog_settings->checkBox45, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox45(int)));
    connect(ui_dialog_settings->checkBox46, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox46(int)));
    connect(ui_dialog_settings->checkBox47, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox47(int)));
    connect(ui_dialog_settings->checkBox48, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox48(int)));
    connect(ui_dialog_settings->checkBox49, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox49(int)));
    connect(ui_dialog_settings->checkBox50, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox50(int)));

    connect(ui_dialog_settings->checkBox51, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox51(int)));
    connect(ui_dialog_settings->checkBox52, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox52(int)));
    connect(ui_dialog_settings->checkBox53, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox53(int)));
    connect(ui_dialog_settings->checkBox54, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox54(int)));
    connect(ui_dialog_settings->checkBox55, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox55(int)));
    connect(ui_dialog_settings->checkBox56, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox56(int)));
    connect(ui_dialog_settings->checkBox57, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox57(int)));
    connect(ui_dialog_settings->checkBox58, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox58(int)));
    connect(ui_dialog_settings->checkBox59, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox59(int)));
    connect(ui_dialog_settings->checkBox60, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox60(int)));

    connect(ui_dialog_settings->checkBox61, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox61(int)));
    connect(ui_dialog_settings->checkBox62, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox62(int)));
    connect(ui_dialog_settings->checkBox63, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox63(int)));
    connect(ui_dialog_settings->checkBox64, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox64(int)));
    connect(ui_dialog_settings->checkBox65, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox65(int)));
    connect(ui_dialog_settings->checkBox66, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox66(int)));
    connect(ui_dialog_settings->checkBox67, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox67(int)));
    connect(ui_dialog_settings->checkBox68, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox68(int)));
    connect(ui_dialog_settings->checkBox69, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox69(int)));
    connect(ui_dialog_settings->checkBox70, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox70(int)));

    connect(ui_dialog_settings->checkBox71, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox71(int)));
    connect(ui_dialog_settings->checkBox72, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox72(int)));
    connect(ui_dialog_settings->checkBox73, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox73(int)));
    connect(ui_dialog_settings->checkBox74, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox74(int)));
    connect(ui_dialog_settings->checkBox75, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox75(int)));
    connect(ui_dialog_settings->checkBox76, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox76(int)));
    connect(ui_dialog_settings->checkBox77, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox77(int)));
    connect(ui_dialog_settings->checkBox78, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox78(int)));
    connect(ui_dialog_settings->checkBox79, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox79(int)));
    connect(ui_dialog_settings->checkBox80, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox80(int)));

    connect(ui_dialog_settings->checkBox81, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox81(int)));
    connect(ui_dialog_settings->checkBox82, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox82(int)));
    connect(ui_dialog_settings->checkBox83, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox83(int)));
    connect(ui_dialog_settings->checkBox84, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox84(int)));
    connect(ui_dialog_settings->checkBox85, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox85(int)));
    connect(ui_dialog_settings->checkBox86, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox86(int)));
    connect(ui_dialog_settings->checkBox87, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox87(int)));
    connect(ui_dialog_settings->checkBox88, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox88(int)));
    connect(ui_dialog_settings->checkBox89, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox89(int)));
    connect(ui_dialog_settings->checkBox90, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox90(int)));

    connect(ui_dialog_settings->checkBox91, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox91(int)));
    connect(ui_dialog_settings->checkBox92, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox92(int)));
    connect(ui_dialog_settings->checkBox93, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox93(int)));
    connect(ui_dialog_settings->checkBox94, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox94(int)));
    connect(ui_dialog_settings->checkBox95, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox95(int)));
    connect(ui_dialog_settings->checkBox96, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox96(int)));
    connect(ui_dialog_settings->checkBox97, SIGNAL(stateChanged(int)), this, SIGNAL(checkBox97(int)));
    



}

Settings::~Settings()
{
    delete ui_dialog_settings;
}
