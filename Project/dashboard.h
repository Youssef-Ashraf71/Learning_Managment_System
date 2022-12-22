#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QMainWindow>
#include"studmenu.h"
#include"coursemenu.h"
#include"profmenu.h"
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


    void on_btn_studd_clicked();

    void on_btn_courss_clicked();

    void on_btn_proff_clicked();


private:
    Ui::Dashboard *ui;
    studmenu * studd;
    profmenu* proff;
    coursemenu* courss;
};

#endif // DASHBOARD_H
