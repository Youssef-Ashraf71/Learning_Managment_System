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
    explicit studmenu(QWidget *parent = nullptr);
    ~studmenu();
     void load_table();


private slots:
    /*
    void on_backbtn_clicked();

    void on_addbtn_clicked();

    void on_backbtn2_clicked();


    void on_pushButton_clicked();

    void clearall();
    */


    void on_addbtn_clicked();

    void on_backbtn_clicked();

    void on_applyfltr_clicked();

    void on_srchbar_returnPressed();

    void on_fltrbar_returnPressed();

    void on_srchbtn_clicked();

    void on_clearbrn_clicked();

    void on_tablestud_cellDoubleClicked(int row, int column);

    void on_tablestud_cellChanged(int row, int column);

private:
    Ui::studmenu *ui;
};

#endif // STUDMENU_H
