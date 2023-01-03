#ifndef PROFMENU_H
#define PROFMENU_H

#include <QMainWindow>

namespace Ui {
class profmenu;
}

class profmenu : public QMainWindow
{
    Q_OBJECT


public:
    ///@brief Constructor of the professor menu window & Load the table of professors
    explicit profmenu(QWidget *parent = nullptr);
    ///@brief Destructor of the professor menu window
    ~profmenu();
    void load_table();
private slots:
    ///@brief  Slot used to get back to the Dashboard
    void on_backbtn_clicked();
    ///@brief Slot used to Open add new professor window when add professor is clicked
    void on_addbtn_clicked();
    ///@brief Slot to Open the Professor info window when any professor cell in the table is clicked
    ///@param row       index of row of the cell clicked
    ///@param column    index of col of the cell clicked
    void on_tableprof_cellDoubleClicked(int row, int column);
    ///@brief Slot to clear the effect of search ,filters and reload the table of professors
    void on_clearbtn_clicked();
    ///@brief Slot to apply the search on a certain professor by his id when search button is clicked
    void on_srchbtn_clicked();
    ///@brief Slot to apply animation on the search button when user press enter on the search bar
    void on_srchbar_returnPressed();
    ///@brief Slot to apply animation on the filter button when user press enter on the filter bar
    void on_fltrbar_returnPressed();
    ///@brief Slot to apply the filter on a certain professor by his title when filter button is clicked
    void on_applyfltr_clicked();

private:
    Ui::profmenu *ui;
};

#endif // PROFMENU_H
