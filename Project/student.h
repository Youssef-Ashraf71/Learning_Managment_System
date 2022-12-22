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
    student();
    vector<course*> courses;
    void add_course(course* crs);




};

#endif // STUDENT_H
