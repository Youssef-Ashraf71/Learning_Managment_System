#ifndef STUDMENU_H
#define STUDMENU_H

#include <QMainWindow>

namespace Ui {
class studmenu;
}

class studmenu : public QMainWindow
{
    Q_OBJECT

public:
    ///@brief Constructor for the Student menu window and Loading the table of students
    explicit studmenu(QWidget *parent = nullptr);
    ///@brief Destructor for the Student menu window
    ~studmenu();
    ///@brief Function to reload the table after adding a new student
     void load_table();


private slots:
    ///@brief Slot to apply the action:Open the Add student window when button add strudent is clicked
    void on_addbtn_clicked();
   ///@brief  Slot used to get back to the Dashboard
    void on_backbtn_clicked();
   ///@brief Slot to apply the action:filter the table by Grade
    void on_applyfltr_clicked();
    ///@brief Slot to apply animation on the search button when user press enter on the search bar
    void on_srchbar_returnPressed();
    ///@brief Slot to apply animation on the filter button when user press enter on the filter bar
    void on_fltrbar_returnPressed();
    ///@brief Slot to apply the search on a certain student by his name
    void on_srchbtn_clicked();
    ///@brief Slot to reset the search & filter effect
    void on_clearbrn_clicked();
    ///@brief Slot to Open the Student info when any student cell in the table is clicked
    ///@param row       index of row of the cell clicked
    ///@param column    index of col of the cell clicked
    void on_tablestud_cellDoubleClicked(int row, int column);


private:
    Ui::studmenu *ui;
};

#endif // STUDMENU_H
