/********************************************************************************
** Form generated from reading UI file 'studmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDMENU_H
#define UI_STUDMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_studmenu
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QPushButton *backbtn;
    QLineEdit *fltrbar;
    QLineEdit *srchbar;
    QPushButton *addbtn;
    QPushButton *srchbtn;
    QPushButton *applyfltr;
    QWidget *widget_2;
    QPushButton *clearbrn;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget_3;
    QGridLayout *gridLayout;
    QTableWidget *tablestud;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *studmenu)
    {
        if (studmenu->objectName().isEmpty())
            studmenu->setObjectName("studmenu");
        studmenu->resize(1149, 675);
        centralwidget = new QWidget(studmenu);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName("gridLayout_2");
        backbtn = new QPushButton(widget);
        backbtn->setObjectName("backbtn");
        backbtn->setMaximumSize(QSize(200, 30));

        gridLayout_2->addWidget(backbtn, 5, 0, 1, 1);

        fltrbar = new QLineEdit(widget);
        fltrbar->setObjectName("fltrbar");

        gridLayout_2->addWidget(fltrbar, 0, 0, 1, 1);

        srchbar = new QLineEdit(widget);
        srchbar->setObjectName("srchbar");

        gridLayout_2->addWidget(srchbar, 1, 0, 1, 1);

        addbtn = new QPushButton(widget);
        addbtn->setObjectName("addbtn");
        addbtn->setMaximumSize(QSize(200, 30));

        gridLayout_2->addWidget(addbtn, 4, 0, 1, 1);

        srchbtn = new QPushButton(widget);
        srchbtn->setObjectName("srchbtn");

        gridLayout_2->addWidget(srchbtn, 1, 1, 1, 1);

        applyfltr = new QPushButton(widget);
        applyfltr->setObjectName("applyfltr");

        gridLayout_2->addWidget(applyfltr, 0, 1, 1, 1);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName("widget_2");

        gridLayout_2->addWidget(widget_2, 3, 0, 1, 1);

        clearbrn = new QPushButton(widget);
        clearbrn->setObjectName("clearbrn");

        gridLayout_2->addWidget(clearbrn, 2, 1, 1, 1);


        verticalLayout_4->addWidget(widget);


        horizontalLayout->addLayout(verticalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName("widget_3");
        gridLayout = new QGridLayout(widget_3);
        gridLayout->setObjectName("gridLayout");
        tablestud = new QTableWidget(widget_3);
        if (tablestud->columnCount() < 3)
            tablestud->setColumnCount(3);
        QFont font;
        font.setPointSize(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        tablestud->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        tablestud->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        tablestud->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tablestud->setObjectName("tablestud");

        gridLayout->addWidget(tablestud, 0, 0, 1, 1);


        horizontalLayout_3->addWidget(widget_3);


        horizontalLayout->addLayout(horizontalLayout_3);

        studmenu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(studmenu);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1149, 21));
        studmenu->setMenuBar(menubar);
        statusbar = new QStatusBar(studmenu);
        statusbar->setObjectName("statusbar");
        studmenu->setStatusBar(statusbar);

        retranslateUi(studmenu);

        QMetaObject::connectSlotsByName(studmenu);
    } // setupUi

    void retranslateUi(QMainWindow *studmenu)
    {
        studmenu->setWindowTitle(QCoreApplication::translate("studmenu", "MainWindow", nullptr));
        backbtn->setText(QCoreApplication::translate("studmenu", "Back", nullptr));
        fltrbar->setPlaceholderText(QCoreApplication::translate("studmenu", "Filter By Grade", nullptr));
        srchbar->setPlaceholderText(QCoreApplication::translate("studmenu", "Search By Name", nullptr));
        addbtn->setText(QCoreApplication::translate("studmenu", "Add Student", nullptr));
        srchbtn->setText(QCoreApplication::translate("studmenu", "Search", nullptr));
        applyfltr->setText(QCoreApplication::translate("studmenu", "Apply", nullptr));
        clearbrn->setText(QCoreApplication::translate("studmenu", "Clear", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tablestud->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("studmenu", "Student Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tablestud->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("studmenu", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tablestud->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("studmenu", "Grade", nullptr));
    } // retranslateUi

};

namespace Ui {
    class studmenu: public Ui_studmenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDMENU_H
