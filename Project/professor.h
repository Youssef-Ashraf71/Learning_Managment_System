#ifndef PROFESSOR_H
#define PROFESSOR_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include"member.h"
class course;
using namespace std;
class professor:member
{
public:
    string title;
    course* c;
};

#endif // PROFESSOR_H
