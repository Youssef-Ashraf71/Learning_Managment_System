#include "profinfo.h"
#include "ui_profinfo.h"
#include "Database.h"
profinfo::profinfo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::profinfo)
{
    ui->setupUi(this);
    this->setWindowTitle("Professor Info");
    QTableWidget *courses_table=ui->tablecourse;
    courses_table->setHorizontalHeaderLabels({"Course Name","Course Code"});
    courses_table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->lbl_name->setText(database.selected_professor->get_nname());
    ui->lbl_title->setText(database.selected_professor->get_title());
    ui->lbl_id->setText(database.selected_professor->get_id());
    ui->lbl_mail->setText(database.selected_professor->get_email());
    ui->lbl_age->setText(QString::number(database.selected_professor->get_age()));
    ui->lbl_mob->setText(database.selected_professor->get_mobile());

    for(int i=0 ; i<database.selected_professor->courses.size(); i++){
        courses_table->insertRow(courses_table->rowCount());
        QTableWidgetItem* course_name=new QTableWidgetItem( database.selected_professor->courses[i]->get_name());
        QTableWidgetItem* course_code=new QTableWidgetItem(database.selected_professor->courses[i]->get_code());
        courses_table->setItem(i,0,course_name); course_name->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled );
        courses_table->setItem(i,1,course_code); course_code->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled );
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

