#ifndef COURSEINFO_H
#define COURSEINFO_H

#include <QMainWindow>
#include<map>

namespace Ui {
class Courseinfo;
}

class Courseinfo : public QMainWindow
{
    Q_OBJECT

public:
    explicit Courseinfo(QWidget *parent = nullptr);
    std::map<QString,bool>visited;

    ~Courseinfo();

private slots:
    void reload_table();
    void reload_combo1();
    void reload_combo2();
    void on_pushButton_clicked();

    void on_tbl_stud_cellChanged(int row, int column);

    void on_btn_filter_clicked();

    void on_btn_clear_filter_clicked();

    void on_btn_enroll_clicked();

    void on_btn_assign_clicked();

private:
    Ui::Courseinfo *ui;
};

#endif // COURSEINFO_H
