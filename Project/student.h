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
    set<course>* courses;
};

#endif // STUDENT_H
