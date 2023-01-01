/********************************************************************************
** Form generated from reading UI file 'new_admin.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_ADMIN_H
#define UI_NEW_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_new_admin
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *txt_pass2;
    QPushButton *pushButton;
    QLineEdit *txt_pass1;
    QLabel *label;
    QLineEdit *txt_username;
    QLabel *label_3;
    QPushButton *pushButton_2;

    void setupUi(QDialog *new_admin)
    {
        if (new_admin->objectName().isEmpty())
            new_admin->setObjectName("new_admin");
        new_admin->resize(693, 300);
        gridLayout = new QGridLayout(new_admin);
        gridLayout->setObjectName("gridLayout");
        label_2 = new QLabel(new_admin);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        txt_pass2 = new QLineEdit(new_admin);
        txt_pass2->setObjectName("txt_pass2");
        txt_pass2->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(txt_pass2, 3, 1, 1, 1);

        pushButton = new QPushButton(new_admin);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(0, 0));
        pushButton->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(pushButton, 4, 1, 1, 1);

        txt_pass1 = new QLineEdit(new_admin);
        txt_pass1->setObjectName("txt_pass1");
        txt_pass1->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(txt_pass1, 2, 1, 1, 1);

        label = new QLabel(new_admin);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 0, 1, 1);

        txt_username = new QLineEdit(new_admin);
        txt_username->setObjectName("txt_username");

        gridLayout->addWidget(txt_username, 1, 1, 1, 1);

        label_3 = new QLabel(new_admin);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        pushButton_2 = new QPushButton(new_admin);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout->addWidget(pushButton_2, 5, 1, 1, 1);

        QWidget::setTabOrder(txt_username, txt_pass1);
        QWidget::setTabOrder(txt_pass1, txt_pass2);
        QWidget::setTabOrder(txt_pass2, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);

        retranslateUi(new_admin);

        QMetaObject::connectSlotsByName(new_admin);
    } // setupUi

    void retranslateUi(QDialog *new_admin)
    {
        new_admin->setWindowTitle(QCoreApplication::translate("new_admin", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("new_admin", "Password", nullptr));
        pushButton->setText(QCoreApplication::translate("new_admin", "Add", nullptr));
        label->setText(QCoreApplication::translate("new_admin", "Username", nullptr));
        label_3->setText(QCoreApplication::translate("new_admin", "Confirm password", nullptr));
        pushButton_2->setText(QCoreApplication::translate("new_admin", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class new_admin: public Ui_new_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_ADMIN_H
