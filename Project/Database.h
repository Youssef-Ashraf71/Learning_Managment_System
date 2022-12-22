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
    QString test="teeest";

};


QT_BEGIN_NAMESPACE
class Database;
QT_END_NAMESPACE

#define MAGIC_NUM 42

extern Database database;


#endif // DATABASE_H
