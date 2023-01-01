#include "add_course_menu.h"
#include "ui_add_course_menu.h"
#include"Database.h"
Add_course_menu::Add_course_menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add_course_menu)
{
    ui->setupUi(this);
     this->setWindowTitle("Add Course");
    //add all prof to combo box

    for(int i=0;i<database.all_proffessors.size();i++)
    {

        ui->combo_prof->addItem(database.all_proffessors[i]->get_nname());


    }
    ui->combo_hall->addItem("3201");
    ui->combo_hall->addItem("1313");
    ui->combo_hall->addItem("1125");
    ui->combo_hall->addItem("20101");
    ui->combo_hall->addItem("3101");

    ui->combo_day->addItem("Sunday");
    ui->combo_day->addItem("Monday");
    ui->combo_day->addItem("Tuesday");
    ui->combo_day->addItem("Wednesday");
    ui->combo_day->addItem("Thursday");

}
Add_course_menu::~Add_course_menu()
{
    delete ui;
}


void Add_course_menu::on_btn_cancel_clicked()
{
    hide();

}


void Add_course_menu::on_btn_add_clicked()
{
    if(ui->combo_day->currentText()!="" && ui->combo_prof->currentText()!="" && ui->combo_hall->currentText()!="" && ui->combo_time->currentText()!="")
    {

    vector<student*>empty_vec;
    course *new_course=new course(database.all_proffessors[ui->combo_prof->currentIndex()],empty_vec,ui->txt_title->text(),ui->txt_id->text(),ui->combo_hall->currentText(),ui->combo_day->currentText(),ui->combo_time->currentText());
    database.time_available[ui->combo_hall->currentIndex()][ui->combo_day->currentIndex()][database.index_available(ui->combo_time->currentText())]=0;
    database.add_course(new_course);
    database.all_proffessors[ui->combo_prof->currentIndex()]->assign_course(new_course);
    hide();
    }

}

void Add_course_menu::on_combo_day_currentTextChanged(const QString &arg1)
{
    ui->combo_time->clear();
    if(database.time_available[ui->combo_hall->currentIndex()][ui->combo_day->currentIndex()][0]==1)
        ui->combo_time->addItem("08:30 - 10:00");
    if(database.time_available[ui->combo_hall->currentIndex()][ui->combo_day->currentIndex()][1]==1)
                ui->combo_time->addItem("10:15 - 11:45");
    if(database.time_available[ui->combo_hall->currentIndex()][ui->combo_day->currentIndex()][2]==1)
        ui->combo_time->addItem("12:15 - 01:45");
    if(database.time_available[ui->combo_hall->currentIndex()][ui->combo_day->currentIndex()][3]==1)
        ui->combo_time->addItem("02:00 - 03:30");
    if(database.time_available[ui->combo_hall->currentIndex()][ui->combo_day->currentIndex()][4]==1)
        ui->combo_time->addItem("03:15 - 04:45");
}


void Add_course_menu::on_combo_hall_currentTextChanged(const QString &arg1)
{
    ui->combo_time->clear();
    if(database.time_available[ui->combo_hall->currentIndex()][ui->combo_day->currentIndex()][0]==1)
        ui->combo_time->addItem("08:30 - 10:00");
    if(database.time_available[ui->combo_hall->currentIndex()][ui->combo_day->currentIndex()][1]==1)
                ui->combo_time->addItem("10:15 - 11:45");
    if(database.time_available[ui->combo_hall->currentIndex()][ui->combo_day->currentIndex()][2]==1)
        ui->combo_time->addItem("12:15 - 01:45");
    if(database.time_available[ui->combo_hall->currentIndex()][ui->combo_day->currentIndex()][3]==1)
        ui->combo_time->addItem("02:00 - 03:30");
    if(database.time_available[ui->combo_hall->currentIndex()][ui->combo_day->currentIndex()][4]==1)
        ui->combo_time->addItem("03:15 - 04:45");
}

