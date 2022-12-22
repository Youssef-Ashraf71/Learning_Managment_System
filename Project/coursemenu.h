#ifndef COURSEMENU_H
#define COURSEMENU_H

#include <QMainWindow>

namespace Ui {
class coursemenu;
}

class coursemenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit coursemenu(QWidget *parent = nullptr);
    ~coursemenu();

private slots:
    void on_pushButton_2_clicked();


    void on_backbtncourse_clicked();

private:
    Ui::coursemenu *ui;
};

#endif // COURSEMENU_H
