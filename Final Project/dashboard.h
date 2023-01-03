#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QMainWindow>
#include"studmenu.h"
#include"coursemenu.h"
#include"profmenu.h"
#include"new_admin.h"
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

    void on_btn_newadmin_clicked();

    void on_btn_export_clicked();

private:
     /// @brief sets a pointer to the dashboard class named ui
    Ui::Dashboard *ui;
    /// @brief sets a pointer to studmenu class named studd
    studmenu * studd;
    /// @brief sets a pointer to profmenu class named proff
    profmenu* proff;
     /// @brief sets a pointer to coursemenu class named courss
    coursemenu* courss;
     /// @brief sets a pointer to new_class named newaddmin
    new_admin* newaddmin;
};

#endif // DASHBOARD_H
