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
    explicit profmenu(QWidget *parent = nullptr);
    ~profmenu();
    void load_table();
private slots:
    void on_backbtn_clicked();

    void on_addbtn_clicked();

    void on_tableprof_cellDoubleClicked(int row, int column);

    void on_clearbtn_clicked();

    void on_srchbtn_clicked();

    void on_srchbar_returnPressed();

    void on_fltrbar_returnPressed();

    void on_applyfltr_clicked();

private:
    Ui::profmenu *ui;
};

#endif // PROFMENU_H
