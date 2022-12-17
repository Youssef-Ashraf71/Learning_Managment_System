#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<bits/stdc++.h>
using namespace std;
set<string>usernames;
set<string>passwords;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    usernames.insert("osama");
    passwords.insert("123456");
    ui->setupUi(this);
    QPixmap pix("D:/DOWNLOADS/WhatsApp Image 2022-12-17 at 5.41.07 PM.jpeg");
    ui->photo->setPixmap(pix);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{

}

