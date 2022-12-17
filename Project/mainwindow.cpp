#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<bits/stdc++.h>
#include"error.h"
using namespace std;
set<QString>usernames;
set<QString>passwords;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    usernames.insert("osama");
    passwords.insert("123456");
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
    if(usernames.find(user)!=usernames.end() && passwords.find(pass)!=passwords.end())
    {
       hide();
       dash=new Dashboard(this);
       dash->show();

    }
    else
    {
        ui->lbl_password->setText("");
        ui->lbl_username->setText("");
        error er;
        er.setModal(true);
        er.exec();

    }

}

