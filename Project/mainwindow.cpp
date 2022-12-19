#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<bits/stdc++.h>
#include"error.h"
#include"Database.h"
using namespace std;



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    m["12"]="123";
    ui->setupUi(this);
    QPixmap pix("D:/DOWNLOADS/WhatsApp Image 2022-12-17 at 5.41.07 PM.jpeg");
    ui->photo->setPixmap(pix);
    this->setWindowTitle("Log in");

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_login_clicked()
{
    QString user=ui->lbl_username->text();
    QString pass=ui->lbl_password->text();
    if(m[user]==pass)
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


void MainWindow::on_lbl_password_returnPressed()
{
    ui->btn_login->animateClick();
}

