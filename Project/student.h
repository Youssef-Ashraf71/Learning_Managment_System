#ifndef STUDENT_H
#define STUDENT_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include"member.h"
#include<set>

class course;

class student:public member
{

public:
      QString grade;
      QString id;
      vector<course*> courses;
      map<QString,QString> grades;
    student()
    {
       // courses = std::vector<course*>();
    }

    void set_grade(QString c, QString g)
    {
        grades[c]=g; // grade[course_code]=grade;
    }
    void add_course(course *crs){
        courses.push_back(crs);
    }

    void set_email(QString email){
        this->email=email;
    }
    QString get_email(){
        return this->email;
    }

    void set_grade(QString grade){
        this->grade=grade;
    }
    QString  get_grade(){
        return this->grade;
    }
    void set_id(QString id){
        this->id=id;
    }
    QString  get_id(){
        return this->id;
    }


};

#endif // STUDENT_H
