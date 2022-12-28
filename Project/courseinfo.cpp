#include "courseinfo.h"
#include "ui_courseinfo.h"
#include"Database.h"

bool first_edit=true;
Courseinfo::Courseinfo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Courseinfo)
{

    ui->setupUi(this);
    this->setWindowTitle("Course Info");
    ui->lbl_title->setText(database.selected_course->get_name());
    ui->lbl_ID->setText(database.selected_course->get_code());
    ui->lbl_hall->setText(database.selected_course->get_hall());
    ui->lbl_time->setText(database.selected_course->get_time());
    QTableWidget* table=ui->tbl_stud;

    table->setWindowTitle("Students");
    table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    table->setHorizontalHeaderLabels({"Student Name","Student ID","Grade"});
    int i=-1;
    for(auto itr =database.selected_course->all_grades.begin();itr!=database.selected_course->all_grades.end();itr++)
    {
        if(table->rowCount()<database.selected_course->all_grades.size()){
            i++;
            table->insertRow(table->rowCount());
        }
        for(int z=0;z<database.all_students.size();z++)
        {
            if(itr->first==database.all_students[z]->get_id()){
                database.selected_student=database.all_students[z];
                break;
            }
        }
        QTableWidgetItem* student_id= new QTableWidgetItem(itr->first);
        student_id->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled );
        table->setItem(i,1,student_id);
        student_id->setToolTip(
                                 "<li>Name: <li>"+ database.selected_student->get_name()+
                                 "<li>ID :<li>"+database.selected_student->get_id()+
                                 "<li>Grade :<li>"+database.selected_student->get_grade()+
                                 "<li>Email :<li>"+database.selected_student->get_email()
                                 );
        QTableWidgetItem* student_name= new QTableWidgetItem(database.selected_student->get_name());
        student_name->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled );
        table->setItem(i,0,student_name);
        student_name->setToolTip(
                                 "<li>Name: <li>"+ database.selected_student->get_name()+
                                 "<li>ID :<li>"+database.selected_student->get_id()+
                                 "<li>Grade :<li>"+database.selected_student->get_grade()+
                                 "<li>Email :<li>"+database.selected_student->get_email()
                                 );
        QTableWidgetItem* student_grade= new QTableWidgetItem(itr->second);
        table->setItem(i,2,student_grade);

    }
    QTableWidget* table2=ui->tbl_prof;

    table2->setWindowTitle("Professors");
    table2->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    table2->setHorizontalHeaderLabels({"professor"});
    for(int j=0;j<database.selected_course->profs.size();j++)
    {
        if(table2->rowCount()<database.selected_course->all_grades.size()){
            table2->insertRow(table2->rowCount());
        }
        QTableWidgetItem* prof_name= new QTableWidgetItem(database.selected_course->profs[j]->get_nname());
        table2->setItem(j,0,prof_name);


    }
    first_edit=false;
}
Courseinfo::~Courseinfo()
{
    delete ui;
}



void Courseinfo::on_pushButton_clicked()
{
    hide();
}


void Courseinfo::on_tbl_stud_cellChanged(int row, int column)
{
    if(!first_edit){
    QTableWidget* table=ui->tbl_stud;
    if(column != 2)
    {


    }

    else
    {
        QString new_grade=table->item(row,column)->text();
        QString target = ui->tbl_stud->item(row,1)->text();
        for(int i=0;i<database.all_students.size();i++)
        {

            if(target==database.all_students[i]->get_id())
            {
                database.selected_student=database.all_students[i];
                break;
            }
        }
        database.assign_grade(database.selected_student,database.selected_course,new_grade);
    }

    }
}

