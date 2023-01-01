#ifndef STUDINFO_H
#define STUDINFO_H

#include <QMainWindow>
#include<map>
namespace Ui {
class studinfo;
}

class studinfo : public QMainWindow
{
    Q_OBJECT

public:
    explicit studinfo(QWidget *parent = nullptr);
    ~studinfo();
         std::map<QString,bool>visited;

private slots:
    void on_backbtn_clicked();

    void reload_combo();
    void reload_table();
    void on_enrollbtn_clicked();

    void on_tablecourse_cellChanged(int row, int column);

private:
    Ui::studinfo *ui;
};

#endif // STUDINFO_H
