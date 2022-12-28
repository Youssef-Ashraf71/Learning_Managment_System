#ifndef ADD_COURSE_MENU_H
#define ADD_COURSE_MENU_H

#include <QDialog>

namespace Ui {
class Add_course_menu;
}

class Add_course_menu : public QDialog
{
    Q_OBJECT

public:
    explicit Add_course_menu(QWidget *parent = nullptr);
    ~Add_course_menu();

private slots:


    void on_btn_cancel_clicked();

    void on_btn_add_clicked();
private:
    Ui::Add_course_menu *ui;
};

#endif // ADD_COURSE_MENU_H
