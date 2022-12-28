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
   professor(QString first_name,QString last_name)
   {
    this->first_name=first_name;
       this->last_name=last_name;
   }
    course* c;
    QString get_nname()
    {
       return this->get_name();
    }
};

#endif // PROFESSOR_H
