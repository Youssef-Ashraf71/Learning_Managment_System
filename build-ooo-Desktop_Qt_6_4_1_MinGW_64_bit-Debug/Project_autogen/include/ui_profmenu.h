/********************************************************************************
** Form generated from reading UI file 'profmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFMENU_H
#define UI_PROFMENU_H

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

class Ui_profmenu
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QLineEdit *srchbar;
    QPushButton *applyfltr;
    QPushButton *backbtn;
    QLineEdit *fltrbar;
    QPushButton *srchbtn;
    QPushButton *addbtn;
    QPushButton *clearbtn;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QTableWidget *tableprof;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *profmenu)
    {
        if (profmenu->objectName().isEmpty())
            profmenu->setObjectName("profmenu");
        profmenu->resize(1023, 600);
        profmenu->setMaximumSize(QSize(1023, 685));
        centralwidget = new QWidget(profmenu);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName("gridLayout_2");
        srchbar = new QLineEdit(widget);
        srchbar->setObjectName("srchbar");

        gridLayout_2->addWidget(srchbar, 1, 0, 1, 1);

        applyfltr = new QPushButton(widget);
        applyfltr->setObjectName("applyfltr");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(applyfltr->sizePolicy().hasHeightForWidth());
        applyfltr->setSizePolicy(sizePolicy);
        applyfltr->setMinimumSize(QSize(0, 0));

        gridLayout_2->addWidget(applyfltr, 0, 2, 1, 1);

        backbtn = new QPushButton(widget);
        backbtn->setObjectName("backbtn");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(backbtn->sizePolicy().hasHeightForWidth());
        backbtn->setSizePolicy(sizePolicy1);
        backbtn->setMaximumSize(QSize(200, 30));

        gridLayout_2->addWidget(backbtn, 5, 0, 1, 1);

        fltrbar = new QLineEdit(widget);
        fltrbar->setObjectName("fltrbar");

        gridLayout_2->addWidget(fltrbar, 0, 0, 1, 1);

        srchbtn = new QPushButton(widget);
        srchbtn->setObjectName("srchbtn");

        gridLayout_2->addWidget(srchbtn, 1, 2, 1, 1);

        addbtn = new QPushButton(widget);
        addbtn->setObjectName("addbtn");
        sizePolicy1.setHeightForWidth(addbtn->sizePolicy().hasHeightForWidth());
        addbtn->setSizePolicy(sizePolicy1);
        addbtn->setMaximumSize(QSize(200, 30));

        gridLayout_2->addWidget(addbtn, 4, 0, 1, 1);

        clearbtn = new QPushButton(widget);
        clearbtn->setObjectName("clearbtn");

        gridLayout_2->addWidget(clearbtn, 2, 2, 1, 1);

        widget_3 = new QWidget(widget);
        widget_3->setObjectName("widget_3");

        gridLayout_2->addWidget(widget_3, 2, 0, 2, 1);


        verticalLayout->addWidget(widget);


        horizontalLayout->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName("gridLayout");
        tableprof = new QTableWidget(widget_2);
        if (tableprof->columnCount() < 3)
            tableprof->setColumnCount(3);
        QFont font;
        font.setPointSize(12);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        tableprof->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        tableprof->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        tableprof->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableprof->setObjectName("tableprof");

        gridLayout->addWidget(tableprof, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(widget_2);


        horizontalLayout->addLayout(horizontalLayout_2);

        profmenu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(profmenu);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1023, 21));
        profmenu->setMenuBar(menubar);
        statusbar = new QStatusBar(profmenu);
        statusbar->setObjectName("statusbar");
        profmenu->setStatusBar(statusbar);

        retranslateUi(profmenu);

        QMetaObject::connectSlotsByName(profmenu);
    } // setupUi

    void retranslateUi(QMainWindow *profmenu)
    {
        profmenu->setWindowTitle(QCoreApplication::translate("profmenu", "MainWindow", nullptr));
        srchbar->setPlaceholderText(QCoreApplication::translate("profmenu", "Search by ID", nullptr));
        applyfltr->setText(QCoreApplication::translate("profmenu", "Apply", nullptr));
        backbtn->setText(QCoreApplication::translate("profmenu", "Back", nullptr));
        fltrbar->setText(QString());
        fltrbar->setPlaceholderText(QCoreApplication::translate("profmenu", "Filter by Title", nullptr));
        srchbtn->setText(QCoreApplication::translate("profmenu", "Search", nullptr));
        addbtn->setText(QCoreApplication::translate("profmenu", "Add Professor", nullptr));
        clearbtn->setText(QCoreApplication::translate("profmenu", "Clear", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableprof->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("profmenu", "Professor Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableprof->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("profmenu", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableprof->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("profmenu", "Title", nullptr));
    } // retranslateUi

};

namespace Ui {
    class profmenu: public Ui_profmenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFMENU_H
