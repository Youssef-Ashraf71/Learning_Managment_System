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
    ///@brief Function to return the index of time slot chosen
    ///@param t     the time the admin chose for a certain course
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
    ///@brief Function to return the Student pointer to object(student) after searching with a certain id
    ///@param id       the id of a certain student
    student* get_student(QString id)
    {
        for(int i=0;i<all_students.size();i++)
            if(all_students[i]->get_id()==id)
                return all_students[i];
        return nullptr;
    }
    ///@brief Function to return the Professor pointer to object(professor) after searching with a certain id
    ///@param id     the id of a certain professor
    professor* get_prof(QString id)
    {
        for(int i=0;i<all_proffessors.size();i++)
            if(all_proffessors[i]->get_id()==id)
                return all_proffessors[i];
        return nullptr;
    }
    ///@brief Function used to return the hash of the admin's password Using the SHA-256 Algorithm
    ///@param password       the password of a certain admin to be hashed
    QByteArray hashPassword(const QString& password)
    {
      // Convert the password to a byte array
      QByteArray data = password.toUtf8();

      // Generate the hash value using the SHA-256 algorithm
      QByteArray hash = QCryptographicHash::hash(data, QCryptographicHash::Sha256);

      return hash;
    }
    ///@brief Function to add a new admin to the database file
    ///@param username    username of the admin
    ///@param pass        the password to be hashed and validated while log-in process
    void add_admin(QString username,QString pass)
    {
        QByteArray hash = hashPassword(pass);
        Admin[username]=hash;
    }

    vector<course *> all_courses;
    ///@brief Function to add a new added course to all courses vector
    ///@param c         course pointer to the added course
    void add_course(course *c)
    {
        all_courses.push_back(c);
    }

    vector<student * >all_students;
    ///@brief Function to add a new added student to all students vector
    ///@param s         student pointer to the added student
    void add_student(student *s){
        all_students.push_back(s);
    }
    vector<professor*> all_proffessors;
    ///@brief Function to add a new added professor to all professors
    ///@param c         professor pointer to the added professor
    void add_professor(professor* p)
    {
        all_proffessors.push_back(p);
    }
    ///@brief Function to assign a grade of a certain course to a certain student
    ///@param s          student pointer
    ///@param c          course pointer
    ///@param g          the grade to be assigned
    void assign_grade(student *s , course *c,QString g)
    {
        s->set_grade(c->get_code(),g);
        c->set_grade(s,g);
    }
    ///@brief Function to assign a professor to a certain course
    ///@param p          professor pointer
    ///@param c          course pointer
    void assign_prof(professor* p, course* c)
    {
        c->profs.push_back(p);
        p->assign_course(c);
    }
    ///@brief Function to assign a professor to the moch data loaded
    ///@param p          professor pointer
    ///@param c          course pointer
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
