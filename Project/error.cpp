#include "error.h"
#include "ui_error.h"

error::error(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::error)
{
    ui->setupUi(this);
    this->setWindowTitle("Error");
}

error::~error()
{
    delete ui;
}

void error::on_pushButton_clicked()
{
    close();
}

