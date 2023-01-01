#ifndef NEW_ADMIN_H
#define NEW_ADMIN_H

#include <QDialog>

namespace Ui {
class new_admin;
}

class new_admin : public QDialog
{
    Q_OBJECT

public:
    explicit new_admin(QWidget *parent = nullptr);
    ~new_admin();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_txt_pass2_textEdited(const QString &arg1);

private:
    Ui::new_admin *ui;
};

#endif // NEW_ADMIN_H
