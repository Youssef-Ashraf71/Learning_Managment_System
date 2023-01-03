#include "dashboard.h"
#include "qapplication.h"
#include "./ui_dashboard.h"
#include <QFile>
#include <QTextStream>
#include <QVector>
#include <QStringList>
#include <QString>
#include<QDir>
#include"Database.h"
/// @brief instructor to set the dashboard up showing the ui appearing and displays the title as "dashboard" and displays the images above each label
/// @param parent
Dashboard::Dashboard(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Dashboard)
{

    ui->setupUi(this);
        setWindowIcon(QIcon(":/media/media/logo.png"));
    this->setWindowTitle("Dashboard");
    QPixmap iconstud(":/media/media/studicon.png");
    QPixmap iconprof(":/media/media/proficon.png");
    QPixmap iconcourse(":/media/media/courseicon.png");
    ui->crslbl->setPixmap(iconcourse); ui->crslbl->setAlignment(Qt::AlignCenter);
    ui->proflbl->setPixmap(iconprof);  ui->proflbl->setAlignment(Qt::AlignCenter);
    ui->studlbl->setPixmap(iconstud);  ui->studlbl->setAlignment(Qt::AlignCenter);
}
/// @brief destructor to delete the ui after finishing executing
Dashboard::~Dashboard()
{
    delete ui;
}


/// @brief function to hide the current window set a variable named studd value to studentmenu and show this variable when button student is clicked
void Dashboard::on_btn_studd_clicked()
{
    hide();
    studd=new studmenu(this);
    studd->show();
}


/// @brief function to hide the current window set a variable named courss value to coursemenu and show this variable when button course is clicked
void Dashboard::on_btn_courss_clicked()
{
    hide();
    courss=new coursemenu(this);
    courss->show();
}

/// @brief function to hide the current window set a variable named proff value to profmenu and show this variable when button professor is clicked
void Dashboard::on_btn_proff_clicked()
{
    hide();
    proff=new profmenu(this);
    proff->show();
}





///@brief function to set a variable named newadmin value to new_admin and show this variable
void Dashboard::on_btn_newadmin_clicked()
{
    new_admin newadmin;
    newadmin.setModal(true);
    newadmin.exec();
}
///@brief function to export student/course/professor to the csv file
void Dashboard::on_btn_export_clicked()
{
    QFile::remove(("../ExportedData/data.csv"));
    QFile file("../ExportedData/data.csv");
    file.open(QIODevice::WriteOnly);
    QApplication::processEvents();
    QTextStream out(&file);
    out << "Courses"<<"\n";
    out << "Course Name,Course ID,Supervisor,Lecture Hall,Day,Time" << "\n";
    for(int i=0;i<database.all_courses.size();i++)
    {
        out<<database.all_courses[i]->get_name()<<"," <<database.all_courses[i]->get_code()<<","<<database.all_courses[i]->get_prof()->get_name()<<","<<database.all_courses[i]->get_hall()<<","<<database.all_courses[i]->get_day()<<","<<database.all_courses[i]->get_time()<<"\n";
    }

    out <<"\n"<<"Professors"<<"\n";
    out<<"Professor Name,Title,ID,Email,Mobile"<<"\n";
    for(int i=0;i<database.all_proffessors.size();i++)
    {
        out<<database.all_proffessors[i]->get_name()<<"," <<database.all_proffessors[i]->get_title()<<","<<database.all_proffessors[i]->get_id()<<","<<database.all_proffessors[i]->get_email()<<","<<database.all_proffessors[i]->get_mobile()<<"\n";
    }

    out << "\n"<<"Students\n";
    out<<"Student Name,Grade,ID,Email,Mobile"<<"\n";
    for(int i=0;i<database.all_students.size();i++)
    {
        out<<database.all_students[i]->get_name()<<","<<database.all_students[i]->get_grade()<<","<<database.all_students[i]->get_id()<<","<<database.all_students[i]->get_email()<<","<<database.all_students[i]->get_mobile()<<"\n";
    }

   out << "\n";


    file.close();

}

