/********************************************************************************
** Form generated from reading UI file 'add_prof_menu.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_PROF_MENU_H
#define UI_ADD_PROF_MENU_H

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

class Ui_add_prof_menu
{
public:
    QGridLayout *gridLayout_4;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_3;
    QLabel *icon;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLineEdit *firnameline;
    QLineEdit *ageline;
    QLabel *titlelbl;
    QLineEdit *titleline;
    QLineEdit *mailline;
    QLineEdit *lstnameline;
    QLabel *moblbl;
    QLabel *firnamelbl;
    QLabel *maillbl;
    QLineEdit *mobline;
    QLabel *agelbl;
    QSpacerItem *horizontalSpacer_5;
    QLabel *lstnamelbl;
    QVBoxLayout *verticalLayout;
    QPushButton *addbtn;
    QPushButton *backbtn2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *add_prof_menu)
    {
        if (add_prof_menu->objectName().isEmpty())
            add_prof_menu->setObjectName("add_prof_menu");
        add_prof_menu->resize(1250, 650);
        gridLayout_4 = new QGridLayout(add_prof_menu);
        gridLayout_4->setObjectName("gridLayout_4");
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 0, 1, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        icon = new QLabel(add_prof_menu);
        icon->setObjectName("icon");
        icon->setMinimumSize(QSize(100, 100));
        icon->setMaximumSize(QSize(100, 100));

        gridLayout_3->addWidget(icon, 0, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        firnameline = new QLineEdit(add_prof_menu);
        firnameline->setObjectName("firnameline");

        gridLayout->addWidget(firnameline, 0, 2, 1, 1);

        ageline = new QLineEdit(add_prof_menu);
        ageline->setObjectName("ageline");

        gridLayout->addWidget(ageline, 4, 2, 1, 1);

        titlelbl = new QLabel(add_prof_menu);
        titlelbl->setObjectName("titlelbl");

        gridLayout->addWidget(titlelbl, 3, 0, 1, 1);

        titleline = new QLineEdit(add_prof_menu);
        titleline->setObjectName("titleline");

        gridLayout->addWidget(titleline, 3, 2, 1, 1);

        mailline = new QLineEdit(add_prof_menu);
        mailline->setObjectName("mailline");

        gridLayout->addWidget(mailline, 2, 2, 1, 1);

        lstnameline = new QLineEdit(add_prof_menu);
        lstnameline->setObjectName("lstnameline");

        gridLayout->addWidget(lstnameline, 1, 2, 1, 1);

        moblbl = new QLabel(add_prof_menu);
        moblbl->setObjectName("moblbl");

        gridLayout->addWidget(moblbl, 5, 0, 1, 1);

        firnamelbl = new QLabel(add_prof_menu);
        firnamelbl->setObjectName("firnamelbl");

        gridLayout->addWidget(firnamelbl, 0, 0, 1, 1);

        maillbl = new QLabel(add_prof_menu);
        maillbl->setObjectName("maillbl");

        gridLayout->addWidget(maillbl, 2, 0, 1, 1);

        mobline = new QLineEdit(add_prof_menu);
        mobline->setObjectName("mobline");

        gridLayout->addWidget(mobline, 5, 2, 1, 1);

        agelbl = new QLabel(add_prof_menu);
        agelbl->setObjectName("agelbl");

        gridLayout->addWidget(agelbl, 4, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(218, 208, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 1, 6, 1);

        lstnamelbl = new QLabel(add_prof_menu);
        lstnamelbl->setObjectName("lstnamelbl");

        gridLayout->addWidget(lstnamelbl, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        addbtn = new QPushButton(add_prof_menu);
        addbtn->setObjectName("addbtn");
        addbtn->setMaximumSize(QSize(200, 40));

        verticalLayout->addWidget(addbtn);

        backbtn2 = new QPushButton(add_prof_menu);
        backbtn2->setObjectName("backbtn2");
        backbtn2->setMaximumSize(QSize(200, 40));

        verticalLayout->addWidget(backbtn2);


        gridLayout_2->addLayout(verticalLayout, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 1, 2, 1, 1);


        retranslateUi(add_prof_menu);

        QMetaObject::connectSlotsByName(add_prof_menu);
    } // setupUi

    void retranslateUi(QDialog *add_prof_menu)
    {
        add_prof_menu->setWindowTitle(QCoreApplication::translate("add_prof_menu", "Dialog", nullptr));
        icon->setText(QString());
        titlelbl->setText(QCoreApplication::translate("add_prof_menu", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">Title</span></p></body></html>", nullptr));
        moblbl->setText(QCoreApplication::translate("add_prof_menu", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">Mobile</span></p></body></html>", nullptr));
        firnamelbl->setText(QCoreApplication::translate("add_prof_menu", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">First Name</span></p></body></html>", nullptr));
        maillbl->setText(QCoreApplication::translate("add_prof_menu", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">Mail</span></p></body></html>", nullptr));
        agelbl->setText(QCoreApplication::translate("add_prof_menu", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">Age</span></p></body></html>", nullptr));
        lstnamelbl->setText(QCoreApplication::translate("add_prof_menu", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">Last Name</span></p></body></html>", nullptr));
        addbtn->setText(QCoreApplication::translate("add_prof_menu", "Add Profeesor", nullptr));
        backbtn2->setText(QCoreApplication::translate("add_prof_menu", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_prof_menu: public Ui_add_prof_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_PROF_MENU_H
