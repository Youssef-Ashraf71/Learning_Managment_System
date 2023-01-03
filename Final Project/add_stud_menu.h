#ifndef ADD_STUD_MENU_H
#define ADD_STUD_MENU_H

#include <QDialog>

namespace Ui {
class add_stud_menu;
}

class add_stud_menu : public QDialog
{
    Q_OBJECT

public:
    explicit add_stud_menu(QWidget *parent = nullptr);
    ~add_stud_menu();

private slots:
    void on_addbtn_clicked();

    void on_backbtn2_clicked();

    void on_mailline_textEdited(const QString &arg1);

    void on_mobline_textEdited(const QString &arg1);

private:
    Ui::add_stud_menu *ui;
};

#endif // ADD_STUD_MENU_H
