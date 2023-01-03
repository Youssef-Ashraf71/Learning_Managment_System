/********************************************************************************
** Form generated from reading UI file 'courseinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSEINFO_H
#define UI_COURSEINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Courseinfo
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *lbl_ID;
    QLabel *label_4;
    QLabel *lbl_time;
    QLineEdit *txt_filter;
    QLabel *lbl_hall;
    QLabel *label;
    QTableWidget *tbl_stud;
    QPushButton *btn_filter;
    QLabel *label_7;
    QTableWidget *tbl_prof;
    QLabel *label_2;
    QComboBox *combo_filter;
    QLabel *lbl_title;
    QPushButton *pushButton;
    QPushButton *btn_clear_filter;
    QLabel *label_3;
    QLabel *lbl_T;
    QComboBox *combo_newstud;
    QComboBox *combo_newprof;
    QPushButton *btn_enroll;
    QPushButton *btn_assign;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Courseinfo)
    {
        if (Courseinfo->objectName().isEmpty())
            Courseinfo->setObjectName("Courseinfo");
        Courseinfo->resize(950, 500);
        centralwidget = new QWidget(Courseinfo);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        lbl_ID = new QLabel(centralwidget);
        lbl_ID->setObjectName("lbl_ID");

        gridLayout->addWidget(lbl_ID, 2, 1, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        QFont font;
        font.setBold(true);
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        lbl_time = new QLabel(centralwidget);
        lbl_time->setObjectName("lbl_time");

        gridLayout->addWidget(lbl_time, 4, 1, 1, 3);

        txt_filter = new QLineEdit(centralwidget);
        txt_filter->setObjectName("txt_filter");

        gridLayout->addWidget(txt_filter, 10, 0, 1, 1);

        lbl_hall = new QLabel(centralwidget);
        lbl_hall->setObjectName("lbl_hall");

        gridLayout->addWidget(lbl_hall, 3, 1, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setFont(font);

        gridLayout->addWidget(label, 3, 0, 1, 1);

        tbl_stud = new QTableWidget(centralwidget);
        if (tbl_stud->columnCount() < 3)
            tbl_stud->setColumnCount(3);
        tbl_stud->setObjectName("tbl_stud");
        tbl_stud->setEnabled(true);
        tbl_stud->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::SelectedClicked);
        tbl_stud->setColumnCount(3);

        gridLayout->addWidget(tbl_stud, 6, 0, 1, 1);

        btn_filter = new QPushButton(centralwidget);
        btn_filter->setObjectName("btn_filter");

        gridLayout->addWidget(btn_filter, 7, 1, 1, 1);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setFont(font);

        gridLayout->addWidget(label_7, 4, 0, 1, 1);

        tbl_prof = new QTableWidget(centralwidget);
        if (tbl_prof->columnCount() < 1)
            tbl_prof->setColumnCount(1);
        tbl_prof->setObjectName("tbl_prof");
        tbl_prof->setEnabled(true);
        tbl_prof->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tbl_prof->setColumnCount(1);

        gridLayout->addWidget(tbl_prof, 6, 7, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        combo_filter = new QComboBox(centralwidget);
        combo_filter->setObjectName("combo_filter");

        gridLayout->addWidget(combo_filter, 7, 0, 1, 1);

        lbl_title = new QLabel(centralwidget);
        lbl_title->setObjectName("lbl_title");
        lbl_title->setEnabled(true);

        gridLayout->addWidget(lbl_title, 1, 1, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMaximumSize(QSize(100, 25));

        gridLayout->addWidget(pushButton, 10, 8, 1, 1);

        btn_clear_filter = new QPushButton(centralwidget);
        btn_clear_filter->setObjectName("btn_clear_filter");

        gridLayout->addWidget(btn_clear_filter, 10, 1, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 5, 0, 1, 1);

        lbl_T = new QLabel(centralwidget);
        lbl_T->setObjectName("lbl_T");

        gridLayout->addWidget(lbl_T, 5, 1, 1, 1);

        combo_newstud = new QComboBox(centralwidget);
        combo_newstud->setObjectName("combo_newstud");

        gridLayout->addWidget(combo_newstud, 1, 7, 1, 1);

        combo_newprof = new QComboBox(centralwidget);
        combo_newprof->setObjectName("combo_newprof");

        gridLayout->addWidget(combo_newprof, 4, 7, 1, 1);

        btn_enroll = new QPushButton(centralwidget);
        btn_enroll->setObjectName("btn_enroll");

        gridLayout->addWidget(btn_enroll, 1, 8, 1, 1);

        btn_assign = new QPushButton(centralwidget);
        btn_assign->setObjectName("btn_assign");

        gridLayout->addWidget(btn_assign, 4, 8, 1, 1);

        Courseinfo->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Courseinfo);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 950, 21));
        Courseinfo->setMenuBar(menubar);
        statusbar = new QStatusBar(Courseinfo);
        statusbar->setObjectName("statusbar");
        Courseinfo->setStatusBar(statusbar);

        retranslateUi(Courseinfo);

        QMetaObject::connectSlotsByName(Courseinfo);
    } // setupUi

    void retranslateUi(QMainWindow *Courseinfo)
    {
        Courseinfo->setWindowTitle(QCoreApplication::translate("Courseinfo", "MainWindow", nullptr));
        lbl_ID->setText(QCoreApplication::translate("Courseinfo", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("Courseinfo", "Course ID :", nullptr));
        lbl_time->setText(QCoreApplication::translate("Courseinfo", "TextLabel", nullptr));
        txt_filter->setPlaceholderText(QCoreApplication::translate("Courseinfo", "Enter grade", nullptr));
        lbl_hall->setText(QCoreApplication::translate("Courseinfo", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("Courseinfo", "Lecture Hall :", nullptr));
        btn_filter->setText(QCoreApplication::translate("Courseinfo", "Apply", nullptr));
        label_7->setText(QCoreApplication::translate("Courseinfo", "Day :", nullptr));
        label_2->setText(QCoreApplication::translate("Courseinfo", "Course Title : ", nullptr));
        combo_filter->setPlaceholderText(QCoreApplication::translate("Courseinfo", "Choose filter relation", nullptr));
        lbl_title->setText(QCoreApplication::translate("Courseinfo", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("Courseinfo", "OK", nullptr));
        btn_clear_filter->setText(QCoreApplication::translate("Courseinfo", "clear", nullptr));
        label_3->setText(QCoreApplication::translate("Courseinfo", "Time :", nullptr));
        lbl_T->setText(QCoreApplication::translate("Courseinfo", "TextLabel", nullptr));
        combo_newstud->setPlaceholderText(QCoreApplication::translate("Courseinfo", "Enroll new student", nullptr));
        combo_newprof->setPlaceholderText(QCoreApplication::translate("Courseinfo", "Assign new professor", nullptr));
        btn_enroll->setText(QCoreApplication::translate("Courseinfo", "Enroll", nullptr));
        btn_assign->setText(QCoreApplication::translate("Courseinfo", "Assign", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Courseinfo: public Ui_Courseinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSEINFO_H
