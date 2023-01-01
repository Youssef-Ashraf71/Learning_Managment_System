#ifndef ADD_PROF_MENU_H
#define ADD_PROF_MENU_H

#include <QDialog>

namespace Ui {
class add_prof_menu;
}

class add_prof_menu : public QDialog
{
    Q_OBJECT

public:
    explicit add_prof_menu(QWidget *parent = nullptr);
    ~add_prof_menu();

private slots:
    void on_backbtn2_clicked();

    void on_addbtn_clicked();

    void on_mailline_textEdited(const QString &arg1);

    void on_mobline_textEdited(const QString &arg1);

private:
    Ui::add_prof_menu *ui;
};

#endif // ADD_PROF_MENU_H
