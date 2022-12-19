#include "coursemenu.h"
#include "ui_coursemenu.h"

coursemenu::coursemenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::coursemenu)
{
    ui->setupUi(this);
}

coursemenu::~coursemenu()
{
    delete ui;
}
