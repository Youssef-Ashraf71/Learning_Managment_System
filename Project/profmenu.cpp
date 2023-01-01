#include "profmenu.h"
#include "ui_profmenu.h"
#include<dashboard.h>
#include<Database.h>
#include "add_prof_menu.h"
#include "professor.h"
#include "profinfo.h"
class Dashboard ;
profmenu::profmenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::profmenu)
{
    ui->setupUi(this);
    QTableWidget *professor_table=ui->tableprof;
     this->setWindowTitle("Professors");
    professor_table->setHorizontalHeaderLabels({"Professor Name","ID","Title"});
     professor_table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

     profmenu:load_table();
}

void profmenu::load_table(){
    QTableWidget* table = ui->tableprof;
    for(int i=0;i<database.all_proffessors.size();i++)
    {
        if(table->rowCount()<database.all_proffessors.size())
            table->insertRow(table->rowCount());
        QTableWidgetItem* professor_name= new QTableWidgetItem(database.all_proffessors[i]->get_nname());
        QTableWidgetItem* professor_title= new QTableWidgetItem(database.all_proffessors[i]->get_title());
        QTableWidgetItem* professor_id=new QTableWidgetItem(database.all_proffessors[i]->get_id());
        table->setItem(i,0,professor_name); professor_name->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled );
        table->setItem(i,1,professor_id); professor_id->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled );
        table->setItem(i,2,professor_title); professor_title->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled );

    }

}

profmenu::~profmenu()
{
    delete ui;
}

void profmenu::on_backbtn_clicked()
{
    hide();
    Dashboard* d= new Dashboard();
    d->show();
}

void profmenu::on_addbtn_clicked()
{
    // create a new add instance
     add_prof_menu new_professor;
     //new_professor->show();
     new_professor.setModal(true);
     new_professor.exec();
    // here load table once again
       profmenu::load_table();
}


void profmenu::on_tableprof_cellDoubleClicked(int row, int column)
{
    QString target=ui->tableprof->item(row,0)->text();
    for(int i=0 ; i<database.all_proffessors.size(); i++){
        if(database.all_proffessors[i]->get_nname()==target){
            database.selected_professor=database.all_proffessors[i]; break;
        }
    }
    profinfo* info=new profinfo();
    info->show();
}


void profmenu::on_clearbtn_clicked()
{
    ui->tableprof->clear();
    ui->srchbar->clear();
    ui->fltrbar->clear();
    ui->tableprof->setHorizontalHeaderLabels({"Professor Name","ID", "Title"});
    ui->tableprof->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    profmenu::load_table();
}


void profmenu::on_srchbtn_clicked()
{
    QTableWidget* table=ui->tableprof;
    table->clear();
    table->setRowCount(0);
    table->setHorizontalHeaderLabels({"Professor Name", "ID","Title"});
    table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    QString target= ui->srchbar->text();
    int cnt=-1;
    for(int i=0 ; i<database.all_proffessors.size(); i++){
        if(database.all_proffessors[i]->get_id()== target){
            cnt++;
            if(table->rowCount()<database.all_proffessors.size())
                table->insertRow(table->rowCount());
            QTableWidgetItem* professor_name=new QTableWidgetItem(database.all_proffessors[i]->get_nname());
            table->setItem(cnt,0,professor_name); professor_name->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled );
            QTableWidgetItem* professor_id=new QTableWidgetItem(database.all_proffessors[i]->get_id());
            table->setItem(cnt,1,professor_id); professor_id->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled );
            QTableWidgetItem* professor_title=new QTableWidgetItem(database.all_proffessors[i]->get_title());
            table->setItem(cnt,2,professor_title); professor_name->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled );
        }
    }
}


void profmenu::on_srchbar_returnPressed()
{
    ui->srchbtn->animateClick();
}


void profmenu::on_fltrbar_returnPressed()
{
    ui->applyfltr->animateClick();

}


void profmenu::on_applyfltr_clicked()
{
    QTableWidget* table=ui->tableprof;
    table->clear();
    table->setRowCount(0);
    table->setHorizontalHeaderLabels({"Professor Name","ID","Title"});
    table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    QString target = ui->fltrbar->text();
    int cnt=-1;
    for(int i=0;i<database.all_proffessors.size();i++)
    {
        if(database.all_proffessors[i]->get_title()==target)
        {
             cnt++;
            if(table->rowCount()<database.all_proffessors.size())
                table->insertRow(table->rowCount());
            QString current=database.all_proffessors[i]->get_title();
            QTableWidgetItem* professor_name= new QTableWidgetItem(database.all_proffessors[i]->get_nname());
            table->setItem(cnt,0,professor_name);  professor_name->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled );
            QTableWidgetItem* professor_id= new QTableWidgetItem(database.all_proffessors[i]->get_id());
            table->setItem(cnt,1,professor_id);    professor_id->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled );
            QTableWidgetItem* professor_title= new QTableWidgetItem(database.all_proffessors[i]->get_title());
            table->setItem(cnt,2,professor_title);  professor_title->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled );
        }
    }
}
