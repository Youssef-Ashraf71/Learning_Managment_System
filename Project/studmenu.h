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

private slots:
    void on_backbtn_clicked();

    void on_addbtn_clicked();

private:
    Ui::studmenu *ui;
};

#endif // STUDMENU_H
