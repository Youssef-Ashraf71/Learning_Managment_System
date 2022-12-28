#include "studmenu.h"
#include "ui_studmenu.h"
#include<dashboard.h>
#include<student.h>
#include<Database.h>
#include"add_stud_menu.h"
#include"studinfo.h"
class Dashboard ;


studmenu::studmenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::studmenu)
{
    ui->setupUi(this);
   QTableWidget *student_table=ui->tablestud;
    this->setWindowTitle("Students");
    student_table->setHorizontalHeaderLabels({"Student Name","ID","Grade"});
    student_table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    // load our table
          studmenu::load_table();







}

studmenu::~studmenu()
{
    delete ui;
}

void studmenu::load_table()
{
        QTableWidget* table=ui->tablestud;
        for(int i=0;i<database.all_students.size();i++)
        {
              if(table->rowCount()<database.all_students.size())
                table->insertRow(table->rowCount());
            QTableWidgetItem* student_name= new QTableWidgetItem(database.all_students[i]->get_name());
            table->setItem(i,0,student_name); student_name->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled );
            QTableWidgetItem* student_id= new QTableWidgetItem(database.all_students[i]->get_id());
            table->setItem(i,1,student_id);    student_id->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled );
            QTableWidgetItem* student_grade= new QTableWidgetItem(database.all_students[i]->get_grade());
            table->setItem(i,2,student_grade);   student_grade->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled );
        }

}


/*
void studmenu::clearall()
{

    ui->firnameline->setText(""); ui->lstnameline->setText("");
    ui->mobline->setText("");  ui->mailline->setText("");
    ui->ageline->setText(""); ui->gradeline->setText("");
}
*/







void studmenu::on_addbtn_clicked()
{
    // create a new add instance
     add_stud_menu new_student;
      new_student.setModal(true);
      new_student.exec();
    // here load table once again
       studmenu::load_table();
}


void studmenu::on_backbtn_clicked()
{
    hide();
    Dashboard* crt=new Dashboard();
    crt->show();


}





void studmenu::on_applyfltr_clicked()
{
    QTableWidget* table=ui->tablestud;
    table->clear();
    table->setRowCount(0);
    table->setHorizontalHeaderLabels({"Student Name","ID","Grade"});
    table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    QString target = ui->fltrbar->text();
    int cnt=-1;
    for(int i=0;i<database.all_students.size();i++)
    {
        if(database.all_students[i]->get_grade()==target)
        {
             cnt++;
            if(table->rowCount()<database.all_students.size())
                table->insertRow(table->rowCount());
            QString now=database.all_students[i]->get_grade();
            QTableWidgetItem* student_name= new QTableWidgetItem(database.all_students[i]->get_name());
            table->setItem(cnt,0,student_name);  student_name->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled );
            QTableWidgetItem* student_id= new QTableWidgetItem(database.all_students[i]->get_id());
            table->setItem(cnt,1,student_id);    student_id->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled );
            QTableWidgetItem* student_grade= new QTableWidgetItem(database.all_students[i]->get_grade());
            table->setItem(cnt,2,student_grade);   student_grade->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled );
        }
    }







}

void studmenu::on_srchbtn_clicked()
{
    QTableWidget* table=ui->tablestud;
    table->clear();
    table->setRowCount(0);
    table->setHorizontalHeaderLabels({"Student Name","ID","Grade"});
    table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    QString target = ui->srchbar->text();
    int cnt=-1;
    for(int i=0;i<database.all_students.size();i++)
    {
        if(database.all_students[i]->get_name()==target)
        {
            cnt++;
            if(table->rowCount()<database.all_students.size())
                table->insertRow(table->rowCount());
            QTableWidgetItem* student_name= new QTableWidgetItem(database.all_students[i]->get_name());
            table->setItem(cnt,0,student_name);  student_name->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled );
            QTableWidgetItem* student_id= new QTableWidgetItem(database.all_students[i]->get_id());
            table->setItem(cnt,1,student_id);    student_id->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled );
            QTableWidgetItem* student_grade= new QTableWidgetItem(database.all_students[i]->get_grade());
            table->setItem(cnt,2,student_grade);   student_grade->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled );
        }
    }





}

void studmenu::on_srchbar_returnPressed()
{
        ui->srchbtn->animateClick();
}


void studmenu::on_fltrbar_returnPressed()
{
      ui->applyfltr->animateClick();
}





void studmenu::on_clearbrn_clicked()
{
    ui->tablestud->clear();
    ui->fltrbar->clear();
    ui->srchbar->clear();
    ui->tablestud->clear();
    ui->tablestud->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tablestud->setHorizontalHeaderLabels({"Student Name","ID","Grade"});
    studmenu::load_table();
}


void studmenu::on_tablestud_cellDoubleClicked(int row, int column)
{
    QString target = ui->tablestud->item(row,1)->text();
    for(int i=0;i<database.all_students.size();i++)

        if(database.all_students[i]->get_id()==target){
            database.selected_student=database.all_students[i];
            break;
        }
    studinfo *stud_info=new studinfo(this);
    stud_info->show();

}

