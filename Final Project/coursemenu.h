#ifndef COURSEMENU_H
#define COURSEMENU_H

#include <QMainWindow>
#include"courseinfo.h"

namespace Ui {
class coursemenu;
}

class coursemenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit coursemenu(QWidget *parent = nullptr);
    void load_table();
    bool filter = false;
    ~coursemenu();

private slots:



    void on_backbtncourse_clicked();



    void on_btn_add_clicked();

    void on_tbl_course_cellDoubleClicked(int row, int column);


    void on_btn_filter_clicked();

    void on_pushButton_clicked();

    void on_btn_search_clicked();

    void on_lbl_search_returnPressed();

    void on_lbl_filter_returnPressed();

private:
    ///@brief function sets a pointer to coursemenu class
    Ui::coursemenu *ui;
    ///@brief function sets a pointer to courseinfo class
    Courseinfo * c_info;

};

#endif // COURSEMENU_H
