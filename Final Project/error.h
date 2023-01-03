#ifndef ERROR_H
#define ERROR_H

#include <QDialog>

namespace Ui {
class error;
}

class error : public QDialog
{
    Q_OBJECT

public:
    explicit error(QWidget *parent = nullptr);
    ~error();

private slots:
    void on_pushButton_clicked();

private:
    ///@brief sets a pointer to error class
    Ui::error *ui;
};

#endif // ERROR_H
