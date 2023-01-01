#ifndef DATABASE_H
#define DATABASE_H
#include <QtGlobal>
#include<map>
#include <QMainWindow>
#include<vector>
#include"course.h"
#include <QCryptographicHash>
using namespace std;
struct Database
{
public:
    course* selected_course;
    student* selected_student;
    professor* selected_professor;
    map<QString,QByteArray>Admin;
    bool time_available[5][5][5] ={
        {{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1}},
        {{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1}},
        {{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1}},
        {{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1}},
        {{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1}}
                                  };

    int index_available(QString t)
    {
        if(t=="08:30 - 10:00")
            return 0;
        else
            if(t=="10:15 - 11:45")
            return 1;
        else
                if(t=="12:15 - 01:45")
            return 2;
        else
                    if(t=="02:00 - 03:30")
            return 3;
        else
            return 4;

    }
    student* get_student(QString id)
    {
        for(int i=0;i<all_students.size();i++)
            if(all_students[i]->get_id()==id)
                return all_students[i];
        return nullptr;
    }
    professor* get_prof(QString id)
    {
        for(int i=0;i<all_proffessors.size();i++)
            if(all_proffessors[i]->get_id()==id)
                return all_proffessors[i];
        return nullptr;
    }

    QByteArray hashPassword(const QString& password)
    {
      // Convert the password to a byte array
      QByteArray data = password.toUtf8();

      // Generate the hash value using the SHA-256 algorithm
      QByteArray hash = QCryptographicHash::hash(data, QCryptographicHash::Sha256);

      return hash;
    }

    void add_admin(QString username,QString pass)
    {
        QByteArray hash = hashPassword(pass);
        Admin[username]=hash;
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
    void assign_prof(professor* p, course* c)
    {
        c->profs.push_back(p);
        p->assign_course(c);
    }
    void set_course(professor* p, course* c){
        p->assign_course(c);
    }

};


QT_BEGIN_NAMESPACE
class Database;
QT_END_NAMESPACE

#define MAGIC_NUM 42

extern Database database;


#endif // DATABASE_H
