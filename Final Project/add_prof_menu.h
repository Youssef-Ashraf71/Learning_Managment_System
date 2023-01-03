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
    ///@brief Constructor for the professor window
    explicit add_prof_menu(QWidget *parent = nullptr);
    ///@brief Destructor for the professor window
    ~add_prof_menu();

private slots:
    ///@brief Slot used to get back to the professor menu when backbutton is clicked
    void on_backbtn2_clicked();
    ///@brief Slot used to add the professor to the database when add button is clicked
    void on_addbtn_clicked();
    ///@brief Fucntion to Reset the stylesheet of the mail line edit after error occured on Mail regex
    void on_mailline_textEdited(const QString &arg1);
    ///@brief Fucntion to Reset the stylesheet of the mobile line edit after error occured on Mobile regex
    void on_mobline_textEdited(const QString &arg1);

private:
    Ui::add_prof_menu *ui;
};

#endif // ADD_PROF_MENU_H
