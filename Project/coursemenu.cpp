#include "coursemenu.h"
#include "ui_coursemenu.h"
#include"QTableWidget"
#include"Database.h"
#include"dashboard.h"
#include<QWidgetItem>
#include"add_course_menu.h"
coursemenu::coursemenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::coursemenu)
{
    ui->setupUi(this);
    this->setWindowTitle("Courses");
    QTableWidget* table=ui->tbl_course;
    table->setWindowTitle("Courses");
    table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    table->setHorizontalHeaderLabels({"Course","Course Code","Supervisor"});
    coursemenu::load_table();




}

coursemenu::~coursemenu()
{
    delete ui;
}

void coursemenu::load_table()
{
    QTableWidget* table=ui->tbl_course;
    for(int i=0;i<database.all_courses.size();i++)
    {
        if(table->rowCount()<database.all_courses.size())
            table->insertRow(table->rowCount());
        QTableWidgetItem* course_name= new QTableWidgetItem(database.all_courses[i]->get_name());
        table->setItem(i,0,course_name);
        QTableWidgetItem* course_code= new QTableWidgetItem(database.all_courses[i]->get_code());
        table->setItem(i,1,course_code);
        QTableWidgetItem* course_prof= new QTableWidgetItem(database.all_courses[i]->get_prof()->get_nname());
        table->setItem(i,2,course_prof);
    }
}





void coursemenu::on_backbtncourse_clicked()
{
        hide();
    Dashboard* crt=new Dashboard();
    crt->show();

}





void coursemenu::on_btn_add_clicked()
{
    Add_course_menu addd;
    addd.setModal(true);
    addd.exec();
    coursemenu::load_table();
}


void coursemenu::on_tbl_course_cellDoubleClicked(int row, int column)
{
    if(!coursemenu::filter)
    {
        database.selected_course=database.all_courses[row];
    }
    else
    {
        QString target = ui->tbl_course->item(row,1)->text();
        for(int i=0;i<database.all_courses.size();i++)

            if(database.all_courses[i]->get_code()==target){
                database.selected_course=database.all_courses[i];
                break;
            }


    }
    Courseinfo *c_info=new Courseinfo(this);
    c_info->show();
}


void coursemenu::on_btn_filter_clicked()
{
    coursemenu::filter=true;
    QTableWidget* table=ui->tbl_course;
    table->clear();
    table->setRowCount(0);
    table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    table->setHorizontalHeaderLabels({"Course","Course Code","Supervisor"});
    QString target = ui->lbl_filter->text();
    int cnt=-1;
    for(int i=0;i<database.all_courses.size();i++)
    {
        if(database.all_courses[i]->get_prof()->get_nname()==target)
        {
            cnt++;
            table->insertRow(table->rowCount());
            QTableWidgetItem* course_name= new QTableWidgetItem(database.all_courses[i]->get_name());
            table->setItem(cnt,0,course_name);
            QTableWidgetItem* course_code= new QTableWidgetItem(database.all_courses[i]->get_code());
            table->setItem(cnt,1,course_code);
            QTableWidgetItem* course_prof= new QTableWidgetItem(database.all_courses[i]->get_prof()->get_nname());
            table->setItem(cnt,2,course_prof);
        }
    }

}


void coursemenu::on_pushButton_clicked()
{
    ui->tbl_course->clear();
    ui->lbl_filter->clear();  ui->lbl_search->clear();
    ui->tbl_course->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tbl_course->setHorizontalHeaderLabels({"Course","Course Code","Supervisor"});
    coursemenu::load_table();
}


void coursemenu::on_btn_search_clicked()
{
    coursemenu::filter=true;
    QTableWidget* table=ui->tbl_course;
    table->clear();
    table->setRowCount(0);
    table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    table->setHorizontalHeaderLabels({"Course","Course Code","Supervisor"});
    QString target = ui->lbl_search->text();
    int cnt=-1;
    for(int i=0;i<database.all_courses.size();i++)
    {
        if(database.all_courses[i]->get_code()==target)
        {
            cnt++;
            table->insertRow(table->rowCount());
            QTableWidgetItem* course_name= new QTableWidgetItem(database.all_courses[i]->get_name());
            table->setItem(cnt,0,course_name);
            QTableWidgetItem* course_code= new QTableWidgetItem(database.all_courses[i]->get_code());
            table->setItem(cnt,1,course_code);
            QTableWidgetItem* course_prof= new QTableWidgetItem(database.all_courses[i]->get_prof()->get_nname());
            table->setItem(cnt,2,course_prof);
            break;
        }
    }

}



void coursemenu::on_lbl_search_returnPressed()
{
    ui->btn_search->animateClick();
}


void coursemenu::on_lbl_filter_returnPressed()
{
    ui->btn_filter->animateClick();
}

