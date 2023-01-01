/********************************************************************************
** Form generated from reading UI file 'add_stud_menu.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_STUD_MENU_H
#define UI_ADD_STUD_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_add_stud_menu
{
public:
    QGridLayout *gridLayout_4;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_3;
    QLabel *icon;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *moblbl;
    QLineEdit *lstnameline;
    QLabel *maillbl;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *gradeline;
    QLabel *agelbl;
    QLineEdit *mobline;
    QLineEdit *firnameline;
    QLineEdit *ageline;
    QLabel *gradelbl;
    QLabel *firnamelbl;
    QLabel *lstnamelbl;
    QLineEdit *mailline;
    QVBoxLayout *verticalLayout;
    QPushButton *addbtn;
    QPushButton *backbtn2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *add_stud_menu)
    {
        if (add_stud_menu->objectName().isEmpty())
            add_stud_menu->setObjectName("add_stud_menu");
        add_stud_menu->resize(1292, 684);
        gridLayout_4 = new QGridLayout(add_stud_menu);
        gridLayout_4->setObjectName("gridLayout_4");
        verticalSpacer_2 = new QSpacerItem(538, 73, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(355, 468, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 1, 0, 2, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        icon = new QLabel(add_stud_menu);
        icon->setObjectName("icon");
        icon->setMinimumSize(QSize(100, 100));
        icon->setMaximumSize(QSize(100, 100));

        gridLayout_3->addWidget(icon, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        moblbl = new QLabel(add_stud_menu);
        moblbl->setObjectName("moblbl");

        gridLayout->addWidget(moblbl, 5, 0, 1, 1);

        lstnameline = new QLineEdit(add_stud_menu);
        lstnameline->setObjectName("lstnameline");

        gridLayout->addWidget(lstnameline, 1, 2, 1, 1);

        maillbl = new QLabel(add_stud_menu);
        maillbl->setObjectName("maillbl");

        gridLayout->addWidget(maillbl, 2, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(218, 208, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 1, 6, 1);

        gradeline = new QLineEdit(add_stud_menu);
        gradeline->setObjectName("gradeline");

        gridLayout->addWidget(gradeline, 3, 2, 1, 1);

        agelbl = new QLabel(add_stud_menu);
        agelbl->setObjectName("agelbl");

        gridLayout->addWidget(agelbl, 4, 0, 1, 1);

        mobline = new QLineEdit(add_stud_menu);
        mobline->setObjectName("mobline");

        gridLayout->addWidget(mobline, 5, 2, 1, 1);

        firnameline = new QLineEdit(add_stud_menu);
        firnameline->setObjectName("firnameline");

        gridLayout->addWidget(firnameline, 0, 2, 1, 1);

        ageline = new QLineEdit(add_stud_menu);
        ageline->setObjectName("ageline");

        gridLayout->addWidget(ageline, 4, 2, 1, 1);

        gradelbl = new QLabel(add_stud_menu);
        gradelbl->setObjectName("gradelbl");

        gridLayout->addWidget(gradelbl, 3, 0, 1, 1);

        firnamelbl = new QLabel(add_stud_menu);
        firnamelbl->setObjectName("firnamelbl");

        gridLayout->addWidget(firnamelbl, 0, 0, 1, 1);

        lstnamelbl = new QLabel(add_stud_menu);
        lstnamelbl->setObjectName("lstnamelbl");

        gridLayout->addWidget(lstnamelbl, 1, 0, 1, 1);

        mailline = new QLineEdit(add_stud_menu);
        mailline->setObjectName("mailline");

        gridLayout->addWidget(mailline, 2, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        addbtn = new QPushButton(add_stud_menu);
        addbtn->setObjectName("addbtn");
        addbtn->setMaximumSize(QSize(200, 40));

        verticalLayout->addWidget(addbtn);

        backbtn2 = new QPushButton(add_stud_menu);
        backbtn2->setObjectName("backbtn2");
        backbtn2->setMaximumSize(QSize(200, 40));

        verticalLayout->addWidget(backbtn2);


        gridLayout_2->addLayout(verticalLayout, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(354, 468, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(538, 98, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 2, 1, 1, 1);

        QWidget::setTabOrder(firnameline, lstnameline);
        QWidget::setTabOrder(lstnameline, mailline);
        QWidget::setTabOrder(mailline, gradeline);
        QWidget::setTabOrder(gradeline, ageline);
        QWidget::setTabOrder(ageline, mobline);
        QWidget::setTabOrder(mobline, addbtn);
        QWidget::setTabOrder(addbtn, backbtn2);

        retranslateUi(add_stud_menu);

        QMetaObject::connectSlotsByName(add_stud_menu);
    } // setupUi

    void retranslateUi(QDialog *add_stud_menu)
    {
        add_stud_menu->setWindowTitle(QCoreApplication::translate("add_stud_menu", "Dialog", nullptr));
        icon->setText(QString());
        moblbl->setText(QCoreApplication::translate("add_stud_menu", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">Mobile</span></p></body></html>", nullptr));
        maillbl->setText(QCoreApplication::translate("add_stud_menu", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">Mail</span></p></body></html>", nullptr));
        agelbl->setText(QCoreApplication::translate("add_stud_menu", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">Age</span></p></body></html>", nullptr));
        gradelbl->setText(QCoreApplication::translate("add_stud_menu", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">Grade</span></p></body></html>", nullptr));
        firnamelbl->setText(QCoreApplication::translate("add_stud_menu", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">First Name</span></p></body></html>", nullptr));
        lstnamelbl->setText(QCoreApplication::translate("add_stud_menu", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">Last Name</span></p></body></html>", nullptr));
        addbtn->setText(QCoreApplication::translate("add_stud_menu", "Add Student", nullptr));
        backbtn2->setText(QCoreApplication::translate("add_stud_menu", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_stud_menu: public Ui_add_stud_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_STUD_MENU_H
