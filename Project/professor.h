#ifndef PROFESSOR_H
#define PROFESSOR_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include"member.h"
class course;
using namespace std;
class professor:public member
{
public:
    QString title,id;

    professor(){

    }
   professor(QString first_name,QString last_name,QString title,QString id, QString email, QString mobile , int age)
    {
       this->first_name=first_name;
       this->last_name=last_name;
       this->id=id;
       this->email=email;
       this->age=age;
       this->mobile=mobile;
       this->title=title;
    }
    course* c;
    vector<course*>courses;
    void assign_course(course*c)
    {
        courses.push_back(c);
    }
    QString get_nname()
    {
       return this->get_name();
    }
    void set_title(QString title){
        this->title=title;
    }
    QString get_title(){
        return this->title;
    }
    void set_email(QString email){
        this->email=email;
    }
    QString get_email(){
        return this->email;
    }
    void set_id(QString id){
        this->id=id;
    }
    QString get_id()
    {
        return this->id;
    }
};

#endif // PROFESSOR_H
