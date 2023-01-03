#include "add_prof_menu.h"
#include "qregularexpression.h"
#include "ui_add_prof_menu.h"
#include "professor.h"
#include"Database.h"
add_prof_menu::add_prof_menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_prof_menu)
{
    ui->setupUi(this);
        setWindowIcon(QIcon(":/media/media/logo.png"));
    this->setWindowTitle("Add Professor");
    QPixmap iconstud(":/media/media/proficon.png");
    ui->icon->setPixmap(iconstud);

}

add_prof_menu::~add_prof_menu()
{
    delete ui;
}

void add_prof_menu::on_backbtn2_clicked()
{
    hide();
}


void add_prof_menu::on_addbtn_clicked()
{
        QRegularExpression emailRegex("^[a-zA-Z0-9.!#$%&'*+/=?^_`{|}~-]+@[a-zA-Z0-9](?:[a-zA-Z0-9-]{0,61}[a-zA-Z0-9])?(?:\\.[a-zA-Z0-9](?:[a-zA-Z0-9-]{0,61}[a-zA-Z0-9])?)*$");
        QRegularExpression phoneRegex("^(\\+20|0)?(11|12|10|15)[0-9]{8}$");
        if (emailRegex.match(ui->mailline->text()).hasMatch()) {
                    if (phoneRegex.match(ui->mobline->text()).hasMatch()) {
                        professor* proof =new professor();
                            proof->set_name(ui->firnameline->text(),ui->lstnameline->text());
                            proof->set_mobile(ui->mobline->text());
                            proof->set_email(ui->mailline->text());
                            proof->set_age(ui->ageline->text().toInt());
                            proof->set_title(ui->titleline->text());
                            proof->set_id("P"+QString::number(database.all_proffessors.size()+1));
                            database.add_professor(proof);
                            hide();
                    } else {
                        ui->mobline->clear();
                        ui->mobline->setStyleSheet("border: 2px solid red;");
                        ui->mobline->setPlaceholderText("Invalid mobile number");
                    }
        }
        else {
            if (!phoneRegex.match(ui->mobline->text()).hasMatch()) {
                ui->mobline->clear();
                ui->mobline->setStyleSheet("border: 2px solid red;");
                ui->mobline->setPlaceholderText("Invalid mobile number");
            }
            ui->mailline->clear();
            ui->mailline->setStyleSheet("border: 2px solid red;");
            ui->mailline->setPlaceholderText("Invaild email address");
        }
}


void add_prof_menu::on_mailline_textEdited(const QString &arg1)
{
    ui->mailline->setStyleSheet("border: inherit;");
}


void add_prof_menu::on_mobline_textEdited(const QString &arg1)
{
    ui->mobline->setStyleSheet("border: inherit;");
}

