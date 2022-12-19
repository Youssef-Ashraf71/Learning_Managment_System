#include "studmenu.h"
#include "ui_studmenu.h"

studmenu::studmenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::studmenu)
{
    ui->setupUi(this);
}

studmenu::~studmenu()
{
    delete ui;
}
