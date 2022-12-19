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



void Dashboard::on_btn_studd_clicked()
{
    hide();
    studd=new studmenu(this);
    studd->show();
}


void Dashboard::on_btn_courss_clicked()
{
    hide();
    courss=new coursemenu(this);
    courss->show();
}


void Dashboard::on_btn_proff_clicked()
{
    hide();
    proff=new profmenu(this);
    proff->show();
}

