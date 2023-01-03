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
      vector<course*> courses;
      map<QString,QString> grades;
      ///@brief empty constructor
    student()
    {

    }
    ///@brief function to set the grade of the student in a certain course
    /// @param c  code of the course
    /// @param g  the grade of the student in the course c
    void set_grade(QString c, QString g)
    {
        grades[c]=g; // grade[course_code]=grade;
    }
    ///@brief function to enroll the student in a new course
    ///@param crs   the required course for the student to be enrolled in
    void add_course(course *crs){
        courses.push_back(crs);
    }
    ///@brief function to set the grade of the student (which year)
    /// @param grade     the grade of the student
    void set_grade(QString grade){
        this->grade=grade;
    }
    ///@brief getter of the grade of the student(which year)s
    QString  get_grade(){
        return this->grade;
    }



};

#endif // STUDENT_H
