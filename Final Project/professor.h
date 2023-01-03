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
    QString title;
    ///@brief Empty constructor of class professor
    professor(){

    }
    ///@brief Parametrized constructor of class professor to set Name,Title,ID,E-mail,mobile and Age
    ///@param  first_name
    ///@param  last_name
    ///@param  title   title of the professor
    ///@param  id        id of the professor
    ///@param  email
    ///@param  mobile
    ///@param  age
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
    ///@brief Function to add a new course to the professor courses
    ///@param c        the course to be added
    void assign_course(course*c)
    {
        courses.push_back(c);
    }
    ///@brief Function to set the title of the professor
    ///@param title
    void set_title(QString title){
        this->title=title;
    }
    ///@brief Function to return the title of the professor
    QString get_title(){
        return this->title;
    }

};

#endif // PROFESSOR_H
