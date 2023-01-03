#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<bits/stdc++.h>
#include "Database.h"
#include"error.h"

using namespace std;

/// @brief Mainwindow is constructor to set the first appearing window up(ie:the logo photo,the title which is login and all the appearing ui)
/// @param parent
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    QGuiApplication::setQuitOnLastWindowClosed(false);
    ui->setupUi(this);
    setWindowIcon(QIcon(":/media/media/logo.png"));
    QPixmap pix(":/media/media/logo.png");
    ui->photo->setPixmap(pix);
    this->setWindowTitle("Log in");
    // intiialize


    // hena han3ml mock data

    student *moe1=new student();
       moe1->set_name("Youssef","Ashraf");
       moe1->set_mobile("01007424945");
       moe1->set_email("yoyobunt@proton.me");
       moe1->set_age(20);
       moe1->set_grade("2");
       moe1->set_id("S1");

       student *moe2=new student();
          moe2->set_name("Osama","Mohamed");
          moe2->set_mobile("01007429822");
          moe2->set_email("Osama11@proton.me");
          moe2->set_age(21);
          moe2->set_grade("2");
          moe2->set_id("S2");

        student *moe3=new student();
             moe3->set_name("Hazem","Rafat");
             moe3->set_mobile("01003924933");
             moe3->set_email("Hazemlol1@proton.me");
             moe3->set_age(19);
             moe3->set_grade("3");
             moe3->set_id("S3");

             student *moe4=new student();
                  moe4->set_name("Ali","Badran");
                  moe4->set_mobile("01124567933");
                  moe4->set_email("bedro69@proton.me");
                  moe4->set_age(22);
                  moe4->set_grade("4");
                  moe4->set_id("S4");

    professor *Samah=new professor("Samah","El-tantawy","Professor","P1","SamahEltantawy@3lmni.com","01239283651",45);
     professor *Ahmed=new professor("Ahmed","Hesham","Professor","P2","ahmedhesham123@3lmni.com","01130163631",35);
      professor *Batman=new professor("Ahmed","Etman","Professor","P3","ahmedbatman22@3lmni.com","01055683652",40);
       professor *Muhamed=new professor("Muhammed","Mostafa","TA","P4","mohtefa233@3lmni.com","01239284622",29);
     vector<student*> c;
         vector<student*> c1;
             vector<student*> c2;


     c.push_back(moe1);
     c.push_back(moe2);
     c1.push_back(moe1); c1.push_back(moe3); c1.push_back(moe4);
      c2.push_back(moe1); c2.push_back(moe2); c2.push_back(moe4);
     course *math=new course(Samah,c,"Math","MTH2245","3201","Sunday","8:30");
      course *DSA=new course(Ahmed,c1,"Data Sturctures","CMP1","3201","Sunday","10:15");
       course *circuits=new course(Batman,c2,"circuits","ELC23","3201","Sunday","12:15");
     database.time_available[0][0][0]=0;
     database.time_available[0][0][1]=0;
     database.time_available[0][0][2]=0;
     moe1->add_course(math);
     moe1->add_course(DSA);
     moe1->add_course(circuits);

     moe2->add_course(math);
     moe2->add_course(DSA);

     moe3->add_course(DSA);
      moe4->add_course(DSA);  moe4->add_course(circuits);
     database.add_student(moe1); database.add_student(moe2); database.add_student(moe3);
     database.add_student(moe4);
     database.add_course(math);
     database.add_course(circuits);
     database.add_course(DSA);
     database.add_professor(Samah);
     database.add_professor(Ahmed);
     database.add_professor(Batman);
     database.add_professor(Muhamed);
     database.assign_grade(moe1,math,"20");
     database.set_course(Samah, math);
    database.set_course(Ahmed, DSA); database.set_course(Batman, circuits);




}
/// @brief destructor to delete the ui after finishing the executing
MainWindow::~MainWindow()
{
    delete ui;
}

/// @brief function to check if the username matches its corresponding password to continue and if it is not activate the error function
void MainWindow::on_btn_login_clicked()
{
    QString user=ui->lbl_username->text();
    QString pass=ui->lbl_password->text();
    QByteArray hash = database.hashPassword(pass);
    if(database.Admin[user]==hash && user!="" && pass!="")
    {
       hide();
       dash=new Dashboard(this);
       dash->show();
    }
    else
    {
        ui->lbl_password->setText("");
       error er;
       er.setModal(true);
        er.exec();



    }

}
/// @brief function to close the mainwindow if the button back is pressed
void MainWindow::Go_Back(){
    hide();
    dash->show();
}

/// @brief function to show a click if the label password is clicked
void MainWindow::on_lbl_password_returnPressed()
{
    ui->btn_login->animateClick();
}

