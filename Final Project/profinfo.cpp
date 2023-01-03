#include "profinfo.h"
#include "ui_profinfo.h"
#include "Database.h"
profinfo::profinfo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::profinfo)
{

    ui->setupUi(this);
        setWindowIcon(QIcon(":/media/media/logo.png"));
    this->setWindowTitle("Professor Info");
     ui->lbl_title->setFocus();
    QTableWidget *courses_table=ui->tablecourse;
    courses_table->setHorizontalHeaderLabels({"Course Name","Course Code"});
    courses_table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->lbl_name->setText(database.selected_professor->get_name());
    ui->lbl_title->setText(database.selected_professor->get_title());
    ui->lbl_id->setText(database.selected_professor->get_id());
    ui->lbl_mail->setText(database.selected_professor->get_email());
    ui->lbl_age->setText(QString::number(database.selected_professor->get_age()));
    ui->lbl_mob->setText(database.selected_professor->get_mobile());

    for(int i=0 ; i<database.selected_professor->courses.size(); i++){
        courses_table->insertRow(courses_table->rowCount());
        QTableWidgetItem* course_name=new QTableWidgetItem( database.selected_professor->courses[i]->get_name());
        QTableWidgetItem* course_code=new QTableWidgetItem(database.selected_professor->courses[i]->get_code());
        visited[database.selected_professor->courses[i]->get_code()]=1;
        courses_table->setItem(i,0,course_name); course_name->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled );
        courses_table->setItem(i,1,course_code); course_code->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled );
        course_name->setToolTip(
                    "<li>Code :<li>"+database.selected_professor->courses[i]->get_code()+
                    "<li>Supervisor :<li>"+database.selected_professor->courses[i]->get_prof()->get_name()+
                    "<li>Hall :<li>"+database.selected_professor->courses[i]->get_hall()+
                    "<li>Day :<li>"+database.selected_professor->courses[i]->get_day()+
                    "<li>Time :<li>"+database.selected_professor->courses[i]->get_time()
                    );
        course_code->setToolTip(                    "<li>Course :<li>"+database.selected_professor->courses[i]->get_name()+
                                                    "<li>Supervisor :<li>"+database.selected_professor->courses[i]->get_prof()->get_name()+
                                                    "<li>Hall :<li>"+database.selected_professor->courses[i]->get_hall()+
                                                    "<li>Day :<li>"+database.selected_professor->courses[i]->get_day()+
                                                    "<li>Time :<li>"+database.selected_professor->courses[i]->get_time()
                                                    );
    }
      ui->courses_combo->setStyleSheet("QComboBox { combobox-popup: 0; color: white; padding: 0px 0px 0px 0px; }");
    for(int i=0;i<database.all_courses.size();i++){
        if(!visited[database.all_courses[i]->get_code()]){
            ui->courses_combo->addItem(database.all_courses[i]->get_code());
        }
    }


}

profinfo::~profinfo()
{
    delete ui;
}

void profinfo::on_backbtn_clicked()
{
    hide();
}

void profinfo::on_assignbtn_clicked()
{
    QString target=ui->courses_combo->currentText();
    if(target!=""){
    for(int i=0;i<database.all_courses.size();i++){
       if(database.all_courses[i]->get_code()==target){
           database.selected_course=database.all_courses[i]; break;
       }
    }
    visited[target]=1;
    database.assign_prof(database.selected_professor,database.selected_course);
    reload_combo();
    reload_table();
    }
}

void profinfo::reload_combo()
{
    ui->courses_combo->clear();
    ui->courses_combo->setStyleSheet("QComboBox { combobox-popup: 0; color: white; padding: 0px 0px 0px 0px; }");
    for(int i=0;i<database.all_courses.size();i++){
        if(!visited[database.all_courses[i]->get_code()]){
            ui->courses_combo->addItem(database.all_courses[i]->get_code());
        }
    }
}

void profinfo::reload_table()
{
    ui->tablecourse->clear();
    ui->tablecourse->setRowCount(0);
     QTableWidget *courses_table=ui->tablecourse;
    courses_table->setHorizontalHeaderLabels({"Course Name","Course Code"});
    courses_table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    for(int i=0 ; i<database.selected_professor->courses.size(); i++){
        courses_table->insertRow(courses_table->rowCount());
        QTableWidgetItem* course_name=new QTableWidgetItem( database.selected_professor->courses[i]->get_name());
        QTableWidgetItem* course_code=new QTableWidgetItem(database.selected_professor->courses[i]->get_code());
        courses_table->setItem(i,0,course_name); course_name->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled );
        courses_table->setItem(i,1,course_code); course_code->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled );
        course_name->setToolTip(
                    "<li>Code :<li>"+database.selected_professor->courses[i]->get_code()+
                    "<li>Supervisor :<li>"+database.selected_professor->courses[i]->get_prof()->get_name()+
                    "<li>Hall :<li>"+database.selected_professor->courses[i]->get_hall()+
                    "<li>Day :<li>"+database.selected_professor->courses[i]->get_day()+
                    "<li>Time :<li>"+database.selected_professor->courses[i]->get_time()
                    );
        course_code->setToolTip(                    "<li>Course :<li>"+database.selected_professor->courses[i]->get_name()+
                                                    "<li>Supervisor :<li>"+database.selected_professor->courses[i]->get_prof()->get_name()+
                                                    "<li>Hall :<li>"+database.selected_professor->courses[i]->get_hall()+
                                                    "<li>Day :<li>"+database.selected_professor->courses[i]->get_day()+
                                                    "<li>Time :<li>"+database.selected_professor->courses[i]->get_time()
                                                    );
    }

}
