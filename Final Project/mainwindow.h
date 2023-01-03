#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"dashboard.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_btn_login_clicked();

    void on_lbl_password_returnPressed();
    void Go_Back();

private:
    /// @brief sets a pointer to the mainwindow class
    Ui::MainWindow *ui;
    /// @brief sets a pointer the dashboard class
     Dashboard* dash;
};
#endif // MAINWINDOW_H
