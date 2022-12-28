#ifndef COURSEINFO_H
#define COURSEINFO_H

#include <QMainWindow>

namespace Ui {
class Courseinfo;
}

class Courseinfo : public QMainWindow
{
    Q_OBJECT

public:
    explicit Courseinfo(QWidget *parent = nullptr);
    ~Courseinfo();

private slots:
    void on_pushButton_clicked();

    void on_tbl_stud_cellChanged(int row, int column);

private:
    Ui::Courseinfo *ui;
};

#endif // COURSEINFO_H
