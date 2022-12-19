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

private:
    Ui::coursemenu *ui;
};

#endif // COURSEMENU_H
