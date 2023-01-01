/********************************************************************************
** Form generated from reading UI file 'error.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERROR_H
#define UI_ERROR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_error
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *error)
    {
        if (error->objectName().isEmpty())
            error->setObjectName("error");
        error->resize(400, 300);
        verticalLayout = new QVBoxLayout(error);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        pushButton = new QPushButton(error);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 3, 1, 1, 1);

        label = new QLabel(error);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(error);

        QMetaObject::connectSlotsByName(error);
    } // setupUi

    void retranslateUi(QDialog *error)
    {
        error->setWindowTitle(QCoreApplication::translate("error", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("error", "OK", nullptr));
        label->setText(QCoreApplication::translate("error", "Wrong password or username please try again !", nullptr));
    } // retranslateUi

};

namespace Ui {
    class error: public Ui_error {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERROR_H
