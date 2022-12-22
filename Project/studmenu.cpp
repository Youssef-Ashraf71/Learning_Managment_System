#include "studmenu.h"
#include "ui_studmenu.h"
#include<dashboard.h>
class Dashboard ;

studmenu::studmenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::studmenu)
{
    ui->setupUi(this);
    QTableWidget* table=ui->tablestud;
    table->setWindowTitle("Students");
    table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);



}

studmenu::~studmenu()
{
    delete ui;
}

void studmenu::on_backbtn_clicked()
{
    hide();
Dashboard* crt=new Dashboard();
crt->show();


}


void studmenu::on_addbtn_clicked()
{

}

