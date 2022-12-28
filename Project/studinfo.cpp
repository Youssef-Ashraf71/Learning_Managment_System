#include "studinfo.h"
#include "ui_studinfo.h"
#include"Database.h"
studinfo::studinfo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::studinfo)
{
    ui->setupUi(this);
    this->setWindowTitle("Student Info");
    QTableWidget *courses_table=ui->tablecourse;
     courses_table->setHorizontalHeaderLabels({"Course","Grade"});
     courses_table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
     // fill the info of the student
     ui->lbl_grade->setText(database.selected_student->get_grade());
     ui->lbl_name->setText(database.selected_student->get_name());
     ui->lbl_age->setText(QString::number(database.selected_student->get_age()));
     ui->lbl_id->setText(database.selected_student->get_id());
     ui->lbl_mail->setText(database.selected_student->get_email());
     ui->lbl_mob->setText(database.selected_student->get_mobile());

     // create a bool arr with no of courses in database , mark the enrolled ones so u can differentiate bet them and load the combo
     map<QString,bool>visited;
     for(int i=0;i<database.selected_student->courses.size();i++)
     {
          courses_table->insertRow(courses_table->rowCount());
         QTableWidgetItem* cur_course = new QTableWidgetItem(database.selected_student->courses[i]->get_name());
         courses_table->setItem(i,0,cur_course);
         QString course_code=database.selected_student->courses[i]->get_code();
           QTableWidgetItem* cur_grade = new QTableWidgetItem(database.selected_student->grades[course_code]);
            courses_table->setItem(i,1,cur_grade);
            visited[course_code]=1;
     }

    // now load all combo with unenrolled courses
     for(int i=0;i<database.all_courses.size();i++)
     {
         if(!visited[database.all_courses[i]->get_code()]){
         ui->courses_combo->addItem(database.all_courses[i]->get_code());
         }
     }


}

studinfo::~studinfo()
{
    delete ui;
}

void studinfo::on_backbtn_clicked()
{
    hide();
}

void studinfo::reload_combo()
{
      QTableWidget *courses_table=ui->tablecourse;
    map<QString,bool>visited;
    for(int i=0;i<database.selected_student->courses.size();i++)
    {
         courses_table->insertRow(courses_table->rowCount());
        QTableWidgetItem* cur_course = new QTableWidgetItem(database.selected_student->courses[i]->get_name());
        courses_table->setItem(i,0,cur_course);
        QString course_code=database.selected_student->courses[i]->get_code();
          QTableWidgetItem* cur_grade = new QTableWidgetItem(database.selected_student->grades[course_code]);
           courses_table->setItem(i,1,cur_grade);
           visited[course_code]=1;
    }
    for(int i=0;i<database.all_courses.size();i++)
    {
        if(!visited[database.all_courses[i]->get_code()]){
        ui->courses_combo->addItem(database.all_courses[i]->get_code());
        }
    }

}
void studinfo::on_enrollbtn_clicked()
{
    if(ui->courses_combo->currentText()!="")
    {

   ui->tablecourse->clear();
   QTableWidget *courses_table=ui->tablecourse;
    courses_table->setHorizontalHeaderLabels({"Course","Grade"});
    courses_table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);


   QString enrolled_course=ui->courses_combo->currentText();


   for(int i=0;i<database.all_courses.size();i++){
       if(database.all_courses[i]->get_code()==enrolled_course){
           database.selected_course=database.all_courses[i];
       }
   }
   database.selected_course->add_student(database.selected_student);
   database.selected_student->add_course(database.selected_course);
   database.assign_grade(database.selected_student,database.selected_course,"NULL");


   // load table after that once again
   for(int i=0;i<database.selected_student->courses.size();i++)
   {
        ui->tablecourse->insertRow(ui->tablecourse->rowCount());
       QTableWidgetItem* cur_course = new QTableWidgetItem(database.selected_student->courses[i]->get_name());
         ui->tablecourse->setItem(i,0,cur_course);
       QString course_code=database.selected_student->courses[i]->get_code();
         QTableWidgetItem* cur_grade = new QTableWidgetItem(database.selected_student->grades[course_code]);
            ui->tablecourse->setItem(i,1,cur_grade);
   }
   reload_combo();
    }
}

