#include "coursemenu.h"
#include "ui_coursemenu.h"
#include"QTableWidget"
#include"Database.h"
#include"dashboard.h"
#include<QWidgetItem>
#include"add_course_menu.h"
///@brief constructor that display the ui of the course menu and the table of courses inside it with is its title
coursemenu::coursemenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::coursemenu)
{
    ui->setupUi(this);
        setWindowIcon(QIcon(":/media/media/logo.png"));
    this->setWindowTitle("Courses");
    QTableWidget* table=ui->tbl_course;
    table->setWindowTitle("Courses");
    table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    table->setHorizontalHeaderLabels({"Course","Course Code","Supervisor"});
    coursemenu::load_table();




}
///@brief destructor to delete the ui after finishing the executing
coursemenu::~coursemenu()
{
    delete ui;
}
///@brief function to display the table of courses and show in each row course name then course code next to it then course professor next to it each displayed in single column
void coursemenu::load_table()
{
    QTableWidget* table=ui->tbl_course;
    for(int i=0;i<database.all_courses.size();i++)
    {
        if(table->rowCount()<database.all_courses.size())
            table->insertRow(table->rowCount());
        QTableWidgetItem* course_name= new QTableWidgetItem(database.all_courses[i]->get_name());
        table->setItem(i,0,course_name);
        QTableWidgetItem* course_code= new QTableWidgetItem(database.all_courses[i]->get_code());
        table->setItem(i,1,course_code);
        QTableWidgetItem* course_prof= new QTableWidgetItem(database.all_courses[i]->get_prof()->get_name());
        table->setItem(i,2,course_prof);
    }
}




///@brief function that close the course menu window and display the dashboard window when the back button is clicked
void coursemenu::on_backbtncourse_clicked()
{
        hide();
    Dashboard* crt=new Dashboard();
    crt->show();

}




///@brief function that show the add course menu window and refresh the table of courses incase a new course is added
void coursemenu::on_btn_add_clicked()
{
    Add_course_menu addd;
    addd.setModal(true);
    addd.exec();
    coursemenu::load_table();
}

///@brief function to show the course info of a certain course if it is double clicked in the table
/// @param row the row of the table of courses
/// @param column the column of the table of courses
void coursemenu::on_tbl_course_cellDoubleClicked(int row, int column)
{
    if(!coursemenu::filter)
    {
        database.selected_course=database.all_courses[row];
    }
    else
    {
        QString target = ui->tbl_course->item(row,1)->text();
        for(int i=0;i<database.all_courses.size();i++)

            if(database.all_courses[i]->get_code()==target){
                database.selected_course=database.all_courses[i];
                break;
            }


    }
    Courseinfo *c_info=new Courseinfo(this);
    c_info->show();
}

///@brief function to filter the table of courses by the supervisor giving the course
void coursemenu::on_btn_filter_clicked()
{
    coursemenu::filter=true;
    QTableWidget* table=ui->tbl_course;
    table->clear();
    table->setRowCount(0);
    table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    table->setHorizontalHeaderLabels({"Course","Course Code","Supervisor"});
    QString target = ui->lbl_filter->text();
    int cnt=-1;
    for(int i=0;i<database.all_courses.size();i++)
    {
        if(database.all_courses[i]->get_prof()->get_name()==target)
        {
            cnt++;
            table->insertRow(table->rowCount());
            QTableWidgetItem* course_name= new QTableWidgetItem(database.all_courses[i]->get_name());
            table->setItem(cnt,0,course_name);
            QTableWidgetItem* course_code= new QTableWidgetItem(database.all_courses[i]->get_code());
            table->setItem(cnt,1,course_code);
            QTableWidgetItem* course_prof= new QTableWidgetItem(database.all_courses[i]->get_prof()->get_name());
            table->setItem(cnt,2,course_prof);
        }
    }

}

///@brief function that refresh the table to load the new contents when clicking the push button
void coursemenu::on_pushButton_clicked()
{
    ui->tbl_course->clear();
    ui->lbl_filter->clear();  ui->lbl_search->clear();
    ui->tbl_course->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tbl_course->setHorizontalHeaderLabels({"Course","Course Code","Supervisor"});
    coursemenu::load_table();
}

///@brief function to search the table of courses by the course code
void coursemenu::on_btn_search_clicked()
{
    coursemenu::filter=true;
    QTableWidget* table=ui->tbl_course;
    table->clear();
    table->setRowCount(0);
    table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    table->setHorizontalHeaderLabels({"Course","Course Code","Supervisor"});
    QString target = ui->lbl_search->text();
    int cnt=-1;
    for(int i=0;i<database.all_courses.size();i++)
    {
        if(database.all_courses[i]->get_code()==target)
        {
            cnt++;
            table->insertRow(table->rowCount());
            QTableWidgetItem* course_name= new QTableWidgetItem(database.all_courses[i]->get_name());
            table->setItem(cnt,0,course_name);
            QTableWidgetItem* course_code= new QTableWidgetItem(database.all_courses[i]->get_code());
            table->setItem(cnt,1,course_code);
            QTableWidgetItem* course_prof= new QTableWidgetItem(database.all_courses[i]->get_prof()->get_name());
            table->setItem(cnt,2,course_prof);
            break;
        }
    }

}


///@brief function to animate a click when label search is pressed
void coursemenu::on_lbl_search_returnPressed()
{
    ui->btn_search->animateClick();
}

///@brief function to animate a click when label filter is pressed
void coursemenu::on_lbl_filter_returnPressed()
{
    ui->btn_filter->animateClick();
}

