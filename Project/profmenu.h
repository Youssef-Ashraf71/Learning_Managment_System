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

private:
    Ui::profmenu *ui;
};

#endif // PROFMENU_H
