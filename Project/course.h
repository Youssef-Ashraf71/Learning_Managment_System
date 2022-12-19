#ifndef COURSE_H
#define COURSE_H

#include <QMainWindow>
#include <QWidget>
#include <QObject>
#include<iostream>
#include<set>
#include"professor.h"
#include"student.h"
using namespace std;
class course
{
    course();

private:
    professor prof;
    set<student>studs;

    professor get_prof()
    {
        return this->prof;
    }

};
#endif // COURSE_H
