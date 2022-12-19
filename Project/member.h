#ifndef MEMBER_H
#define MEMBER_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include<iostream>
using namespace std;

class member
{
protected:
    string first_name,last_name,mobile,email;
    int age;

public:
    member();
    void set_name(string first_name,string last_name){
           this->first_name=first_name;
           this->last_name=last_name;
       }
       string get_name(){
          return (this->first_name+this->last_name);
       }
       void set_mobile(string mobile){
           this->mobile=mobile;
       }
       string get_mobile(){
           return this->mobile;
       }

       void set_email(string email){
           this->email=email;
       }
       string get_email(){
           return this->email;
       }
       void set_age(int age){
           this->age=age;
       }
       int get_age(){
           return this->age;
       }



};

#endif // MEMBER_H
