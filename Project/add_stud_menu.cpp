#include "add_stud_menu.h"
#include "qregularexpression.h"
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
    QRegularExpression emailRegex("^[a-zA-Z0-9.!#$%&'*+/=?^_`{|}~-]+@[a-zA-Z0-9](?:[a-zA-Z0-9-]{0,61}[a-zA-Z0-9])?(?:\\.[a-zA-Z0-9](?:[a-zA-Z0-9-]{0,61}[a-zA-Z0-9])?)*$");
    QRegularExpression phoneRegex("^(\\+20|0)?(11|12|10|15)[0-9]{8}$");

    if (emailRegex.match(ui->mailline->text()).hasMatch()) {
                if (phoneRegex.match(ui->mobline->text()).hasMatch()) {
                student *moe=new student();
                        moe->set_name(ui->firnameline->text(),ui->lstnameline->text());
                        moe->set_mobile(ui->mobline->text()); moe->set_email(ui->mailline->text());
                        moe->set_age(ui->ageline->text().toInt());
                        moe->set_grade(ui->gradeline->text());
                        moe->set_id("S"+QString::number(database.all_students.size()+1));
                        moe->set_email(ui->mailline->text());
                        database.add_student(moe);
                          hide();
                } else {
                    ui->mobline->clear();
                    ui->mobline->setStyleSheet("border: 2px solid red;");
                    ui->mobline->setPlaceholderText("Invalid mobile number");
                }


    }
    else {
        if (!phoneRegex.match(ui->mobline->text()).hasMatch()) {
            ui->mobline->clear();
            ui->mobline->setStyleSheet("border: 2px solid red;");
            ui->mobline->setPlaceholderText("Invalid mobile number");
        }
        ui->mailline->clear();
        ui->mailline->setStyleSheet("border: 2px solid red;");
        ui->mailline->setPlaceholderText("Invaild email address");
    }

}


void add_stud_menu::on_backbtn2_clicked()
{
    hide();
}


void add_stud_menu::on_mailline_textEdited(const QString &arg1)
{
    ui->mailline->setStyleSheet("border: inherit;");
}


void add_stud_menu::on_mobline_textEdited(const QString &arg1)
{
    ui->mobline->setStyleSheet("border: inherit;");
}

