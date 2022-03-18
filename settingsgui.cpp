#include "main.h"

/*
    TODO:
    - ADD: dodaj da se ob odprtju prikazejo prave vrednosti zatem ko je bilo ze spremenjeno
    - ADD: debug print je za prikaz vsega debug izpisa v debug editorju
    - ADD: print je za print vsega kar je za print in print outside funct 
    - ADD: print info je za vse kar je za printinfo izpis
    - ADD: ce je kaksen untick se avtomaticno unticka tudi print    <-- DONE!!!
    - ADD: ce se vse tick-a se potem tudi print tickne    <-- DONE!!!
    - ADD: ce se tick print se vsa ostala polja ticknejo
    - ADD: ce se untick print se potem vsa polja untick

*/


/**********************************************************************************************************************************/
/* SETTINGS DIALOG */

Settings::Settings(QWidget* parent) : QDialog(parent), ui_dialog_settings(new Ui::Dialog_Settings)
{
    ui_dialog_settings->setupUi(this);


    connect(ui_dialog_settings->checkBox_print, SIGNAL(stateChanged(int)), this, SLOT(checkBox_print_s(int)));
    connect(ui_dialog_settings->checkBox_printInfo, SIGNAL(stateChanged(int)), this, SLOT(checkBox_printInfo_s(int)));
    connect(ui_dialog_settings->checkBox_debug, SIGNAL(stateChanged(int)), this, SLOT(checkBox_debug_s(int)));


    /********************************************************************************************************/
    /* SEARCH */
    connect(ui_dialog_settings->checkBox1, SIGNAL(stateChanged(int)), this, SLOT(checkBox1_s(int)));
    connect(ui_dialog_settings->checkBox2, SIGNAL(stateChanged(int)), this, SLOT(checkBox2_s(int)));
    connect(ui_dialog_settings->checkBox3, SIGNAL(stateChanged(int)), this, SLOT(checkBox3_s(int)));
    connect(ui_dialog_settings->checkBox4, SIGNAL(stateChanged(int)), this, SLOT(checkBox4_s(int)));
    connect(ui_dialog_settings->checkBox5, SIGNAL(stateChanged(int)), this, SLOT(checkBox5_s(int)));
    connect(ui_dialog_settings->checkBox6, SIGNAL(stateChanged(int)), this, SLOT(checkBox6_s(int)));
    connect(ui_dialog_settings->checkBox7, SIGNAL(stateChanged(int)), this, SLOT(checkBox7_s(int)));
    connect(ui_dialog_settings->checkBox8, SIGNAL(stateChanged(int)), this, SLOT(checkBox8_s(int)));
    connect(ui_dialog_settings->checkBox9, SIGNAL(stateChanged(int)), this, SLOT(checkBox9_s(int)));
    connect(ui_dialog_settings->checkBox10, SIGNAL(stateChanged(int)), this, SLOT(checkBox10_s(int)));

    connect(ui_dialog_settings->checkBox11, SIGNAL(stateChanged(int)), this, SLOT(checkBox11_s(int)));
    connect(ui_dialog_settings->checkBox12, SIGNAL(stateChanged(int)), this, SLOT(checkBox12_s(int)));
    connect(ui_dialog_settings->checkBox13, SIGNAL(stateChanged(int)), this, SLOT(checkBox13_s(int)));
    connect(ui_dialog_settings->checkBox14, SIGNAL(stateChanged(int)), this, SLOT(checkBox14_s(int)));
    connect(ui_dialog_settings->checkBox15, SIGNAL(stateChanged(int)), this, SLOT(checkBox15_s(int)));
    connect(ui_dialog_settings->checkBox16, SIGNAL(stateChanged(int)), this, SLOT(checkBox16_s(int)));
    connect(ui_dialog_settings->checkBox17, SIGNAL(stateChanged(int)), this, SLOT(checkBox17_s(int)));
    connect(ui_dialog_settings->checkBox18, SIGNAL(stateChanged(int)), this, SLOT(checkBox18_s(int)));
    connect(ui_dialog_settings->checkBox19, SIGNAL(stateChanged(int)), this, SLOT(checkBox19_s(int)));
    connect(ui_dialog_settings->checkBox20, SIGNAL(stateChanged(int)), this, SLOT(checkBox20_s(int)));

    connect(ui_dialog_settings->checkBox21, SIGNAL(stateChanged(int)), this, SLOT(checkBox21_s(int)));
    connect(ui_dialog_settings->checkBox22, SIGNAL(stateChanged(int)), this, SLOT(checkBox22_s(int)));
    connect(ui_dialog_settings->checkBox23, SIGNAL(stateChanged(int)), this, SLOT(checkBox23_s(int)));
    connect(ui_dialog_settings->checkBox24, SIGNAL(stateChanged(int)), this, SLOT(checkBox24_s(int)));
    connect(ui_dialog_settings->checkBox25, SIGNAL(stateChanged(int)), this, SLOT(checkBox25_s(int)));
    connect(ui_dialog_settings->checkBox26, SIGNAL(stateChanged(int)), this, SLOT(checkBox26_s(int)));
    connect(ui_dialog_settings->checkBox27, SIGNAL(stateChanged(int)), this, SLOT(checkBox27_s(int)));
    connect(ui_dialog_settings->checkBox28, SIGNAL(stateChanged(int)), this, SLOT(checkBox28_s(int)));
    connect(ui_dialog_settings->checkBox29, SIGNAL(stateChanged(int)), this, SLOT(checkBox29_s(int)));
    connect(ui_dialog_settings->checkBox30, SIGNAL(stateChanged(int)), this, SLOT(checkBox30_s(int)));

    connect(ui_dialog_settings->checkBox31, SIGNAL(stateChanged(int)), this, SLOT(checkBox31_s(int)));
    connect(ui_dialog_settings->checkBox32, SIGNAL(stateChanged(int)), this, SLOT(checkBox32_s(int)));
    connect(ui_dialog_settings->checkBox33, SIGNAL(stateChanged(int)), this, SLOT(checkBox33_s(int)));
    connect(ui_dialog_settings->checkBox34, SIGNAL(stateChanged(int)), this, SLOT(checkBox34_s(int)));
    connect(ui_dialog_settings->checkBox35, SIGNAL(stateChanged(int)), this, SLOT(checkBox35_s(int)));
    connect(ui_dialog_settings->checkBox36, SIGNAL(stateChanged(int)), this, SLOT(checkBox36_s(int)));
    connect(ui_dialog_settings->checkBox37, SIGNAL(stateChanged(int)), this, SLOT(checkBox37_s(int)));
    connect(ui_dialog_settings->checkBox38, SIGNAL(stateChanged(int)), this, SLOT(checkBox38_s(int)));
    connect(ui_dialog_settings->checkBox39, SIGNAL(stateChanged(int)), this, SLOT(checkBox39_s(int)));
    connect(ui_dialog_settings->checkBox40, SIGNAL(stateChanged(int)), this, SLOT(checkBox40_s(int)));

    connect(ui_dialog_settings->checkBox41, SIGNAL(stateChanged(int)), this, SLOT(checkBox41_s(int)));
    connect(ui_dialog_settings->checkBox42, SIGNAL(stateChanged(int)), this, SLOT(checkBox42_s(int)));
    connect(ui_dialog_settings->checkBox43, SIGNAL(stateChanged(int)), this, SLOT(checkBox43_s(int)));
    connect(ui_dialog_settings->checkBox44, SIGNAL(stateChanged(int)), this, SLOT(checkBox44_s(int)));
    connect(ui_dialog_settings->checkBox45, SIGNAL(stateChanged(int)), this, SLOT(checkBox45_s(int)));
    connect(ui_dialog_settings->checkBox46, SIGNAL(stateChanged(int)), this, SLOT(checkBox46_s(int)));
    connect(ui_dialog_settings->checkBox47, SIGNAL(stateChanged(int)), this, SLOT(checkBox47_s(int)));
    connect(ui_dialog_settings->checkBox48, SIGNAL(stateChanged(int)), this, SLOT(checkBox48_s(int)));
    connect(ui_dialog_settings->checkBox49, SIGNAL(stateChanged(int)), this, SLOT(checkBox49_s(int)));
    connect(ui_dialog_settings->checkBox50, SIGNAL(stateChanged(int)), this, SLOT(checkBox50_s(int)));

    connect(ui_dialog_settings->checkBox51, SIGNAL(stateChanged(int)), this, SLOT(checkBox51_s(int)));
    connect(ui_dialog_settings->checkBox52, SIGNAL(stateChanged(int)), this, SLOT(checkBox52_s(int)));
    connect(ui_dialog_settings->checkBox53, SIGNAL(stateChanged(int)), this, SLOT(checkBox53_s(int)));
    connect(ui_dialog_settings->checkBox54, SIGNAL(stateChanged(int)), this, SLOT(checkBox54_s(int)));
    connect(ui_dialog_settings->checkBox55, SIGNAL(stateChanged(int)), this, SLOT(checkBox55_s(int)));
    connect(ui_dialog_settings->checkBox56, SIGNAL(stateChanged(int)), this, SLOT(checkBox56_s(int)));
    connect(ui_dialog_settings->checkBox57, SIGNAL(stateChanged(int)), this, SLOT(checkBox57_s(int)));
    connect(ui_dialog_settings->checkBox58, SIGNAL(stateChanged(int)), this, SLOT(checkBox58_s(int)));
    connect(ui_dialog_settings->checkBox59, SIGNAL(stateChanged(int)), this, SLOT(checkBox59_s(int)));
    connect(ui_dialog_settings->checkBox60, SIGNAL(stateChanged(int)), this, SLOT(checkBox60_s(int)));

    connect(ui_dialog_settings->checkBox61, SIGNAL(stateChanged(int)), this, SLOT(checkBox61_s(int)));
    connect(ui_dialog_settings->checkBox62, SIGNAL(stateChanged(int)), this, SLOT(checkBox62_s(int)));
    connect(ui_dialog_settings->checkBox63, SIGNAL(stateChanged(int)), this, SLOT(checkBox63_s(int)));
    connect(ui_dialog_settings->checkBox64, SIGNAL(stateChanged(int)), this, SLOT(checkBox64_s(int)));
    connect(ui_dialog_settings->checkBox65, SIGNAL(stateChanged(int)), this, SLOT(checkBox65_s(int)));
    connect(ui_dialog_settings->checkBox66, SIGNAL(stateChanged(int)), this, SLOT(checkBox66_s(int)));
    connect(ui_dialog_settings->checkBox67, SIGNAL(stateChanged(int)), this, SLOT(checkBox67_s(int)));
    connect(ui_dialog_settings->checkBox68, SIGNAL(stateChanged(int)), this, SLOT(checkBox68_s(int)));
    connect(ui_dialog_settings->checkBox69, SIGNAL(stateChanged(int)), this, SLOT(checkBox69_s(int)));
    connect(ui_dialog_settings->checkBox70, SIGNAL(stateChanged(int)), this, SLOT(checkBox70_s(int)));

    connect(ui_dialog_settings->checkBox71, SIGNAL(stateChanged(int)), this, SLOT(checkBox71_s(int)));
    connect(ui_dialog_settings->checkBox72, SIGNAL(stateChanged(int)), this, SLOT(checkBox72_s(int)));
    connect(ui_dialog_settings->checkBox73, SIGNAL(stateChanged(int)), this, SLOT(checkBox73_s(int)));
    connect(ui_dialog_settings->checkBox74, SIGNAL(stateChanged(int)), this, SLOT(checkBox74_s(int)));
    connect(ui_dialog_settings->checkBox75, SIGNAL(stateChanged(int)), this, SLOT(checkBox75_s(int)));
    connect(ui_dialog_settings->checkBox76, SIGNAL(stateChanged(int)), this, SLOT(checkBox76_s(int)));
    connect(ui_dialog_settings->checkBox77, SIGNAL(stateChanged(int)), this, SLOT(checkBox77_s(int)));
    connect(ui_dialog_settings->checkBox78, SIGNAL(stateChanged(int)), this, SLOT(checkBox78_s(int)));
    connect(ui_dialog_settings->checkBox79, SIGNAL(stateChanged(int)), this, SLOT(checkBox79_s(int)));
    connect(ui_dialog_settings->checkBox80, SIGNAL(stateChanged(int)), this, SLOT(checkBox80_s(int)));

    connect(ui_dialog_settings->checkBox81, SIGNAL(stateChanged(int)), this, SLOT(checkBox81_s(int)));
    connect(ui_dialog_settings->checkBox82, SIGNAL(stateChanged(int)), this, SLOT(checkBox82_s(int)));
    connect(ui_dialog_settings->checkBox83, SIGNAL(stateChanged(int)), this, SLOT(checkBox83_s(int)));
    connect(ui_dialog_settings->checkBox84, SIGNAL(stateChanged(int)), this, SLOT(checkBox84_s(int)));
    connect(ui_dialog_settings->checkBox85, SIGNAL(stateChanged(int)), this, SLOT(checkBox85_s(int)));
    connect(ui_dialog_settings->checkBox86, SIGNAL(stateChanged(int)), this, SLOT(checkBox86_s(int)));
    connect(ui_dialog_settings->checkBox87, SIGNAL(stateChanged(int)), this, SLOT(checkBox87_s(int)));
    connect(ui_dialog_settings->checkBox88, SIGNAL(stateChanged(int)), this, SLOT(checkBox88_s(int)));
    connect(ui_dialog_settings->checkBox89, SIGNAL(stateChanged(int)), this, SLOT(checkBox89_s(int)));
    connect(ui_dialog_settings->checkBox90, SIGNAL(stateChanged(int)), this, SLOT(checkBox90_s(int)));

    connect(ui_dialog_settings->checkBox91, SIGNAL(stateChanged(int)), this, SLOT(checkBox91_s(int)));
    connect(ui_dialog_settings->checkBox92, SIGNAL(stateChanged(int)), this, SLOT(checkBox92_s(int)));
    connect(ui_dialog_settings->checkBox93, SIGNAL(stateChanged(int)), this, SLOT(checkBox93_s(int)));
    connect(ui_dialog_settings->checkBox94, SIGNAL(stateChanged(int)), this, SLOT(checkBox94_s(int)));
    connect(ui_dialog_settings->checkBox95, SIGNAL(stateChanged(int)), this, SLOT(checkBox95_s(int)));
    connect(ui_dialog_settings->checkBox96, SIGNAL(stateChanged(int)), this, SLOT(checkBox96_s(int)));
    connect(ui_dialog_settings->checkBox97, SIGNAL(stateChanged(int)), this, SLOT(checkBox97_s(int)));
    
    

    /********************************************************************************************************/
    /* PRINT */
    connect(ui_dialog_settings->checkBox1_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox1_2_s(int)));
    connect(ui_dialog_settings->checkBox2_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox2_2_s(int)));
    connect(ui_dialog_settings->checkBox3_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox3_2_s(int)));
    connect(ui_dialog_settings->checkBox4_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox4_2_s(int)));
    connect(ui_dialog_settings->checkBox5_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox5_2_s(int)));
    connect(ui_dialog_settings->checkBox6_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox6_2_s(int)));
    connect(ui_dialog_settings->checkBox7_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox7_2_s(int)));
    connect(ui_dialog_settings->checkBox8_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox8_2_s(int)));
    connect(ui_dialog_settings->checkBox9_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox9_2_s(int)));
    connect(ui_dialog_settings->checkBox10_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox10_2_s(int)));

    connect(ui_dialog_settings->checkBox11_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox11_2_s(int)));
    connect(ui_dialog_settings->checkBox12_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox12_2_s(int)));
    connect(ui_dialog_settings->checkBox13_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox13_2_s(int)));
    connect(ui_dialog_settings->checkBox14_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox14_2_s(int)));
    connect(ui_dialog_settings->checkBox15_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox15_2_s(int)));
    connect(ui_dialog_settings->checkBox16_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox16_2_s(int)));
    connect(ui_dialog_settings->checkBox17_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox17_2_s(int)));
    connect(ui_dialog_settings->checkBox18_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox18_2_s(int)));
    connect(ui_dialog_settings->checkBox19_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox19_2_s(int)));
    connect(ui_dialog_settings->checkBox20_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox20_2_s(int)));

    connect(ui_dialog_settings->checkBox21_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox21_2_s(int)));
    connect(ui_dialog_settings->checkBox22_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox22_2_s(int)));
    connect(ui_dialog_settings->checkBox23_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox23_2_s(int)));
    connect(ui_dialog_settings->checkBox24_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox24_2_s(int)));
    connect(ui_dialog_settings->checkBox25_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox25_2_s(int)));
    connect(ui_dialog_settings->checkBox26_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox26_2_s(int)));
    connect(ui_dialog_settings->checkBox27_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox27_2_s(int)));
    connect(ui_dialog_settings->checkBox28_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox28_2_s(int)));
    connect(ui_dialog_settings->checkBox29_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox29_2_s(int)));
    connect(ui_dialog_settings->checkBox30_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox30_2_s(int)));

    connect(ui_dialog_settings->checkBox31_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox31_2_s(int)));
    connect(ui_dialog_settings->checkBox32_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox32_2_s(int)));
    connect(ui_dialog_settings->checkBox33_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox33_2_s(int)));
    connect(ui_dialog_settings->checkBox34_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox34_2_s(int)));
    connect(ui_dialog_settings->checkBox35_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox35_2_s(int)));
    connect(ui_dialog_settings->checkBox36_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox36_2_s(int)));
    connect(ui_dialog_settings->checkBox37_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox37_2_s(int)));
    connect(ui_dialog_settings->checkBox38_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox38_2_s(int)));
    connect(ui_dialog_settings->checkBox39_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox39_2_s(int)));
    connect(ui_dialog_settings->checkBox40_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox40_2_s(int)));

    connect(ui_dialog_settings->checkBox41_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox41_2_s(int)));
    connect(ui_dialog_settings->checkBox42_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox42_2_s(int)));
    connect(ui_dialog_settings->checkBox43_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox43_2_s(int)));
    connect(ui_dialog_settings->checkBox44_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox44_2_s(int)));
    connect(ui_dialog_settings->checkBox45_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox45_2_s(int)));
    connect(ui_dialog_settings->checkBox46_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox46_2_s(int)));
    connect(ui_dialog_settings->checkBox47_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox47_2_s(int)));
    connect(ui_dialog_settings->checkBox48_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox48_2_s(int)));
    connect(ui_dialog_settings->checkBox49_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox49_2_s(int)));
    connect(ui_dialog_settings->checkBox50_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox50_2_s(int)));

    connect(ui_dialog_settings->checkBox51_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox51_2_s(int)));
    connect(ui_dialog_settings->checkBox52_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox52_2_s(int)));
    connect(ui_dialog_settings->checkBox53_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox53_2_s(int)));
    connect(ui_dialog_settings->checkBox54_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox54_2_s(int)));
    connect(ui_dialog_settings->checkBox55_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox55_2_s(int)));
    connect(ui_dialog_settings->checkBox56_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox56_2_s(int)));
    connect(ui_dialog_settings->checkBox57_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox57_2_s(int)));
    connect(ui_dialog_settings->checkBox58_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox58_2_s(int)));
    connect(ui_dialog_settings->checkBox59_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox59_2_s(int)));
    connect(ui_dialog_settings->checkBox60_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox60_2_s(int)));

    connect(ui_dialog_settings->checkBox61_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox61_2_s(int)));
    connect(ui_dialog_settings->checkBox62_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox62_2_s(int)));
    connect(ui_dialog_settings->checkBox63_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox63_2_s(int)));
    connect(ui_dialog_settings->checkBox64_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox64_2_s(int)));
    connect(ui_dialog_settings->checkBox65_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox65_2_s(int)));
    connect(ui_dialog_settings->checkBox66_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox66_2_s(int)));
    connect(ui_dialog_settings->checkBox67_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox67_2_s(int)));
    connect(ui_dialog_settings->checkBox68_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox68_2_s(int)));
    connect(ui_dialog_settings->checkBox69_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox69_2_s(int)));
    connect(ui_dialog_settings->checkBox70_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox70_2_s(int)));

    connect(ui_dialog_settings->checkBox71_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox71_2_s(int)));
    connect(ui_dialog_settings->checkBox72_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox72_2_s(int)));
    connect(ui_dialog_settings->checkBox73_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox73_2_s(int)));
    connect(ui_dialog_settings->checkBox74_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox74_2_s(int)));
    connect(ui_dialog_settings->checkBox75_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox75_2_s(int)));
    connect(ui_dialog_settings->checkBox76_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox76_2_s(int)));
    connect(ui_dialog_settings->checkBox77_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox77_2_s(int)));
    connect(ui_dialog_settings->checkBox78_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox78_2_s(int)));
    connect(ui_dialog_settings->checkBox79_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox79_2_s(int)));
    connect(ui_dialog_settings->checkBox80_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox80_2_s(int)));

    connect(ui_dialog_settings->checkBox81_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox81_2_s(int)));
    connect(ui_dialog_settings->checkBox82_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox82_2_s(int)));
    connect(ui_dialog_settings->checkBox83_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox83_2_s(int)));
    connect(ui_dialog_settings->checkBox84_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox84_2_s(int)));
    connect(ui_dialog_settings->checkBox85_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox85_2_s(int)));
    connect(ui_dialog_settings->checkBox86_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox86_2_s(int)));
    connect(ui_dialog_settings->checkBox87_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox87_2_s(int)));
    connect(ui_dialog_settings->checkBox88_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox88_2_s(int)));
    connect(ui_dialog_settings->checkBox89_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox89_2_s(int)));
    connect(ui_dialog_settings->checkBox90_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox90_2_s(int)));

    connect(ui_dialog_settings->checkBox91_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox91_2_s(int)));
    connect(ui_dialog_settings->checkBox92_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox92_2_s(int)));
    connect(ui_dialog_settings->checkBox93_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox93_2_s(int)));
    connect(ui_dialog_settings->checkBox94_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox94_2_s(int)));
    connect(ui_dialog_settings->checkBox95_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox95_2_s(int)));
    connect(ui_dialog_settings->checkBox96_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox96_2_s(int)));
    connect(ui_dialog_settings->checkBox97_2, SIGNAL(stateChanged(int)), this, SLOT(checkBox97_2_s(int)));


    setSettingsFromData(1,1,1);


}

Settings::~Settings()
{
    delete ui_dialog_settings;
}

void Settings::setSettingsFromData(int search, int print, int first)
{
    
    if (first == 1)
    {
        ui_dialog_settings->checkBox_print->setCheckState(print_attr.countTRUE == 97 ? Qt::Checked : Qt::Unchecked);
        from_attr_flag = 0;
    }

    if (search == 1)
    {
        /************************************************/
        /* headset */
        ui_dialog_settings->checkBox1->setCheckState(search_attr.headset.ServiceRecord == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox2->setCheckState(search_attr.headset.ServiceClassIDList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox3->setCheckState(search_attr.headset.ProtocolDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox4->setCheckState(search_attr.headset.ServiceName == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox5->setCheckState(search_attr.headset.BluetoothProfileDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox6->setCheckState(search_attr.headset.RemoteAudioVolumeControl == 1 ? Qt::Checked : Qt::Unchecked);


        /************************************************/
        /* headset_ag */
        ui_dialog_settings->checkBox7->setCheckState(search_attr.headset_ag.ServiceRecord == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox8->setCheckState(search_attr.headset_ag.ServiceClassIDList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox9->setCheckState(search_attr.headset_ag.ProtocolDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox10->setCheckState(search_attr.headset_ag.ServiceName == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox11->setCheckState(search_attr.headset_ag.BluetoothProfileDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox12->setCheckState(search_attr.headset_ag.RemoteAudioVolumeControl == 1 ? Qt::Checked : Qt::Unchecked);


        /************************************************/
        /* audiosource */
        ui_dialog_settings->checkBox13->setCheckState(search_attr.audiosource.ServiceRecord == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox14->setCheckState(search_attr.audiosource.ServiceClassIDList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox15->setCheckState(search_attr.audiosource.ProtocolDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox16->setCheckState(search_attr.audiosource.ServiceName == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox17->setCheckState(search_attr.audiosource.BluetoothProfileDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox18->setCheckState(search_attr.audiosource.ProviderName == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox19->setCheckState(search_attr.audiosource.SupportedFeatures == 1 ? Qt::Checked : Qt::Unchecked);


        /************************************************/
        /* handsfree */
        ui_dialog_settings->checkBox20->setCheckState(search_attr.handsfree.ServiceRecord == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox21->setCheckState(search_attr.handsfree.ServiceClassIDList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox22->setCheckState(search_attr.handsfree.ProtocolDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox23->setCheckState(search_attr.handsfree.ServiceName == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox24->setCheckState(search_attr.handsfree.BluetoothProfileDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox25->setCheckState(search_attr.handsfree.Network == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox26->setCheckState(search_attr.handsfree.SupportedFeatures == 1 ? Qt::Checked : Qt::Unchecked);


        /************************************************/
        /* handsfree_ag */
        ui_dialog_settings->checkBox27->setCheckState(search_attr.handsfree_ag.ServiceRecord == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox28->setCheckState(search_attr.handsfree_ag.ServiceClassIDList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox29->setCheckState(search_attr.handsfree_ag.ProtocolDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox30->setCheckState(search_attr.handsfree_ag.ServiceName == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox31->setCheckState(search_attr.handsfree_ag.BluetoothProfileDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox32->setCheckState(search_attr.handsfree_ag.Network == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox33->setCheckState(search_attr.handsfree_ag.SupportedFeatures == 1 ? Qt::Checked : Qt::Unchecked);


        /************************************************/
        /* objectpush */
        ui_dialog_settings->checkBox34->setCheckState(search_attr.objectpush.ServiceRecord == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox35->setCheckState(search_attr.objectpush.ServiceClassIDList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox36->setCheckState(search_attr.objectpush.ProtocolDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox37->setCheckState(search_attr.objectpush.ServiceName == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox38->setCheckState(search_attr.objectpush.BluetoothProfileDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox39->setCheckState(search_attr.objectpush.Goepl2cappsm == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox40->setCheckState(search_attr.objectpush.SupportedFormats == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox41->setCheckState(search_attr.objectpush.ServiceVersion == 1 ? Qt::Checked : Qt::Unchecked);


        /************************************************/
        /* av_remotecontrol */
        ui_dialog_settings->checkBox42->setCheckState(search_attr.av_remotecontrol.ServiceRecord == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox43->setCheckState(search_attr.av_remotecontrol.ServiceClassIDList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox44->setCheckState(search_attr.av_remotecontrol.ProtocolDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox45->setCheckState(search_attr.av_remotecontrol.ServiceName == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox46->setCheckState(search_attr.av_remotecontrol.BluetoothProfileDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox47->setCheckState(search_attr.av_remotecontrol.ProviderName == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox48->setCheckState(search_attr.av_remotecontrol.SupportedFeatures == 1 ? Qt::Checked : Qt::Unchecked);


        /************************************************/
        /* av_remotecontroltarget */
        ui_dialog_settings->checkBox49->setCheckState(search_attr.av_remotecontroltarget.ServiceRecord == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox50->setCheckState(search_attr.av_remotecontroltarget.ServiceClassIDList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox51->setCheckState(search_attr.av_remotecontroltarget.ProtocolDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox52->setCheckState(search_attr.av_remotecontroltarget.ServiceName == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox53->setCheckState(search_attr.av_remotecontroltarget.BluetoothProfileDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox54->setCheckState(search_attr.av_remotecontroltarget.ProviderName == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox55->setCheckState(search_attr.av_remotecontroltarget.SupportedFeatures == 1 ? Qt::Checked : Qt::Unchecked);


        /************************************************/
        /* av_remotecontrolcontroller */
        ui_dialog_settings->checkBox56->setCheckState(search_attr.av_remotecontrolcontroller.ServiceRecord == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox57->setCheckState(search_attr.av_remotecontrolcontroller.ServiceClassIDList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox58->setCheckState(search_attr.av_remotecontrolcontroller.ProtocolDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox59->setCheckState(search_attr.av_remotecontrolcontroller.ServiceName == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox60->setCheckState(search_attr.av_remotecontrolcontroller.BluetoothProfileDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox61->setCheckState(search_attr.av_remotecontrolcontroller.ProviderName == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox62->setCheckState(search_attr.av_remotecontrolcontroller.SupportedFeatures == 1 ? Qt::Checked : Qt::Unchecked);


        /************************************************/
        /* panu */
        ui_dialog_settings->checkBox63->setCheckState(search_attr.panu.ServiceRecord == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox64->setCheckState(search_attr.panu.ServiceClassIDList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox65->setCheckState(search_attr.panu.ProtocolDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox66->setCheckState(search_attr.panu.ServiceName == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox67->setCheckState(search_attr.panu.BluetoothProfileDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox68->setCheckState(search_attr.panu.LanguageBaseAttributeIdList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox69->setCheckState(search_attr.panu.ServiceDescription == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox70->setCheckState(search_attr.panu.SecurityDescription == 1 ? Qt::Checked : Qt::Unchecked);


        /************************************************/
        /* nap */
        ui_dialog_settings->checkBox71->setCheckState(search_attr.nap.ServiceRecord == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox72->setCheckState(search_attr.nap.ServiceClassIDList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox73->setCheckState(search_attr.nap.ProtocolDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox74->setCheckState(search_attr.nap.ServiceName == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox75->setCheckState(search_attr.nap.BluetoothProfileDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox76->setCheckState(search_attr.nap.LanguageBaseAttributeIdList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox77->setCheckState(search_attr.nap.ServiceDescription == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox78->setCheckState(search_attr.nap.SecurityDescription == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox79->setCheckState(search_attr.nap.NetAccessType == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox80->setCheckState(search_attr.nap.MaxNetAccessRate == 1 ? Qt::Checked : Qt::Unchecked);


        /************************************************/
        /* pbap */
        ui_dialog_settings->checkBox81->setCheckState(search_attr.pbap.ServiceRecord == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox82->setCheckState(search_attr.pbap.ServiceClassIDList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox83->setCheckState(search_attr.pbap.ProtocolDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox84->setCheckState(search_attr.pbap.ServiceName == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox85->setCheckState(search_attr.pbap.BluetoothProfileDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox86->setCheckState(search_attr.pbap.Goepl2cappsm == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox87->setCheckState(search_attr.pbap.SupportedRepositories == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox88->setCheckState(search_attr.pbap.SupportedFeatures == 1 ? Qt::Checked : Qt::Unchecked);


        /************************************************/
        /* map */
        ui_dialog_settings->checkBox89->setCheckState(search_attr.map.ServiceRecord == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox90->setCheckState(search_attr.map.ServiceClassIDList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox91->setCheckState(search_attr.map.ProtocolDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox92->setCheckState(search_attr.map.ServiceName == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox93->setCheckState(search_attr.map.BluetoothProfileDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox94->setCheckState(search_attr.map.Goepl2cappsm == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox95->setCheckState(search_attr.map.SupportedMessageTypes == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox96->setCheckState(search_attr.map.MasInstanceId == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox97->setCheckState(search_attr.map.MapSupportedFeatures == 1 ? Qt::Checked : Qt::Unchecked);

    }

    if (print == 1)
    {
        /************************************************/
        /* headset */
        ui_dialog_settings->checkBox1_2->setCheckState(print_attr.headset.ServiceRecord == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox2_2->setCheckState(print_attr.headset.ServiceClassIDList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox3_2->setCheckState(print_attr.headset.ProtocolDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox4_2->setCheckState(print_attr.headset.ServiceName == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox5_2->setCheckState(print_attr.headset.BluetoothProfileDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox6_2->setCheckState(print_attr.headset.RemoteAudioVolumeControl == 1 ? Qt::Checked : Qt::Unchecked);


        /************************************************/
        /* headset_ag */
        ui_dialog_settings->checkBox7_2->setCheckState(print_attr.headset_ag.ServiceRecord == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox8_2->setCheckState(print_attr.headset_ag.ServiceClassIDList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox9_2->setCheckState(print_attr.headset_ag.ProtocolDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox10_2->setCheckState(print_attr.headset_ag.ServiceName == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox11_2->setCheckState(print_attr.headset_ag.BluetoothProfileDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox12_2->setCheckState(print_attr.headset_ag.RemoteAudioVolumeControl == 1 ? Qt::Checked : Qt::Unchecked);


        /************************************************/
        /* audiosource */
        ui_dialog_settings->checkBox13_2->setCheckState(print_attr.audiosource.ServiceRecord == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox14_2->setCheckState(print_attr.audiosource.ServiceClassIDList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox15_2->setCheckState(print_attr.audiosource.ProtocolDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox16_2->setCheckState(print_attr.audiosource.ServiceName == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox17_2->setCheckState(print_attr.audiosource.BluetoothProfileDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox18_2->setCheckState(print_attr.audiosource.ProviderName == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox19_2->setCheckState(print_attr.audiosource.SupportedFeatures == 1 ? Qt::Checked : Qt::Unchecked);


        /************************************************/
        /* handsfree */
        ui_dialog_settings->checkBox20_2->setCheckState(print_attr.handsfree.ServiceRecord == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox21_2->setCheckState(print_attr.handsfree.ServiceClassIDList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox22_2->setCheckState(print_attr.handsfree.ProtocolDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox23_2->setCheckState(print_attr.handsfree.ServiceName == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox24_2->setCheckState(print_attr.handsfree.BluetoothProfileDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox25_2->setCheckState(print_attr.handsfree.Network == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox26_2->setCheckState(print_attr.handsfree.SupportedFeatures == 1 ? Qt::Checked : Qt::Unchecked);


        /************************************************/
        /* handsfree_ag */
        ui_dialog_settings->checkBox27_2->setCheckState(print_attr.handsfree_ag.ServiceRecord == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox28_2->setCheckState(print_attr.handsfree_ag.ServiceClassIDList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox29_2->setCheckState(print_attr.handsfree_ag.ProtocolDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox30_2->setCheckState(print_attr.handsfree_ag.ServiceName == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox31_2->setCheckState(print_attr.handsfree_ag.BluetoothProfileDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox32_2->setCheckState(print_attr.handsfree_ag.Network == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox33_2->setCheckState(print_attr.handsfree_ag.SupportedFeatures == 1 ? Qt::Checked : Qt::Unchecked);


        /************************************************/
        /* objectpush */
        ui_dialog_settings->checkBox34_2->setCheckState(print_attr.objectpush.ServiceRecord == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox35_2->setCheckState(print_attr.objectpush.ServiceClassIDList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox36_2->setCheckState(print_attr.objectpush.ProtocolDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox37_2->setCheckState(print_attr.objectpush.ServiceName == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox38_2->setCheckState(print_attr.objectpush.BluetoothProfileDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox39_2->setCheckState(print_attr.objectpush.Goepl2cappsm == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox40_2->setCheckState(print_attr.objectpush.SupportedFormats == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox41_2->setCheckState(print_attr.objectpush.ServiceVersion == 1 ? Qt::Checked : Qt::Unchecked);


        /************************************************/
        /* av_remotecontrol */
        ui_dialog_settings->checkBox42_2->setCheckState(print_attr.av_remotecontrol.ServiceRecord == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox43_2->setCheckState(print_attr.av_remotecontrol.ServiceClassIDList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox44_2->setCheckState(print_attr.av_remotecontrol.ProtocolDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox45_2->setCheckState(print_attr.av_remotecontrol.ServiceName == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox46_2->setCheckState(print_attr.av_remotecontrol.BluetoothProfileDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox47_2->setCheckState(print_attr.av_remotecontrol.ProviderName == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox48_2->setCheckState(print_attr.av_remotecontrol.SupportedFeatures == 1 ? Qt::Checked : Qt::Unchecked);


        /************************************************/
        /* av_remotecontroltarget */
        ui_dialog_settings->checkBox49_2->setCheckState(print_attr.av_remotecontroltarget.ServiceRecord == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox50_2->setCheckState(print_attr.av_remotecontroltarget.ServiceClassIDList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox51_2->setCheckState(print_attr.av_remotecontroltarget.ProtocolDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox52_2->setCheckState(print_attr.av_remotecontroltarget.ServiceName == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox53_2->setCheckState(print_attr.av_remotecontroltarget.BluetoothProfileDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox54_2->setCheckState(print_attr.av_remotecontroltarget.ProviderName == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox55_2->setCheckState(print_attr.av_remotecontroltarget.SupportedFeatures == 1 ? Qt::Checked : Qt::Unchecked);


        /************************************************/
        /* av_remotecontrolcontroller */
        ui_dialog_settings->checkBox56_2->setCheckState(print_attr.av_remotecontrolcontroller.ServiceRecord == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox57_2->setCheckState(print_attr.av_remotecontrolcontroller.ServiceClassIDList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox58_2->setCheckState(print_attr.av_remotecontrolcontroller.ProtocolDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox59_2->setCheckState(print_attr.av_remotecontrolcontroller.ServiceName == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox60_2->setCheckState(print_attr.av_remotecontrolcontroller.BluetoothProfileDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox61_2->setCheckState(print_attr.av_remotecontrolcontroller.ProviderName == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox62_2->setCheckState(print_attr.av_remotecontrolcontroller.SupportedFeatures == 1 ? Qt::Checked : Qt::Unchecked);


        /************************************************/
        /* panu */
        ui_dialog_settings->checkBox63_2->setCheckState(print_attr.panu.ServiceRecord == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox64_2->setCheckState(print_attr.panu.ServiceClassIDList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox65_2->setCheckState(print_attr.panu.ProtocolDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox66_2->setCheckState(print_attr.panu.ServiceName == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox67_2->setCheckState(print_attr.panu.BluetoothProfileDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox68_2->setCheckState(print_attr.panu.LanguageBaseAttributeIdList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox69_2->setCheckState(print_attr.panu.ServiceDescription == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox70_2->setCheckState(print_attr.panu.SecurityDescription == 1 ? Qt::Checked : Qt::Unchecked);


        /************************************************/
        /* nap */
        ui_dialog_settings->checkBox71_2->setCheckState(print_attr.nap.ServiceRecord == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox72_2->setCheckState(print_attr.nap.ServiceClassIDList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox73_2->setCheckState(print_attr.nap.ProtocolDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox74_2->setCheckState(print_attr.nap.ServiceName == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox75_2->setCheckState(print_attr.nap.BluetoothProfileDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox76_2->setCheckState(print_attr.nap.LanguageBaseAttributeIdList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox77_2->setCheckState(print_attr.nap.ServiceDescription == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox78_2->setCheckState(print_attr.nap.SecurityDescription == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox79_2->setCheckState(print_attr.nap.NetAccessType == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox80_2->setCheckState(print_attr.nap.MaxNetAccessRate == 1 ? Qt::Checked : Qt::Unchecked);


        /************************************************/
        /* pbap */
        ui_dialog_settings->checkBox81_2->setCheckState(print_attr.pbap.ServiceRecord == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox82_2->setCheckState(print_attr.pbap.ServiceClassIDList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox83_2->setCheckState(print_attr.pbap.ProtocolDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox84_2->setCheckState(print_attr.pbap.ServiceName == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox85_2->setCheckState(print_attr.pbap.BluetoothProfileDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox86_2->setCheckState(print_attr.pbap.Goepl2cappsm == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox87_2->setCheckState(print_attr.pbap.SupportedRepositories == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox88_2->setCheckState(print_attr.pbap.SupportedFeatures == 1 ? Qt::Checked : Qt::Unchecked);


        /************************************************/
        /* map */
        ui_dialog_settings->checkBox89_2->setCheckState(print_attr.map.ServiceRecord == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox90_2->setCheckState(print_attr.map.ServiceClassIDList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox91_2->setCheckState(print_attr.map.ProtocolDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox92_2->setCheckState(print_attr.map.ServiceName == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox93_2->setCheckState(print_attr.map.BluetoothProfileDescriptorList == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox94_2->setCheckState(print_attr.map.Goepl2cappsm == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox95_2->setCheckState(print_attr.map.SupportedMessageTypes == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox96_2->setCheckState(print_attr.map.MasInstanceId == 1 ? Qt::Checked : Qt::Unchecked);
        ui_dialog_settings->checkBox97_2->setCheckState(print_attr.map.MapSupportedFeatures == 1 ? Qt::Checked : Qt::Unchecked);
    }
}


void Settings::checkBox_printInfo_s(int state)
{

}

void Settings::checkBox_print_s(int state)
{
    //if (from_attr_flag == 0)
   // {
        /*switch (state)
        {
        case Qt::Unchecked:
            print_attr.setAllTo(0);
            setSettingsFromData(0, 1, 0);
            break;
        case Qt::Checked:
            print_attr.setAllTo(1);
            setSettingsFromData(0, 1, 0);
            break;
        }*/
    //}
    //else
   //{

    //}
}

void Settings::checkBox_debug_s(int state)
{

}


/************************************************/
/* headset */

void Settings::checkBox1_s(int state)
{
    switch (state)
    {
        case Qt::Unchecked:
            search_attr.headset.ServiceRecord = 0;
        break;

        case Qt::Checked:
            search_attr.headset.ServiceRecord = 1;
        break;
    }

}

void Settings::checkBox2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.headset.ServiceClassIDList = 0;
        break;

    case Qt::Checked:
        search_attr.headset.ServiceClassIDList = 1;
        break;
    }

}

void Settings::checkBox3_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.headset.ProtocolDescriptorList = 0;
        break;

    case Qt::Checked:
        search_attr.headset.ProtocolDescriptorList = 1;
        break;
    }

}

void Settings::checkBox4_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.headset.ServiceName = 0;
        break;

    case Qt::Checked:
        search_attr.headset.ServiceName = 1;
        break;
    }

}

void Settings::checkBox5_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.headset.BluetoothProfileDescriptorList = 0;
        break;

    case Qt::Checked:
        search_attr.headset.BluetoothProfileDescriptorList = 1;
        break;
    }

}

void Settings::checkBox6_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.headset.RemoteAudioVolumeControl = 0;
        break;

    case Qt::Checked:
        search_attr.headset.RemoteAudioVolumeControl = 1;
        break;
    }

}

/************************************************/
/* headset_ag */

void Settings::checkBox7_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.headset_ag.ServiceRecord = 0;
        break;

    case Qt::Checked:
        search_attr.headset_ag.ServiceRecord = 1;
        break;
    }

}

void Settings::checkBox8_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.headset_ag.ServiceClassIDList = 0;
        break;

    case Qt::Checked:
        search_attr.headset_ag.ServiceClassIDList = 1;
        break;
    }

}

void Settings::checkBox9_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.headset_ag.ProtocolDescriptorList = 0;
        break;

    case Qt::Checked:
        search_attr.headset_ag.ProtocolDescriptorList = 1;
        break;
    }

}

void Settings::checkBox10_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.headset_ag.ServiceName = 0;
        break;

    case Qt::Checked:
        search_attr.headset_ag.ServiceName = 1;
        break;
    }

}

void Settings::checkBox11_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.headset_ag.BluetoothProfileDescriptorList = 0;
        break;

    case Qt::Checked:
        search_attr.headset_ag.BluetoothProfileDescriptorList = 1;
        break;
    }

}

void Settings::checkBox12_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.headset_ag.RemoteAudioVolumeControl = 0;
        break;

    case Qt::Checked:
        search_attr.headset_ag.RemoteAudioVolumeControl = 1;
        break;
    }

}

/************************************************/
/* audiosource */

void Settings::checkBox13_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.audiosource.ServiceRecord = 0;
        break;

    case Qt::Checked:
        search_attr.audiosource.ServiceRecord = 1;
        break;
    }

}

void Settings::checkBox14_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.audiosource.ServiceClassIDList = 0;
        break;

    case Qt::Checked:
        search_attr.audiosource.ServiceClassIDList = 1;
        break;
    }

}

void Settings::checkBox15_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.audiosource.ProtocolDescriptorList = 0;
        break;

    case Qt::Checked:
        search_attr.audiosource.ProtocolDescriptorList = 1;
        break;
    }

}

void Settings::checkBox16_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.audiosource.ServiceName = 0;
        break;

    case Qt::Checked:
        search_attr.audiosource.ServiceName = 1;
        break;
    }

}

void Settings::checkBox17_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.audiosource.BluetoothProfileDescriptorList = 0;
        break;

    case Qt::Checked:
        search_attr.audiosource.BluetoothProfileDescriptorList = 1;
        break;
    }

}

void Settings::checkBox18_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.audiosource.ProviderName = 0;
        break;

    case Qt::Checked:
        search_attr.audiosource.ProviderName = 1;
        break;
    }

}

void Settings::checkBox19_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.audiosource.SupportedFeatures = 0;
        break;

    case Qt::Checked:
        search_attr.audiosource.SupportedFeatures = 1;
        break;
    }

}

/************************************************/
/* handsfree */

void Settings::checkBox20_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.handsfree.ServiceRecord = 0;
        break;

    case Qt::Checked:
        search_attr.handsfree.ServiceRecord = 1;
        break;
    }

}

void Settings::checkBox21_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.handsfree.ServiceClassIDList = 0;
        break;

    case Qt::Checked:
        search_attr.handsfree.ServiceClassIDList = 1;
        break;
    }

}

void Settings::checkBox22_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.handsfree.ProtocolDescriptorList = 0;
        break;

    case Qt::Checked:
        search_attr.handsfree.ProtocolDescriptorList = 1;
        break;
    }

}

void Settings::checkBox23_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.handsfree.ServiceName = 0;
        break;

    case Qt::Checked:
        search_attr.handsfree.ServiceName = 1;
        break;
    }

}

void Settings::checkBox24_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.handsfree.BluetoothProfileDescriptorList = 0;
        break;

    case Qt::Checked:
        search_attr.handsfree.BluetoothProfileDescriptorList = 1;
        break;
    }

}

void Settings::checkBox25_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.handsfree.Network = 0;
        break;

    case Qt::Checked:
        search_attr.handsfree.Network = 1;
        break;
    }

}

void Settings::checkBox26_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.handsfree.SupportedFeatures = 0;
        break;

    case Qt::Checked:
        search_attr.handsfree.SupportedFeatures = 1;
        break;
    }

}

/************************************************/
/* handsfree_ag */

void Settings::checkBox27_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.handsfree_ag.ServiceRecord = 0;
        break;

    case Qt::Checked:
        search_attr.handsfree_ag.ServiceRecord = 1;
        break;
    }

}

void Settings::checkBox28_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.handsfree_ag.ServiceClassIDList = 0;
        break;

    case Qt::Checked:
        search_attr.handsfree_ag.ServiceClassIDList = 1;
        break;
    }

}

void Settings::checkBox29_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.handsfree_ag.ProtocolDescriptorList = 0;
        break;

    case Qt::Checked:
        search_attr.handsfree_ag.ProtocolDescriptorList = 1;
        break;
    }

}

void Settings::checkBox30_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.handsfree_ag.ServiceName = 0;
        break;

    case Qt::Checked:
        search_attr.handsfree_ag.ServiceName = 1;
        break;
    }

}

void Settings::checkBox31_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.handsfree_ag.BluetoothProfileDescriptorList = 0;
        break;

    case Qt::Checked:
        search_attr.handsfree_ag.BluetoothProfileDescriptorList = 1;
        break;
    }

}

void Settings::checkBox32_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.handsfree_ag.Network = 0;
        break;

    case Qt::Checked:
        search_attr.handsfree_ag.Network = 1;
        break;
    }

}

void Settings::checkBox33_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.handsfree_ag.SupportedFeatures = 0;
        break;

    case Qt::Checked:
        search_attr.handsfree_ag.SupportedFeatures = 1;
        break;
    }

}


/************************************************/
/* objectpush */

void Settings::checkBox34_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.objectpush.ServiceRecord = 0;
        break;

    case Qt::Checked:
        search_attr.objectpush.ServiceRecord = 1;
        break;
    }

}

void Settings::checkBox35_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.objectpush.ServiceClassIDList = 0;
        break;

    case Qt::Checked:
        search_attr.objectpush.ServiceClassIDList = 1;
        break;
    }

}

void Settings::checkBox36_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.objectpush.ProtocolDescriptorList = 0;
        break;

    case Qt::Checked:
        search_attr.objectpush.ProtocolDescriptorList = 1;
        break;
    }

}

void Settings::checkBox37_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.objectpush.ServiceName = 0;
        break;

    case Qt::Checked:
        search_attr.objectpush.ServiceName = 1;
        break;
    }

}

void Settings::checkBox38_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.objectpush.BluetoothProfileDescriptorList = 0;
        break;

    case Qt::Checked:
        search_attr.objectpush.BluetoothProfileDescriptorList = 1;
        break;
    }

}

void Settings::checkBox39_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.objectpush.Goepl2cappsm = 0;
        break;

    case Qt::Checked:
        search_attr.objectpush.Goepl2cappsm = 1;
        break;
    }

}

void Settings::checkBox40_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.objectpush.SupportedFormats = 0;
        break;

    case Qt::Checked:
        search_attr.objectpush.SupportedFormats = 1;
        break;
    }

}

void Settings::checkBox41_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.objectpush.ServiceVersion = 0;
        break;

    case Qt::Checked:
        search_attr.objectpush.ServiceVersion = 1;
        break;
    }

}

/************************************************/
/* av_remotecontrol */

void Settings::checkBox42_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.av_remotecontrol.ServiceRecord = 0;
        break;

    case Qt::Checked:
        search_attr.av_remotecontrol.ServiceRecord = 1;
        break;
    }

}

void Settings::checkBox43_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.av_remotecontrol.ServiceClassIDList = 0;
        break;

    case Qt::Checked:
        search_attr.av_remotecontrol.ServiceClassIDList = 1;
        break;
    }

}

void Settings::checkBox44_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.av_remotecontrol.ProtocolDescriptorList = 0;
        break;

    case Qt::Checked:
        search_attr.av_remotecontrol.ProtocolDescriptorList = 1;
        break;
    }

}

void Settings::checkBox45_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.av_remotecontrol.ServiceName = 0;
        break;

    case Qt::Checked:
        search_attr.av_remotecontrol.ServiceName = 1;
        break;
    }

}

void Settings::checkBox46_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.av_remotecontrol.BluetoothProfileDescriptorList = 0;
        break;

    case Qt::Checked:
        search_attr.av_remotecontrol.BluetoothProfileDescriptorList = 1;
        break;
    }

}

void Settings::checkBox47_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.av_remotecontrol.ProviderName = 0;
        break;

    case Qt::Checked:
        search_attr.av_remotecontrol.ProviderName = 1;
        break;
    }

}

void Settings::checkBox48_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.av_remotecontrol.SupportedFeatures = 0;
        break;

    case Qt::Checked:
        search_attr.av_remotecontrol.SupportedFeatures = 1;
        break;
    }

}

/************************************************/
/* av_remotecontroltarget */

void Settings::checkBox49_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.av_remotecontroltarget.ServiceRecord = 0;
        break;

    case Qt::Checked:
        search_attr.av_remotecontroltarget.ServiceRecord = 1;
        break;
    }

}

void Settings::checkBox50_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.av_remotecontroltarget.ServiceClassIDList = 0;
        break;

    case Qt::Checked:
        search_attr.av_remotecontroltarget.ServiceClassIDList = 1;
        break;
    }

}

void Settings::checkBox51_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.av_remotecontroltarget.ProtocolDescriptorList = 0;
        break;

    case Qt::Checked:
        search_attr.av_remotecontroltarget.ProtocolDescriptorList = 1;
        break;
    }

}

void Settings::checkBox52_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.av_remotecontroltarget.ServiceName = 0;
        break;

    case Qt::Checked:
        search_attr.av_remotecontroltarget.ServiceName = 1;
        break;
    }

}

void Settings::checkBox53_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.av_remotecontroltarget.BluetoothProfileDescriptorList = 0;
        break;

    case Qt::Checked:
        search_attr.av_remotecontroltarget.BluetoothProfileDescriptorList = 1;
        break;
    }

}

void Settings::checkBox54_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.av_remotecontroltarget.ProviderName = 0;
        break;

    case Qt::Checked:
        search_attr.av_remotecontroltarget.ProviderName = 1;
        break;
    }

}

void Settings::checkBox55_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.av_remotecontroltarget.SupportedFeatures = 0;
        break;

    case Qt::Checked:
        search_attr.av_remotecontroltarget.SupportedFeatures = 1;
        break;
    }

}

/************************************************/
/* av_remotecontrolcontroller */

void Settings::checkBox56_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.av_remotecontrolcontroller.ServiceRecord = 0;
        break;

    case Qt::Checked:
        search_attr.av_remotecontrolcontroller.ServiceRecord = 1;
        break;
    }

}

void Settings::checkBox57_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.av_remotecontrolcontroller.ServiceClassIDList = 0;
        break;

    case Qt::Checked:
        search_attr.av_remotecontrolcontroller.ServiceClassIDList = 1;
        break;
    }

}

void Settings::checkBox58_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.av_remotecontrolcontroller.ProtocolDescriptorList = 0;
        break;

    case Qt::Checked:
        search_attr.av_remotecontrolcontroller.ProtocolDescriptorList = 1;
        break;
    }

}

void Settings::checkBox59_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.av_remotecontrolcontroller.ServiceName = 0;
        break;

    case Qt::Checked:
        search_attr.av_remotecontrolcontroller.ServiceName = 1;
        break;
    }

}

void Settings::checkBox60_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.av_remotecontrolcontroller.BluetoothProfileDescriptorList = 0;
        break;

    case Qt::Checked:
        search_attr.av_remotecontrolcontroller.BluetoothProfileDescriptorList = 1;
        break;
    }

}

void Settings::checkBox61_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.av_remotecontrolcontroller.ProviderName = 0;
        break;

    case Qt::Checked:
        search_attr.av_remotecontrolcontroller.ProviderName = 1;
        break;
    }

}

void Settings::checkBox62_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.av_remotecontrolcontroller.SupportedFeatures = 0;
        break;

    case Qt::Checked:
        search_attr.av_remotecontrolcontroller.SupportedFeatures = 1;
        break;
    }

}

/************************************************/
/* panu */

void Settings::checkBox63_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.panu.ServiceRecord = 0;
        break;

    case Qt::Checked:
        search_attr.panu.ServiceRecord = 1;
        break;
    }

}

void Settings::checkBox64_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.panu.ServiceClassIDList = 0;
        break;

    case Qt::Checked:
        search_attr.panu.ServiceClassIDList = 1;
        break;
    }

}

void Settings::checkBox65_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.panu.ProtocolDescriptorList = 0;
        break;

    case Qt::Checked:
        search_attr.panu.ProtocolDescriptorList = 1;
        break;
    }

}

void Settings::checkBox66_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.panu.ServiceName = 0;
        break;

    case Qt::Checked:
        search_attr.panu.ServiceName = 1;
        break;
    }

}

void Settings::checkBox67_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.panu.BluetoothProfileDescriptorList = 0;
        break;

    case Qt::Checked:
        search_attr.panu.BluetoothProfileDescriptorList = 1;
        break;
    }

}

void Settings::checkBox68_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.panu.LanguageBaseAttributeIdList = 0;
        break;

    case Qt::Checked:
        search_attr.panu.LanguageBaseAttributeIdList = 1;
        break;
    }

}

void Settings::checkBox69_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.panu.ServiceDescription = 0;
        break;

    case Qt::Checked:
        search_attr.panu.ServiceDescription = 1;
        break;
    }

}

void Settings::checkBox70_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.panu.SecurityDescription = 0;
        break;

    case Qt::Checked:
        search_attr.panu.SecurityDescription = 1;
        break;
    }

}

/************************************************/
/* nap */

void Settings::checkBox71_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.nap.ServiceRecord = 0;
        break;

    case Qt::Checked:
        search_attr.nap.ServiceRecord = 1;
        break;
    }

}

void Settings::checkBox72_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.nap.ServiceClassIDList = 0;
        break;

    case Qt::Checked:
        search_attr.nap.ServiceClassIDList = 1;
        break;
    }

}

void Settings::checkBox73_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.nap.ProtocolDescriptorList = 0;
        break;

    case Qt::Checked:
        search_attr.nap.ProtocolDescriptorList = 1;
        break;
    }

}

void Settings::checkBox74_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.nap.ServiceName = 0;
        break;

    case Qt::Checked:
        search_attr.nap.ServiceName = 1;
        break;
    }

}

void Settings::checkBox75_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.nap.BluetoothProfileDescriptorList = 0;
        break;

    case Qt::Checked:
        search_attr.nap.BluetoothProfileDescriptorList = 1;
        break;
    }

}

void Settings::checkBox76_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.nap.LanguageBaseAttributeIdList = 0;
        break;

    case Qt::Checked:
        search_attr.nap.LanguageBaseAttributeIdList = 1;
        break;
    }

}

void Settings::checkBox77_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.nap.ServiceDescription = 0;
        break;

    case Qt::Checked:
        search_attr.nap.ServiceDescription = 1;
        break;
    }

}

void Settings::checkBox78_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.nap.SecurityDescription = 0;
        break;

    case Qt::Checked:
        search_attr.nap.SecurityDescription = 1;
        break;
    }

}

void Settings::checkBox79_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.nap.NetAccessType = 0;
        break;

    case Qt::Checked:
        search_attr.nap.NetAccessType = 1;
        break;
    }

}

void Settings::checkBox80_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.nap.MaxNetAccessRate = 0;
        break;

    case Qt::Checked:
        search_attr.nap.MaxNetAccessRate = 1;
        break;
    }

}

/************************************************/
/* pbap */

void Settings::checkBox81_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.pbap.ServiceRecord = 0;
        break;

    case Qt::Checked:
        search_attr.pbap.ServiceRecord = 1;
        break;
    }

}

void Settings::checkBox82_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.pbap.ServiceClassIDList = 0;
        break;

    case Qt::Checked:
        search_attr.pbap.ServiceClassIDList = 1;
        break;
    }

}

void Settings::checkBox83_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.pbap.ProtocolDescriptorList = 0;
        break;

    case Qt::Checked:
        search_attr.pbap.ProtocolDescriptorList = 1;
        break;
    }

}

void Settings::checkBox84_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.pbap.ServiceName = 0;
        break;

    case Qt::Checked:
        search_attr.pbap.ServiceName = 1;
        break;
    }

}

void Settings::checkBox85_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.pbap.BluetoothProfileDescriptorList = 0;
        break;

    case Qt::Checked:
        search_attr.pbap.BluetoothProfileDescriptorList = 1;
        break;
    }

}

void Settings::checkBox86_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.pbap.Goepl2cappsm = 0;
        break;

    case Qt::Checked:
        search_attr.pbap.Goepl2cappsm = 1;
        break;
    }

}

void Settings::checkBox87_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.pbap.SupportedRepositories = 0;
        break;

    case Qt::Checked:
        search_attr.pbap.SupportedRepositories = 1;
        break;
    }

}

void Settings::checkBox88_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.pbap.SupportedFeatures = 0;
        break;

    case Qt::Checked:
        search_attr.pbap.SupportedFeatures = 1;
        break;
    }

}

/************************************************/
/* map */

void Settings::checkBox89_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.map.ServiceRecord = 0;
        break;

    case Qt::Checked:
        search_attr.map.ServiceRecord = 1;
        break;
    }

}

void Settings::checkBox90_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.map.ServiceClassIDList = 0;
        break;

    case Qt::Checked:
        search_attr.map.ServiceClassIDList = 1;
        break;
    }

}

void Settings::checkBox91_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.map.ProtocolDescriptorList = 0;
        break;

    case Qt::Checked:
        search_attr.map.ProtocolDescriptorList = 1;
        break;
    }

}

void Settings::checkBox92_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.map.ServiceName = 0;
        break;

    case Qt::Checked:
        search_attr.map.ServiceName = 1;
        break;
    }

}

void Settings::checkBox93_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.map.BluetoothProfileDescriptorList = 0;
        break;

    case Qt::Checked:
        search_attr.map.BluetoothProfileDescriptorList = 1;
        break;
    }

}

void Settings::checkBox94_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.map.Goepl2cappsm = 0;
        break;

    case Qt::Checked:
        search_attr.map.Goepl2cappsm = 1;
        break;
    }

}

void Settings::checkBox95_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.map.SupportedMessageTypes = 0;
        break;

    case Qt::Checked:
        search_attr.map.SupportedMessageTypes = 1;
        break;
    }

}

void Settings::checkBox96_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.map.MasInstanceId = 0;
        break;

    case Qt::Checked:
        search_attr.map.MasInstanceId = 1;
        break;
    }

}

void Settings::checkBox97_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        search_attr.map.MapSupportedFeatures = 0;
        break;

    case Qt::Checked:
        search_attr.map.MapSupportedFeatures = 1;
        break;
    }

}



/********************************************************************************************************/
/********************************************************************************************************/
/********************************************************************************************************/
/********************************************************************************************************/
/********************************************************************************************************/
/* PRINT */



/************************************************/
/* headset */

void Settings::checkBox1_2_s(int state)
{
    switch (state)
    {
        case Qt::Unchecked:
            print_attr.headset.ServiceRecord = 0;

            /*print_attr.countTRUE -= 1;
            if (ui_dialog_settings->checkBox_print->isChecked() == TRUE)
                ui_dialog_settings->checkBox_print->setCheckState(Qt::Unchecked);*/
        break;

        case Qt::Checked:
            print_attr.headset.ServiceRecord = 1;

            /*print_attr.countTRUE += 1;
            if (ui_dialog_settings->checkBox_print->isChecked() == FALSE && print_attr.countTRUE == 97)
                ui_dialog_settings->checkBox_print->setCheckState(Qt::Checked);*/
        break;
    }

    from_attr_flag = 1;
}

void Settings::checkBox2_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.headset.ServiceClassIDList = 0;

        /*print_attr.countTRUE -= 1;
        if (ui_dialog_settings->checkBox_print->isChecked() == TRUE)
            ui_dialog_settings->checkBox_print->setCheckState(Qt::Unchecked);*/
        break;

    case Qt::Checked:
        print_attr.headset.ServiceClassIDList = 1;

        /*print_attr.countTRUE += 1;
        if (ui_dialog_settings->checkBox_print->isChecked() == FALSE && print_attr.countTRUE == 97)
            ui_dialog_settings->checkBox_print->setCheckState(Qt::Checked);*/
        break;
    }

}

void Settings::checkBox3_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.headset.ProtocolDescriptorList = 0;

        
        break;

    case Qt::Checked:
        print_attr.headset.ProtocolDescriptorList = 1;

        
        break;
    }

}

void Settings::checkBox4_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.headset.ServiceName = 0;

        
        break;

    case Qt::Checked:
        print_attr.headset.ServiceName = 1;

        
        break;
    }

}

void Settings::checkBox5_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.headset.BluetoothProfileDescriptorList = 0;

        
        break;

    case Qt::Checked:
        print_attr.headset.BluetoothProfileDescriptorList = 1;

        
        break;
    }

}

void Settings::checkBox6_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.headset.RemoteAudioVolumeControl = 0;

        
        break;

    case Qt::Checked:
        print_attr.headset.RemoteAudioVolumeControl = 1;

       
        break;
    }

}

/************************************************/
/* headset_ag */

void Settings::checkBox7_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.headset_ag.ServiceRecord = 0;

        
        break;

    case Qt::Checked:
        print_attr.headset_ag.ServiceRecord = 1;

        
        break;
    }

}

void Settings::checkBox8_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.headset_ag.ServiceClassIDList = 0;

        
        break;

    case Qt::Checked:
        print_attr.headset_ag.ServiceClassIDList = 1;

        
        break;
    }

}

void Settings::checkBox9_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.headset_ag.ProtocolDescriptorList = 0;
        break;

    case Qt::Checked:
        print_attr.headset_ag.ProtocolDescriptorList = 1;
        break;
    }

}

void Settings::checkBox10_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.headset_ag.ServiceName = 0;
        break;

    case Qt::Checked:
        print_attr.headset_ag.ServiceName = 1;
        break;
    }

}

void Settings::checkBox11_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.headset_ag.BluetoothProfileDescriptorList = 0;
        break;

    case Qt::Checked:
        print_attr.headset_ag.BluetoothProfileDescriptorList = 1;
        break;
    }

}

void Settings::checkBox12_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.headset_ag.RemoteAudioVolumeControl = 0;
        break;

    case Qt::Checked:
        print_attr.headset_ag.RemoteAudioVolumeControl = 1;
        break;
    }

}

/************************************************/
/* audiosource */

void Settings::checkBox13_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.audiosource.ServiceRecord = 0;
        break;

    case Qt::Checked:
        print_attr.audiosource.ServiceRecord = 1;
        break;
    }

}

void Settings::checkBox14_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.audiosource.ServiceClassIDList = 0;
        break;

    case Qt::Checked:
        print_attr.audiosource.ServiceClassIDList = 1;
        break;
    }

}

void Settings::checkBox15_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.audiosource.ProtocolDescriptorList = 0;
        break;

    case Qt::Checked:
        print_attr.audiosource.ProtocolDescriptorList = 1;
        break;
    }

}

void Settings::checkBox16_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.audiosource.ServiceName = 0;
        break;

    case Qt::Checked:
        print_attr.audiosource.ServiceName = 1;
        break;
    }

}

void Settings::checkBox17_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.audiosource.BluetoothProfileDescriptorList = 0;
        break;

    case Qt::Checked:
        print_attr.audiosource.BluetoothProfileDescriptorList = 1;
        break;
    }

}

void Settings::checkBox18_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.audiosource.ProviderName = 0;
        break;

    case Qt::Checked:
        print_attr.audiosource.ProviderName = 1;
        break;
    }

}

void Settings::checkBox19_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.audiosource.SupportedFeatures = 0;
        break;

    case Qt::Checked:
        print_attr.audiosource.SupportedFeatures = 1;
        break;
    }

}

/************************************************/
/* handsfree */

void Settings::checkBox20_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.handsfree.ServiceRecord = 0;
        break;

    case Qt::Checked:
        print_attr.handsfree.ServiceRecord = 1;
        break;
    }

}

void Settings::checkBox21_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.handsfree.ServiceClassIDList = 0;
        break;

    case Qt::Checked:
        print_attr.handsfree.ServiceClassIDList = 1;
        break;
    }

}

void Settings::checkBox22_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.handsfree.ProtocolDescriptorList = 0;
        break;

    case Qt::Checked:
        print_attr.handsfree.ProtocolDescriptorList = 1;
        break;
    }

}

void Settings::checkBox23_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.handsfree.ServiceName = 0;
        break;

    case Qt::Checked:
        print_attr.handsfree.ServiceName = 1;
        break;
    }

}

void Settings::checkBox24_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.handsfree.BluetoothProfileDescriptorList = 0;
        break;

    case Qt::Checked:
        print_attr.handsfree.BluetoothProfileDescriptorList = 1;
        break;
    }

}

void Settings::checkBox25_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.handsfree.Network = 0;
        break;

    case Qt::Checked:
        print_attr.handsfree.Network = 1;
        break;
    }

}

void Settings::checkBox26_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.handsfree.SupportedFeatures = 0;
        break;

    case Qt::Checked:
        print_attr.handsfree.SupportedFeatures = 1;
        break;
    }

}

/************************************************/
/* handsfree_ag */

void Settings::checkBox27_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.handsfree_ag.ServiceRecord = 0;
        break;

    case Qt::Checked:
        print_attr.handsfree_ag.ServiceRecord = 1;
        break;
    }

}

void Settings::checkBox28_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.handsfree_ag.ServiceClassIDList = 0;
        break;

    case Qt::Checked:
        print_attr.handsfree_ag.ServiceClassIDList = 1;
        break;
    }

}

void Settings::checkBox29_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.handsfree_ag.ProtocolDescriptorList = 0;
        break;

    case Qt::Checked:
        print_attr.handsfree_ag.ProtocolDescriptorList = 1;
        break;
    }

}

void Settings::checkBox30_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.handsfree_ag.ServiceName = 0;
        break;

    case Qt::Checked:
        print_attr.handsfree_ag.ServiceName = 1;
        break;
    }

}

void Settings::checkBox31_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.handsfree_ag.BluetoothProfileDescriptorList = 0;
        break;

    case Qt::Checked:
        print_attr.handsfree_ag.BluetoothProfileDescriptorList = 1;
        break;
    }

}

void Settings::checkBox32_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.handsfree_ag.Network = 0;
        break;

    case Qt::Checked:
        print_attr.handsfree_ag.Network = 1;
        break;
    }

}

void Settings::checkBox33_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.handsfree_ag.SupportedFeatures = 0;
        break;

    case Qt::Checked:
        print_attr.handsfree_ag.SupportedFeatures = 1;
        break;
    }

}


/************************************************/
/* objectpush */

void Settings::checkBox34_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.objectpush.ServiceRecord = 0;
        break;

    case Qt::Checked:
        print_attr.objectpush.ServiceRecord = 1;
        break;
    }

}

void Settings::checkBox35_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.objectpush.ServiceClassIDList = 0;
        break;

    case Qt::Checked:
        print_attr.objectpush.ServiceClassIDList = 1;
        break;
    }

}

void Settings::checkBox36_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.objectpush.ProtocolDescriptorList = 0;
        break;

    case Qt::Checked:
        print_attr.objectpush.ProtocolDescriptorList = 1;
        break;
    }

}

void Settings::checkBox37_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.objectpush.ServiceName = 0;
        break;

    case Qt::Checked:
        print_attr.objectpush.ServiceName = 1;
        break;
    }

}

void Settings::checkBox38_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.objectpush.BluetoothProfileDescriptorList = 0;
        break;

    case Qt::Checked:
        print_attr.objectpush.BluetoothProfileDescriptorList = 1;
        break;
    }

}

void Settings::checkBox39_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.objectpush.Goepl2cappsm = 0;
        break;

    case Qt::Checked:
        print_attr.objectpush.Goepl2cappsm = 1;
        break;
    }

}

void Settings::checkBox40_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.objectpush.SupportedFormats = 0;
        break;

    case Qt::Checked:
        print_attr.objectpush.SupportedFormats = 1;
        break;
    }

}

void Settings::checkBox41_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.objectpush.ServiceVersion = 0;
        break;

    case Qt::Checked:
        print_attr.objectpush.ServiceVersion = 1;
        break;
    }

}

/************************************************/
/* av_remotecontrol */

void Settings::checkBox42_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.av_remotecontrol.ServiceRecord = 0;
        break;

    case Qt::Checked:
        print_attr.av_remotecontrol.ServiceRecord = 1;
        break;
    }

}

void Settings::checkBox43_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.av_remotecontrol.ServiceClassIDList = 0;
        break;

    case Qt::Checked:
        print_attr.av_remotecontrol.ServiceClassIDList = 1;
        break;
    }

}

void Settings::checkBox44_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.av_remotecontrol.ProtocolDescriptorList = 0;
        break;

    case Qt::Checked:
        print_attr.av_remotecontrol.ProtocolDescriptorList = 1;
        break;
    }

}

void Settings::checkBox45_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.av_remotecontrol.ServiceName = 0;
        break;

    case Qt::Checked:
        print_attr.av_remotecontrol.ServiceName = 1;
        break;
    }

}

void Settings::checkBox46_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.av_remotecontrol.BluetoothProfileDescriptorList = 0;
        break;

    case Qt::Checked:
        print_attr.av_remotecontrol.BluetoothProfileDescriptorList = 1;
        break;
    }

}

void Settings::checkBox47_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.av_remotecontrol.ProviderName = 0;
        break;

    case Qt::Checked:
        print_attr.av_remotecontrol.ProviderName = 1;
        break;
    }

}

void Settings::checkBox48_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.av_remotecontrol.SupportedFeatures = 0;
        break;

    case Qt::Checked:
        print_attr.av_remotecontrol.SupportedFeatures = 1;
        break;
    }

}

/************************************************/
/* av_remotecontroltarget */

void Settings::checkBox49_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.av_remotecontroltarget.ServiceRecord = 0;
        break;

    case Qt::Checked:
        print_attr.av_remotecontroltarget.ServiceRecord = 1;
        break;
    }

}

void Settings::checkBox50_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.av_remotecontroltarget.ServiceClassIDList = 0;
        break;

    case Qt::Checked:
        print_attr.av_remotecontroltarget.ServiceClassIDList = 1;
        break;
    }

}

void Settings::checkBox51_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.av_remotecontroltarget.ProtocolDescriptorList = 0;
        break;

    case Qt::Checked:
        print_attr.av_remotecontroltarget.ProtocolDescriptorList = 1;
        break;
    }

}

void Settings::checkBox52_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.av_remotecontroltarget.ServiceName = 0;
        break;

    case Qt::Checked:
        print_attr.av_remotecontroltarget.ServiceName = 1;
        break;
    }

}

void Settings::checkBox53_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.av_remotecontroltarget.BluetoothProfileDescriptorList = 0;
        break;

    case Qt::Checked:
        print_attr.av_remotecontroltarget.BluetoothProfileDescriptorList = 1;
        break;
    }

}

void Settings::checkBox54_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.av_remotecontroltarget.ProviderName = 0;
        break;

    case Qt::Checked:
        print_attr.av_remotecontroltarget.ProviderName = 1;
        break;
    }

}

void Settings::checkBox55_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.av_remotecontroltarget.SupportedFeatures = 0;
        break;

    case Qt::Checked:
        print_attr.av_remotecontroltarget.SupportedFeatures = 1;
        break;
    }

}

/************************************************/
/* av_remotecontrolcontroller */

void Settings::checkBox56_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.av_remotecontrolcontroller.ServiceRecord = 0;
        break;

    case Qt::Checked:
        print_attr.av_remotecontrolcontroller.ServiceRecord = 1;
        break;
    }

}

void Settings::checkBox57_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.av_remotecontrolcontroller.ServiceClassIDList = 0;
        break;

    case Qt::Checked:
        print_attr.av_remotecontrolcontroller.ServiceClassIDList = 1;
        break;
    }

}

void Settings::checkBox58_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.av_remotecontrolcontroller.ProtocolDescriptorList = 0;
        break;

    case Qt::Checked:
        print_attr.av_remotecontrolcontroller.ProtocolDescriptorList = 1;
        break;
    }

}

void Settings::checkBox59_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.av_remotecontrolcontroller.ServiceName = 0;
        break;

    case Qt::Checked:
        print_attr.av_remotecontrolcontroller.ServiceName = 1;
        break;
    }

}

void Settings::checkBox60_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.av_remotecontrolcontroller.BluetoothProfileDescriptorList = 0;
        break;

    case Qt::Checked:
        print_attr.av_remotecontrolcontroller.BluetoothProfileDescriptorList = 1;
        break;
    }

}

void Settings::checkBox61_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.av_remotecontrolcontroller.ProviderName = 0;
        break;

    case Qt::Checked:
        print_attr.av_remotecontrolcontroller.ProviderName = 1;
        break;
    }

}

void Settings::checkBox62_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.av_remotecontrolcontroller.SupportedFeatures = 0;
        break;

    case Qt::Checked:
        print_attr.av_remotecontrolcontroller.SupportedFeatures = 1;
        break;
    }

}

/************************************************/
/* panu */

void Settings::checkBox63_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.panu.ServiceRecord = 0;
        break;

    case Qt::Checked:
        print_attr.panu.ServiceRecord = 1;
        break;
    }

}

void Settings::checkBox64_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.panu.ServiceClassIDList = 0;
        break;

    case Qt::Checked:
        print_attr.panu.ServiceClassIDList = 1;
        break;
    }

}

void Settings::checkBox65_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.panu.ProtocolDescriptorList = 0;
        break;

    case Qt::Checked:
        print_attr.panu.ProtocolDescriptorList = 1;
        break;
    }

}

void Settings::checkBox66_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.panu.ServiceName = 0;
        break;

    case Qt::Checked:
        print_attr.panu.ServiceName = 1;
        break;
    }

}

void Settings::checkBox67_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.panu.BluetoothProfileDescriptorList = 0;
        break;

    case Qt::Checked:
        print_attr.panu.BluetoothProfileDescriptorList = 1;
        break;
    }

}

void Settings::checkBox68_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.panu.LanguageBaseAttributeIdList = 0;
        break;

    case Qt::Checked:
        print_attr.panu.LanguageBaseAttributeIdList = 1;
        break;
    }

}

void Settings::checkBox69_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.panu.ServiceDescription = 0;
        break;

    case Qt::Checked:
        print_attr.panu.ServiceDescription = 1;
        break;
    }

}

void Settings::checkBox70_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.panu.SecurityDescription = 0;
        break;

    case Qt::Checked:
        print_attr.panu.SecurityDescription = 1;
        break;
    }

}

/************************************************/
/* nap */

void Settings::checkBox71_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.nap.ServiceRecord = 0;
        break;

    case Qt::Checked:
        print_attr.nap.ServiceRecord = 1;
        break;
    }

}

void Settings::checkBox72_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.nap.ServiceClassIDList = 0;
        break;

    case Qt::Checked:
        print_attr.nap.ServiceClassIDList = 1;
        break;
    }

}

void Settings::checkBox73_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.nap.ProtocolDescriptorList = 0;
        break;

    case Qt::Checked:
        print_attr.nap.ProtocolDescriptorList = 1;
        break;
    }

}

void Settings::checkBox74_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.nap.ServiceName = 0;
        break;

    case Qt::Checked:
        print_attr.nap.ServiceName = 1;
        break;
    }

}

void Settings::checkBox75_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.nap.BluetoothProfileDescriptorList = 0;
        break;

    case Qt::Checked:
        print_attr.nap.BluetoothProfileDescriptorList = 1;
        break;
    }

}

void Settings::checkBox76_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.nap.LanguageBaseAttributeIdList = 0;
        break;

    case Qt::Checked:
        print_attr.nap.LanguageBaseAttributeIdList = 1;
        break;
    }

}

void Settings::checkBox77_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.nap.ServiceDescription = 0;
        break;

    case Qt::Checked:
        print_attr.nap.ServiceDescription = 1;
        break;
    }

}

void Settings::checkBox78_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.nap.SecurityDescription = 0;
        break;

    case Qt::Checked:
        print_attr.nap.SecurityDescription = 1;
        break;
    }

}

void Settings::checkBox79_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.nap.NetAccessType = 0;
        break;

    case Qt::Checked:
        print_attr.nap.NetAccessType = 1;
        break;
    }

}

void Settings::checkBox80_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.nap.MaxNetAccessRate = 0;
        break;

    case Qt::Checked:
        print_attr.nap.MaxNetAccessRate = 1;
        break;
    }

}

/************************************************/
/* pbap */

void Settings::checkBox81_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.pbap.ServiceRecord = 0;
        break;

    case Qt::Checked:
        print_attr.pbap.ServiceRecord = 1;
        break;
    }

}

void Settings::checkBox82_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.pbap.ServiceClassIDList = 0;
        break;

    case Qt::Checked:
        print_attr.pbap.ServiceClassIDList = 1;
        break;
    }

}

void Settings::checkBox83_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.pbap.ProtocolDescriptorList = 0;
        break;

    case Qt::Checked:
        print_attr.pbap.ProtocolDescriptorList = 1;
        break;
    }

}

void Settings::checkBox84_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.pbap.ServiceName = 0;
        break;

    case Qt::Checked:
        print_attr.pbap.ServiceName = 1;
        break;
    }

}

void Settings::checkBox85_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.pbap.BluetoothProfileDescriptorList = 0;
        break;

    case Qt::Checked:
        print_attr.pbap.BluetoothProfileDescriptorList = 1;
        break;
    }

}

void Settings::checkBox86_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.pbap.Goepl2cappsm = 0;
        break;

    case Qt::Checked:
        print_attr.pbap.Goepl2cappsm = 1;
        break;
    }

}

void Settings::checkBox87_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.pbap.SupportedRepositories = 0;
        break;

    case Qt::Checked:
        print_attr.pbap.SupportedRepositories = 1;
        break;
    }

}

void Settings::checkBox88_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.pbap.SupportedFeatures = 0;
        break;

    case Qt::Checked:
        print_attr.pbap.SupportedFeatures = 1;
        break;
    }

}

/************************************************/
/* map */

void Settings::checkBox89_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.map.ServiceRecord = 0;
        break;

    case Qt::Checked:
        print_attr.map.ServiceRecord = 1;
        break;
    }

}

void Settings::checkBox90_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.map.ServiceClassIDList = 0;
        break;

    case Qt::Checked:
        print_attr.map.ServiceClassIDList = 1;
        break;
    }

}

void Settings::checkBox91_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.map.ProtocolDescriptorList = 0;
        break;

    case Qt::Checked:
        print_attr.map.ProtocolDescriptorList = 1;
        break;
    }

}

void Settings::checkBox92_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.map.ServiceName = 0;
        break;

    case Qt::Checked:
        print_attr.map.ServiceName = 1;
        break;
    }

}

void Settings::checkBox93_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.map.BluetoothProfileDescriptorList = 0;
        break;

    case Qt::Checked:
        print_attr.map.BluetoothProfileDescriptorList = 1;
        break;
    }

}

void Settings::checkBox94_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.map.Goepl2cappsm = 0;
        break;

    case Qt::Checked:
        print_attr.map.Goepl2cappsm = 1;
        break;
    }

}

void Settings::checkBox95_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.map.SupportedMessageTypes = 0;
        break;

    case Qt::Checked:
        print_attr.map.SupportedMessageTypes = 1;
        break;
    }

}

void Settings::checkBox96_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.map.MasInstanceId = 0;
        break;

    case Qt::Checked:
        print_attr.map.MasInstanceId = 1;
        break;
    }

}

void Settings::checkBox97_2_s(int state)
{
    switch (state)
    {
    case Qt::Unchecked:
        print_attr.map.MapSupportedFeatures = 0;
        break;

    case Qt::Checked:
        print_attr.map.MapSupportedFeatures = 1;
        break;
    }

}
