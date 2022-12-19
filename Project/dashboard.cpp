#include "dashboard.h"
#include "ui_dashboard.h"

Dashboard::Dashboard(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Dashboard)
{
    ui->setupUi(this);
    this->setWindowTitle("Dashboard");
}

Dashboard::~Dashboard()
{
    delete ui;
}

void Dashboard::on_stud_clicked()
{
    // new Student



}


void Dashboard::on_courses_clicked()
{



}


void Dashboard::on_pushButton_3_clicked()
{




}

