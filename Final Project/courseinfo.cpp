#include "courseinfo.h"
#include "ui_courseinfo.h"
#include"Database.h"
#include <QVersionNumber>
bool first_edit=true;
///@brief constructor to set the ui of the courseinfo window up with it's title "Course Info" and to display it's components(ie:the table)
Courseinfo::Courseinfo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Courseinfo)
{

    ui->setupUi(this);
        setWindowIcon(QIcon(":/media/media/logo.png"));
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
    ui->combo_filter->setStyleSheet("QComboBox { combobox-popup: 0; color: white; padding: 0px 0px 0px 0px; }");
    first_edit=false;

}
///@brief function to reload the two tables with their contents to add to it if something was modified (ie adding a new professor to the course) and set the table titles
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
                                 "<li>Grade :<li>"+database.selected_student->get_grade()+
                                 "<li>Age :<li>"+QString::number(database.selected_student->get_age())+
                                 "<li>Email :<li>"+database.selected_student->get_email()+
                                 "<li>Mobile :<li>"+database.selected_student->get_mobile()
                                 );
        QTableWidgetItem* student_name= new QTableWidgetItem(database.selected_student->get_name());
        student_name->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled );
        table->setItem(i,0,student_name);
        student_name->setToolTip(                                 
                                 "<li>ID :<li>"+database.selected_student->get_id()+
                                 "<li>Grade :<li>"+database.selected_student->get_grade()+
                                 "<li>Age :<li>"+QString::number(database.selected_student->get_age())+
                                 "<li>Email :<li>"+database.selected_student->get_email()+
                                 "<li>Mobile :<li>"+database.selected_student->get_mobile()
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
        QTableWidgetItem* prof_name= new QTableWidgetItem(database.selected_course->profs[j]->get_name());
        table2->setItem(j,0,prof_name);
        prof_name->setToolTip(
                    "<li>ID :<li>"+database.selected_course->profs[j]->get_id()+
                    "<li>Title :<li>" +database.selected_course->profs[j]->get_title()+
                    "<li>Age : <li>" +QString::number(database.selected_course->profs[j]->get_age())+
                    "<li>Email :<li>" +database.selected_course->profs[j]->get_email()+
                    "<li>Mobile :<li>" +database.selected_course->profs[j]->get_mobile()

    );
    }
}
///@brief function that reload the combo label of the professors in case a professor was added for example
void Courseinfo::reload_combo1()
{
    ui->combo_newprof->clear();
    ui->combo_newprof->setStyleSheet("QComboBox { combobox-popup: 0; color: white; padding: 0px 0px 0px 0px; }");
    for(int i=0;i<database.all_proffessors.size();i++)
    {
        if(!visited[database.all_proffessors[i]->get_id()]){
             ui->combo_newprof->addItem(database.all_proffessors[i]->get_id());
        }
    }

}
///@brief function that reload the combo label of the students in case a new student was added for example
void Courseinfo::reload_combo2()
{
    ui->combo_newstud->clear();
    ui->combo_newstud->setStyleSheet("QComboBox { combobox-popup: 0; color: white; padding: 0px 0px 0px 0px; }");
     for(int i=0;i<database.all_students.size();i++)
    {
        if(!visited[database.all_students[i]->get_id()]){
            ui->combo_newstud->addItem(database.all_students[i]->get_id());
        }
    }

}
///@brief destructor to delete the current ui when finishing the executing
Courseinfo::~Courseinfo()
{
    delete ui;
}


///@brief function that close the course info window the push button is clicked
void Courseinfo::on_pushButton_clicked()
{
    hide();
}

///@brief function to assign a new grade to the selected student in table of this course
/// @param row the row in the table
/// @param column the column of the table
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

///@brief Slot to load the table of students according to the filter type whether it is a <,> or = sign to a certain grade when filter button is clicked
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

///@brief function that reload the table, clear the text in filter label and clear the combo label and reload it
void Courseinfo::on_btn_clear_filter_clicked()
{

    Courseinfo::reload_table();
    ui->txt_filter->clear();
    ui->combo_filter->clear();
    ui->combo_filter->addItem("Equal To");
    ui->combo_filter->addItem("More Than");
    ui->combo_filter->addItem("Less Than");
    ui->combo_filter->setStyleSheet("QComboBox { combobox-popup: 0; color: white; padding: 0px 0px 0px 0px; }");

}

///@brief function that add a new student to the course if exists and not already enrolled and reload the combo label and the table of students
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
        ui->combo_newstud->clear();
        Courseinfo::reload_combo2();

    }
}

///@brief function that assign a new professor to the course if exists and reload the combo label and the table of professors
void Courseinfo::on_btn_assign_clicked()
{
    if(ui->combo_newprof->currentText()!="")
    {
        QString id=ui->combo_newprof->currentText();
        database.assign_prof(database.get_prof(id),database.selected_course);
        Courseinfo::reload_table();
        visited[id]=1;
        ui->combo_newprof->clear();
        Courseinfo::reload_combo1();
    }
}

///@brief function that animate a click if filter label was pressed
void Courseinfo::on_txt_filter_returnPressed()
{
    ui->btn_filter->animateClick();
}

