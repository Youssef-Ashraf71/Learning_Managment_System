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
    QString Time;
    professor* prof;
    vector<student*>studs;



public:
    course() {

    }
    vector<professor*>profs;
    course(professor* prof,vector<student*>studs,QString name,QString code,QString Lecture_hall,QString Time){
        this->prof=prof;
        this->studs=studs;
        this->name=name;
        this->Lecture_hall=Lecture_hall;
        this->Time=Time;
        this->code=code;
        this->profs.push_back(prof);
    }


    map<QString,QString> all_grades;

    void set_grade(student *s,QString g)
    {
        all_grades[s->get_id()]=g;
    }

    void add_student(student * s){
        studs.push_back(s);
    }
    professor* get_prof()
    {
        return this->prof;
    }
    QString get_name()
    {
        return this->name;
    }
    QString get_code()
    {
        return this->code;
    }
    QString get_hall()
    {
        return this->Lecture_hall;
    }
    QString get_time()
    {
        return this->Time;
    }

};
#endif // COURSE_H
