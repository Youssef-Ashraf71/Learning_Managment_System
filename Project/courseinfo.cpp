#include "courseinfo.h"
#include "ui_courseinfo.h"
#include"Database.h"
#include <QVersionNumber>
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
    ui->lbl_time->setText(database.selected_course->get_day());
    ui->lbl_T->setText(database.selected_course->get_time());
    Courseinfo::reload_table();
    ui->combo_filter->addItem("Equal To");
    ui->combo_filter->addItem("More Than");
    ui->combo_filter->addItem("Less Than");
    reload_combo1();
    reload_combo2();
    first_edit=false;

}
void Courseinfo::reload_table()
{
    QTableWidget* table=ui->tbl_stud;
    table->clear();
    table->setRowCount(0);
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
        visited[database.selected_student->get_id()]=1;
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
        visited[database.selected_course->profs[j]->get_id()]=1;
        if(table2->rowCount()<database.selected_course->profs.size()){
            table2->insertRow(table2->rowCount());
        }
        QTableWidgetItem* prof_name= new QTableWidgetItem(database.selected_course->profs[j]->get_nname());
        table2->setItem(j,0,prof_name);
    }
}
void Courseinfo::reload_combo1()
{
    ui->combo_newprof->clear();
    for(int i=0;i<database.all_proffessors.size();i++)
    {
        if(!visited[database.all_proffessors[i]->get_id()]){
             ui->combo_newprof->addItem(database.all_proffessors[i]->get_id());
        }
    }

}
void Courseinfo::reload_combo2()
{
    ui->combo_newstud->clear();
     for(int i=0;i<database.all_students.size();i++)
    {
        if(!visited[database.all_students[i]->get_id()]){
            ui->combo_newstud->addItem(database.all_students[i]->get_id());
        }
    }

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


void Courseinfo::on_btn_filter_clicked()
{
    QTableWidget* table=ui->tbl_stud;
    table->clear();
    table->setRowCount(0);
    table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    table->setHorizontalHeaderLabels({"Student Name","Student ID","Grade"});
    int i=-1;
    for(auto itr =database.selected_course->all_grades.begin();itr!=database.selected_course->all_grades.end();itr++)
    {
        if(ui->combo_filter->currentIndex()==0)
        {
            if(itr->second==ui->txt_filter->text())
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
            continue;
        }
        if(ui->combo_filter->currentIndex()==1)
        {
            QVersionNumber version1 = QVersionNumber::fromString(itr->second);
            QVersionNumber version2 = QVersionNumber::fromString(ui->txt_filter->text());

            if(version1>version2)
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
            continue;
        }

        if(ui->combo_filter->currentIndex()==2)
        {   QVersionNumber version1 = QVersionNumber::fromString(itr->second);
            QVersionNumber version2 = QVersionNumber::fromString(ui->txt_filter->text());

            if(version1<version2)
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
            continue;
        }
    }



}


void Courseinfo::on_btn_clear_filter_clicked()
{

    Courseinfo::reload_table();
}


void Courseinfo::on_btn_enroll_clicked()
{
    if(ui->combo_newstud->currentText()!="")
    {
        QString id=ui->combo_newstud->currentText();
        student * req_student=database.get_student(id);
        req_student->add_course(database.selected_course);
        database.selected_course->add_student(req_student);
        database.assign_grade(req_student,database.selected_course,"NULL");
        Courseinfo::reload_table();
        visited[id]=1;
        Courseinfo::reload_combo2();

    }
}


void Courseinfo::on_btn_assign_clicked()
{
    if(ui->combo_newprof->currentText()!="")
    {
        QString id=ui->combo_newprof->currentText();
        database.assign_prof(database.get_prof(id),database.selected_course);
        Courseinfo::reload_table();
        visited[id]=1;
        Courseinfo::reload_combo1();
    }
}

