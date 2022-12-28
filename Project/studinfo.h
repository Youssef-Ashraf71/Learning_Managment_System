#ifndef STUDINFO_H
#define STUDINFO_H

#include <QMainWindow>

namespace Ui {
class studinfo;
}

class studinfo : public QMainWindow
{
    Q_OBJECT

public:
    explicit studinfo(QWidget *parent = nullptr);
    ~studinfo();

private slots:
    void on_backbtn_clicked();

    void reload_combo();
    void on_enrollbtn_clicked();

private:
    Ui::studinfo *ui;
};

#endif // STUDINFO_H
