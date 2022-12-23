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


    ui->setupUi(this);
    QPixmap pix(":/media/media/logo.jpeg");
    ui->photo->setPixmap(pix);
    this->setWindowTitle("Log in");
    // intiialize


   // hena han3ml mock data

    course *math=new course();
    database.add_course(math);


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

