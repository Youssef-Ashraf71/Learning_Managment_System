#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<bits/stdc++.h>
#include "Database.h"
#include"error.h"

using namespace std;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    QGuiApplication::setQuitOnLastWindowClosed(false);
    ui->setupUi(this);
    QPixmap pix(":/media/media/logo.jpeg");
    ui->photo->setPixmap(pix);
    this->setWindowTitle("Log in");
    // intiialize


    // hena han3ml mock data

    student *moe=new student();
       moe->set_name("Youssef","Ashraf");
       moe->set_mobile("01007424945"); moe->set_email("yoyobunt@proton.me");
       moe->set_age(20);
       moe->set_grade("2");
       moe->set_id("1");


     professor *Samah=new professor("Samah","El-tantawy");
     vector<student*> c;
     c.push_back(moe);
     course *math=new course(Samah,c,"Math","MTH2245","3201","8:30");
     moe->add_course(math);
     database.add_student(moe);
     database.add_course(math);
     database.add_professor(Samah);
     database.assign_grade(moe,math,"20");






}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_login_clicked()
{
    QString user=ui->lbl_username->text();
    QString pass=ui->lbl_password->text();
    if(database.Admin[user]==pass && user!="" && pass!="")
    {
       hide();
       dash=new Dashboard(this);
       dash->show();
    }
    else
    {
        ui->lbl_password->setText("");
        error er;
        er.setModal(true);
        er.exec();

    }

}
void MainWindow::Go_Back(){
    hide();
    dash->show();
}


void MainWindow::on_lbl_password_returnPressed()
{
    ui->btn_login->animateClick();
}

