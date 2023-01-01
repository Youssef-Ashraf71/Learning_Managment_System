#ifndef PROFINFO_H
#define PROFINFO_H

#include <QMainWindow>

namespace Ui {
class profinfo;
}

class profinfo : public QMainWindow
{
    Q_OBJECT

public:
    explicit profinfo(QWidget *parent = nullptr);
    ~profinfo();

private slots:
    void on_backbtn_clicked();

private:
    Ui::profinfo *ui;
};

#endif // PROFINFO_H
