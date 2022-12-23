#ifndef STUDENT_H
#define STUDENT_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include"member.h"

#include<set>

class course;

class student:member
{

public:
      vector<course*> courses;
    student()
    {
        courses = std::vector<course*>();
    }

    void add_course(course *crs){
        courses.push_back(crs);
    }

    void set_email(string email){
        this->email=email;
    }
    string get_email(){
        return this->email;
    }



};

#endif // STUDENT_H
