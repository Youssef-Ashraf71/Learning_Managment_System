#include "add_course_menu.h"
#include "ui_add_course_menu.h"
#include"Database.h"
#include"coursemenu.h"

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
    //delete this prof
    vector<student*>empty_vec;
    course *new_course=new course(database.all_proffessors[ui->combo_prof->currentIndex()],empty_vec,ui->txt_title->text(),ui->txt_id->text(),ui->txt_hall->text(),ui->txt_time->text());
    database.add_course(new_course);
    hide();


}
