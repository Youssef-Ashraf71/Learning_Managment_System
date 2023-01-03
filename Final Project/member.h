#ifndef MEMBER_H
#define MEMBER_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include<bits/stdc++.h>
using namespace std;

class member
{
public:
    QString first_name,last_name,mobile,email,id;
    int age;

    member();
    void set_name(QString first_name,QString last_name){
           this->first_name=first_name;
           this->last_name=last_name;
       }
       QString get_name(){
          return (this->first_name+" "+this->last_name);
       }
       void set_mobile(QString mobile){
           this->mobile=mobile;
       }
       QString get_mobile(){
           return this->mobile;
       }

       void set_email(QString email){
           this->email=email;
       }
       QString get_email(){
           return this->email;
       }
       void set_age(int age){
           this->age=age;
       }
       int get_age(){
           return this->age;
       }
       void set_id(QString id){
           this->id=id;
       }
       QString  get_id(){
           return this->id;
       }



};

#endif // MEMBER_H
