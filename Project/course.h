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
    professor prof;
    vector<student>studs;

public:
    course() {
        std::cout << "testtttt" << std::endl;
    }
    course(professor prof,vector<student>studs){
        this->prof=prof;
        this->studs=studs;
    }
    QString name;


    professor get_prof()
    {
        return this->prof;
    }
    QString x;

};
#endif // COURSE_H
