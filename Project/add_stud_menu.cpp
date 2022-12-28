#include "add_stud_menu.h"
#include "ui_add_stud_menu.h"
#include"student.h"
#include"Database.h"
add_stud_menu::add_stud_menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_stud_menu)
{
    ui->setupUi(this);
     this->setWindowTitle("Add Student");
    QPixmap iconstud(":/media/media/proficon.png");
    ui->icon->setPixmap(iconstud);

}

add_stud_menu::~add_stud_menu()
{
    delete ui;
}

void add_stud_menu::on_addbtn_clicked()
{
    student *moe=new student();
            moe->set_name(ui->firnameline->text(),ui->lstnameline->text());
            moe->set_mobile(ui->mobline->text()); moe->set_email(ui->mailline->text());
            moe->set_age(ui->ageline->text().toInt());
            moe->set_grade(ui->gradeline->text());
            moe->set_id(QString::number(database.all_students.size()+1));
            database.add_student(moe);
              hide();
}


void add_stud_menu::on_backbtn2_clicked()
{
    hide();
}

