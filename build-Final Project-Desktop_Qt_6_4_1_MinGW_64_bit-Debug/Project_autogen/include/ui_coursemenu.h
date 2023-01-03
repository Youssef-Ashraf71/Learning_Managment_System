/********************************************************************************
** Form generated from reading UI file 'coursemenu.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSEMENU_H
#define UI_COURSEMENU_H

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

class Ui_coursemenu
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QWidget *widget_2;
    QPushButton *backbtncourse;
    QPushButton *pushButton;
    QPushButton *btn_add;
    QLineEdit *lbl_filter;
    QLineEdit *lbl_search;
    QPushButton *btn_filter;
    QPushButton *btn_search;
    QWidget *widget_3;
    QGridLayout *gridLayout_4;
    QTableWidget *tbl_course;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *coursemenu)
    {
        if (coursemenu->objectName().isEmpty())
            coursemenu->setObjectName("coursemenu");
        coursemenu->resize(1149, 675);
        centralwidget = new QWidget(coursemenu);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName("gridLayout_3");
        widget_2 = new QWidget(widget);
        widget_2->setObjectName("widget_2");

        gridLayout_3->addWidget(widget_2, 4, 0, 1, 4);

        backbtncourse = new QPushButton(widget);
        backbtncourse->setObjectName("backbtncourse");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(backbtncourse->sizePolicy().hasHeightForWidth());
        backbtncourse->setSizePolicy(sizePolicy);
        backbtncourse->setMaximumSize(QSize(200, 30));

        gridLayout_3->addWidget(backbtncourse, 11, 0, 1, 1);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        gridLayout_3->addWidget(pushButton, 3, 1, 1, 1);

        btn_add = new QPushButton(widget);
        btn_add->setObjectName("btn_add");
        sizePolicy.setHeightForWidth(btn_add->sizePolicy().hasHeightForWidth());
        btn_add->setSizePolicy(sizePolicy);
        btn_add->setMaximumSize(QSize(200, 30));

        gridLayout_3->addWidget(btn_add, 8, 0, 1, 1);

        lbl_filter = new QLineEdit(widget);
        lbl_filter->setObjectName("lbl_filter");

        gridLayout_3->addWidget(lbl_filter, 0, 0, 1, 1);

        lbl_search = new QLineEdit(widget);
        lbl_search->setObjectName("lbl_search");

        gridLayout_3->addWidget(lbl_search, 1, 0, 1, 1);

        btn_filter = new QPushButton(widget);
        btn_filter->setObjectName("btn_filter");

        gridLayout_3->addWidget(btn_filter, 0, 1, 1, 1);

        btn_search = new QPushButton(widget);
        btn_search->setObjectName("btn_search");

        gridLayout_3->addWidget(btn_search, 1, 1, 1, 1);


        verticalLayout->addWidget(widget);


        horizontalLayout->addLayout(verticalLayout);

        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName("widget_3");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy1);
        gridLayout_4 = new QGridLayout(widget_3);
        gridLayout_4->setObjectName("gridLayout_4");
        tbl_course = new QTableWidget(widget_3);
        if (tbl_course->columnCount() < 3)
            tbl_course->setColumnCount(3);
        tbl_course->setObjectName("tbl_course");
        tbl_course->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tbl_course->setColumnCount(3);
        tbl_course->horizontalHeader()->setCascadingSectionResizes(false);
        tbl_course->horizontalHeader()->setMinimumSectionSize(43);
        tbl_course->horizontalHeader()->setDefaultSectionSize(232);

        gridLayout_4->addWidget(tbl_course, 0, 0, 1, 1);


        horizontalLayout->addWidget(widget_3);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        coursemenu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(coursemenu);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1149, 21));
        coursemenu->setMenuBar(menubar);
        statusbar = new QStatusBar(coursemenu);
        statusbar->setObjectName("statusbar");
        coursemenu->setStatusBar(statusbar);

        retranslateUi(coursemenu);

        QMetaObject::connectSlotsByName(coursemenu);
    } // setupUi

    void retranslateUi(QMainWindow *coursemenu)
    {
        coursemenu->setWindowTitle(QCoreApplication::translate("coursemenu", "MainWindow", nullptr));
        backbtncourse->setText(QCoreApplication::translate("coursemenu", "Back", nullptr));
        pushButton->setText(QCoreApplication::translate("coursemenu", "Clear", nullptr));
        btn_add->setText(QCoreApplication::translate("coursemenu", "Add Course", nullptr));
        lbl_filter->setPlaceholderText(QCoreApplication::translate("coursemenu", "Filter by Supervisor", nullptr));
        lbl_search->setPlaceholderText(QCoreApplication::translate("coursemenu", "Search by Course Code", nullptr));
        btn_filter->setText(QCoreApplication::translate("coursemenu", "Apply", nullptr));
        btn_search->setText(QCoreApplication::translate("coursemenu", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class coursemenu: public Ui_coursemenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSEMENU_H
