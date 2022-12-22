#include "coursemenu.h"
#include "ui_coursemenu.h"
#include"QTableWidget"
#include"Database.h"
#include"dashboard.h"
coursemenu::coursemenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::coursemenu)
{
    ui->setupUi(this);
    this->setWindowTitle("Courses");
    QTableWidget* table=ui->tbl_course;
    table->setWindowTitle("Courses");
    table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    table->setHorizontalHeaderLabels({"Course","Course Code","Professor"});





}

coursemenu::~coursemenu()
{
    delete ui;
}

void coursemenu::on_pushButton_2_clicked()
{

}





void coursemenu::on_backbtncourse_clicked()
{
        hide();
    Dashboard* crt=new Dashboard();
    crt->show();

}

