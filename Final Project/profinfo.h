#ifndef PROFINFO_H
#define PROFINFO_H

#include <QMainWindow>
#include<map>
namespace Ui {
class profinfo;
}

class profinfo : public QMainWindow
{
    Q_OBJECT

public:
    ///@brief Constructor to the professer info window,Load prof info ,Load combo box of courses that the professor can be assigned to and Table of the professor's courses
    explicit profinfo(QWidget *parent = nullptr);
    ///@brief Destructor of the professor info window
    ~profinfo();
       std::map<QString,bool>visited;
private slots:
    ///@brief Slot used to get back to the professor menu when backbutton is clicked
    void on_backbtn_clicked();
    ///@brief Slot used to assign a new course to the professor ,reload the table of courses when assign button is clicked
    void on_assignbtn_clicked();
    ///@brief Function to reload the combo box of the courses that the professor can be assigned to
    void reload_combo();
    ///@brief Fucntion to reload the table of the professor's Courses after assigning a new course to him
    void reload_table();

private:
    Ui::profinfo *ui;
};

#endif // PROFINFO_H
