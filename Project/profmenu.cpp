#include "profmenu.h"
#include "ui_profmenu.h"

profmenu::profmenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::profmenu)
{
    ui->setupUi(this);
}

profmenu::~profmenu()
{
    delete ui;
}
