#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QMainWindow>
#include<student.h>
namespace Ui {
class Dashboard;
}

class Dashboard : public QMainWindow
{
    Q_OBJECT

public:
    explicit Dashboard(QWidget *parent = nullptr);
    ~Dashboard();

private slots:
    void on_stud_clicked();

    void on_courses_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Dashboard *ui;

};

#endif // DASHBOARD_H
