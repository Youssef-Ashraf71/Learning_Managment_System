#ifndef STUDINFO_H
#define STUDINFO_H

#include <QMainWindow>
#include<map>
namespace Ui {
class studinfo;
}

class studinfo : public QMainWindow
{
    Q_OBJECT

public:
    ///@brief Constructor of the student info window,load the table,combo box of courses and the student info
    explicit studinfo(QWidget *parent = nullptr);
    ///@brief Destructor of the student info window
    ~studinfo();
         std::map<QString,bool>visited;

private slots:
         ///@brief Slot used to get back to the student menu
    void on_backbtn_clicked();
    ///@brief Function to reload the combo box of courses the student can enroll on
    void reload_combo();
    ///@brief Function to reload the table of courses after enorlling on a new course
    void reload_table();
    ///@brief ٍSlot to apply the action:enroll the student on a new course
    void on_enrollbtn_clicked();
    ///@brief Slot to apply the action:edit the grade of a certain course when the admin changes it
    ///@param row       index of row of the cell changed
    ///@param column    index of col of the cell changed
    void on_tablecourse_cellChanged(int row, int column);

private:
    Ui::studinfo *ui;
};

#endif // STUDINFO_H
