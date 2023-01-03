#ifndef COURSE_H
#define COURSE_H

#include <QMainWindow>
#include <QWidget>
#include <QObject>
#include<bits/stdc++.h>
#include<vector>
#include"student.h"
#include "professor.h"
#include <iostream>


using namespace std;

class student;

class course
{
    QString name;
    QString code;
    QString Lecture_hall;
    QString day;
    QString Time;
    professor* prof;
    vector<student*>studs;



public:
    ///@brief constructor intialize the course without any parameters
    course() {

    }
    vector<professor*>profs;
    ///@brief constructor intialize values to it's parameters
    /// @param prof professor of the course
    /// @param studs students enrolled in course
    /// @param name name of the course
    /// @param code code of the course
    /// @param lecture_hall the hall used
    /// @param day the day course taken
    /// @param time interval of time in day at which course is taken
    course(professor* prof,vector<student*>studs,QString name,QString code,QString Lecture_hall,QString day,QString Time){
        this->prof=prof;
        this->studs=studs;
        this->name=name;
        this->Lecture_hall=Lecture_hall;
        this->Time=Time;
        this->code=code;
        this->profs.push_back(prof);
        this->day=day;
    }
     ///@brief function to return day of the course
    QString get_day()
    {
        return this->day;
    }
    map<QString,QString> all_grades;
    ///@brief function that sets a grade to certain student by using his id
    /// @param s student you want to set grade to
    /// @param g grade you want to set
    void set_grade(student *s,QString g)
    {
        all_grades[s->get_id()]=g;
    }
    ///@brief function that add a new student to studs vector
    /// @param s student you want to add to the course
    void add_student(student * s){
        studs.push_back(s);
    }
    ///@brief function to return the proff of this course
    professor* get_prof()
    {
        return this->prof;
    }
    ///@brief function to return name of the course
    QString get_name()
    {
        return this->name;
    }
    ///@brief function to return course code
    QString get_code()
    {
        return this->code;
    }
     ///@brief function to return course hall
    QString get_hall()
    {
        return this->Lecture_hall;
    }
    ///@brief function to return course time
    QString get_time()
    {
        return this->Time;
    }

};
#endif // COURSE_H
