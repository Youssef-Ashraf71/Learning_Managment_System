#include "new_admin.h"
#include "ui_new_admin.h"
#include"Database.h"

new_admin::new_admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::new_admin)
{
    ui->setupUi(this);
}

new_admin::~new_admin()
{
    delete ui;
}

void new_admin::on_pushButton_2_clicked()
{
    hide();
}


void new_admin::on_pushButton_clicked()
{
    if(ui->txt_pass1->text()==ui->txt_pass2->text()){
        database.add_admin(ui->txt_username->text(),ui->txt_pass1->text());
        hide();
    }
    else{
        ui->txt_pass2->setStyleSheet("border: 2px solid red;");
        ui->txt_pass2->clear();
        ui->txt_pass2->setPlaceholderText("Password does not match");
    }
}


void new_admin::on_txt_pass2_textEdited(const QString &arg1)
{
    ui->txt_pass2->setStyleSheet("border: inherit;");
}

