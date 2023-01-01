#include "dashboard.h"
#include "ui_dashboard.h"
#include <QFile>
#include <QTextStream>
#include <QVector>
#include <QStringList>
#include <QString>
#include<QDir>
#include"Database.h"

Dashboard::Dashboard(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Dashboard)
{

    ui->setupUi(this);
    this->setWindowTitle("Dashboard");
    QPixmap iconstud(":/media/media/studicon.png");
    QPixmap iconprof(":/media/media/proficon.png");
    QPixmap iconcourse(":/media/media/courseicon.png");
    ui->crslbl->setPixmap(iconcourse); ui->crslbl->setAlignment(Qt::AlignCenter);
    ui->proflbl->setPixmap(iconprof);  ui->proflbl->setAlignment(Qt::AlignCenter);
    ui->studlbl->setPixmap(iconstud);  ui->studlbl->setAlignment(Qt::AlignCenter);
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






void Dashboard::on_btn_newadmin_clicked()
{
    new_admin newadmin;
    newadmin.setModal(true);
    newadmin.exec();
}


void Dashboard::on_btn_export_clicked()
{
    QFile::remove(("../ooo/data/data.csv"));
    QFile file("../ooo/data/data.csv");
    file.open(QIODevice::WriteOnly);
    QApplication::processEvents();
    QTextStream out(&file);
    out << "Courses"<<"\n";
    out << "Course Name,Course ID,Supervisor,Lecture Hall,Day,Time" << "\n";
    for(int i=0;i<database.all_courses.size();i++)
    {
        out<<database.all_courses[i]->get_name()<<"," <<database.all_courses[i]->get_code()<<","<<database.all_courses[i]->get_prof()->get_nname()<<","<<database.all_courses[i]->get_hall()<<","<<database.all_courses[i]->get_day()<<","<<database.all_courses[i]->get_time()<<"\n";
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

