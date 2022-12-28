#ifndef DATABASE_H
#define DATABASE_H
#include <QtGlobal>
#include<map>
#include <QMainWindow>
#include<vector>
#include"course.h"
using namespace std;
struct Database
{
public:
    course* selected_course;
    student* selected_student;
    map<QString,QString>Admin;
    void add_admin(QString username,QString pass)
    {
        Admin[username]=pass;
    }
    vector<course *> all_courses;
    void add_course(course *c)
    {
        all_courses.push_back(c);
    }

    vector<student * >all_students;
    void add_student(student *s){
        all_students.push_back(s);
    }
    vector<professor*> all_proffessors;
    void add_professor(professor* p)
    {
        all_proffessors.push_back(p);
    }

    void assign_grade(student *s , course *c,QString g)
    {
        s->set_grade(c->get_code(),g);
        c->set_grade(s,g);
    }


};


QT_BEGIN_NAMESPACE
class Database;
QT_END_NAMESPACE

#define MAGIC_NUM 42

extern Database database;


#endif // DATABASE_H
