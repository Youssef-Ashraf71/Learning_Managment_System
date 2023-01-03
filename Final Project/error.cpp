#include "error.h"
#include "ui_error.h"
///@brief constructor that set the ui of the error window
error::error(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::error)
{
    ui->setupUi(this);
        setWindowIcon(QIcon(":/media/media/logo.png"));
    this->setWindowTitle("Error");
}
///@brief destructor that delete the ui after finishing the executing
error::~error()
{
    delete ui;
}
///@brief function to close the window if push button is clicked
void error::on_pushButton_clicked()
{
    close();
}

