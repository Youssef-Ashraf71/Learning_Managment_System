/********************************************************************************
** Form generated from reading UI file 'studinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDINFO_H
#define UI_STUDINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_studinfo
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QGridLayout *gridLayout_6;
    QWidget *widget_3;
    QGridLayout *gridLayout_4;
    QPushButton *enrollbtn;
    QPushButton *backbtn;
    QComboBox *courses_combo;
    QWidget *widget_4;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_8;
    QLabel *lbl_grade;
    QLabel *lbl_age;
    QLabel *lbl_mail;
    QLabel *Name;
    QLabel *lbl_name;
    QLabel *grade;
    QLabel *lbl_mob;
    QLabel *lbl_id;
    QLabel *id;
    QLabel *age;
    QLabel *mail;
    QLabel *mob;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget_2;
    QGridLayout *gridLayout_7;
    QWidget *widget_5;
    QGridLayout *gridLayout_5;
    QTableWidget *tablecourse;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *studinfo)
    {
        if (studinfo->objectName().isEmpty())
            studinfo->setObjectName("studinfo");
        studinfo->resize(950, 500);
        centralwidget = new QWidget(studinfo);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_5 = new QHBoxLayout(centralwidget);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        gridLayout_6 = new QGridLayout(widget);
        gridLayout_6->setObjectName("gridLayout_6");
        widget_3 = new QWidget(widget);
        widget_3->setObjectName("widget_3");
        gridLayout_4 = new QGridLayout(widget_3);
        gridLayout_4->setObjectName("gridLayout_4");
        enrollbtn = new QPushButton(widget_3);
        enrollbtn->setObjectName("enrollbtn");

        gridLayout_4->addWidget(enrollbtn, 4, 1, 1, 1);

        backbtn = new QPushButton(widget_3);
        backbtn->setObjectName("backbtn");
        backbtn->setMaximumSize(QSize(200, 30));

        gridLayout_4->addWidget(backbtn, 5, 0, 1, 1);

        courses_combo = new QComboBox(widget_3);
        courses_combo->setObjectName("courses_combo");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(courses_combo->sizePolicy().hasHeightForWidth());
        courses_combo->setSizePolicy(sizePolicy);
        courses_combo->setStyleSheet(QString::fromUtf8("QComboBox::placeholder { color: white; }"));
        courses_combo->setPlaceholderText(QString::fromUtf8("Choose Course"));

        gridLayout_4->addWidget(courses_combo, 4, 0, 1, 1);

        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName("widget_4");
        widget_4->setMaximumSize(QSize(500, 200));
        gridLayout_9 = new QGridLayout(widget_4);
        gridLayout_9->setObjectName("gridLayout_9");
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName("gridLayout_8");
        lbl_grade = new QLabel(widget_4);
        lbl_grade->setObjectName("lbl_grade");

        gridLayout_8->addWidget(lbl_grade, 2, 1, 1, 1);

        lbl_age = new QLabel(widget_4);
        lbl_age->setObjectName("lbl_age");

        gridLayout_8->addWidget(lbl_age, 3, 1, 1, 1);

        lbl_mail = new QLabel(widget_4);
        lbl_mail->setObjectName("lbl_mail");

        gridLayout_8->addWidget(lbl_mail, 1, 1, 1, 1);

        Name = new QLabel(widget_4);
        Name->setObjectName("Name");

        gridLayout_8->addWidget(Name, 0, 0, 1, 1);

        lbl_name = new QLabel(widget_4);
        lbl_name->setObjectName("lbl_name");

        gridLayout_8->addWidget(lbl_name, 0, 1, 1, 1);

        grade = new QLabel(widget_4);
        grade->setObjectName("grade");

        gridLayout_8->addWidget(grade, 2, 0, 1, 1);

        lbl_mob = new QLabel(widget_4);
        lbl_mob->setObjectName("lbl_mob");

        gridLayout_8->addWidget(lbl_mob, 5, 1, 1, 1);

        lbl_id = new QLabel(widget_4);
        lbl_id->setObjectName("lbl_id");

        gridLayout_8->addWidget(lbl_id, 4, 1, 1, 1);

        id = new QLabel(widget_4);
        id->setObjectName("id");

        gridLayout_8->addWidget(id, 4, 0, 1, 1);

        age = new QLabel(widget_4);
        age->setObjectName("age");

        gridLayout_8->addWidget(age, 3, 0, 1, 1);

        mail = new QLabel(widget_4);
        mail->setObjectName("mail");

        gridLayout_8->addWidget(mail, 1, 0, 1, 1);

        mob = new QLabel(widget_4);
        mob->setObjectName("mob");

        gridLayout_8->addWidget(mob, 5, 0, 1, 1);


        gridLayout_9->addLayout(gridLayout_8, 0, 0, 1, 1);


        gridLayout_4->addWidget(widget_4, 2, 0, 1, 1);

        widget_6 = new QWidget(widget_3);
        widget_6->setObjectName("widget_6");

        gridLayout_4->addWidget(widget_6, 3, 0, 1, 2);


        gridLayout_6->addWidget(widget_3, 0, 0, 1, 1);


        verticalLayout_2->addWidget(widget);


        horizontalLayout_5->addLayout(verticalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        gridLayout_7 = new QGridLayout(widget_2);
        gridLayout_7->setObjectName("gridLayout_7");
        widget_5 = new QWidget(widget_2);
        widget_5->setObjectName("widget_5");
        gridLayout_5 = new QGridLayout(widget_5);
        gridLayout_5->setObjectName("gridLayout_5");
        tablecourse = new QTableWidget(widget_5);
        if (tablecourse->columnCount() < 2)
            tablecourse->setColumnCount(2);
        QFont font;
        font.setPointSize(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        tablecourse->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        tablecourse->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tablecourse->setObjectName("tablecourse");

        gridLayout_5->addWidget(tablecourse, 0, 0, 1, 1);


        gridLayout_7->addWidget(widget_5, 0, 0, 1, 1);


        horizontalLayout_4->addWidget(widget_2);


        horizontalLayout_5->addLayout(horizontalLayout_4);

        studinfo->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(studinfo);
        statusbar->setObjectName("statusbar");
        studinfo->setStatusBar(statusbar);
        menubar = new QMenuBar(studinfo);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 950, 21));
        studinfo->setMenuBar(menubar);

        retranslateUi(studinfo);

        QMetaObject::connectSlotsByName(studinfo);
    } // setupUi

    void retranslateUi(QMainWindow *studinfo)
    {
        studinfo->setWindowTitle(QCoreApplication::translate("studinfo", "MainWindow", nullptr));
        enrollbtn->setText(QCoreApplication::translate("studinfo", "Enroll to The Course", nullptr));
        backbtn->setText(QCoreApplication::translate("studinfo", "Back", nullptr));
        lbl_grade->setText(QCoreApplication::translate("studinfo", "<html><head/><body><p><br/></p></body></html>", nullptr));
        lbl_age->setText(QCoreApplication::translate("studinfo", "<html><head/><body><p><br/></p></body></html>", nullptr));
        lbl_mail->setText(QCoreApplication::translate("studinfo", "<html><head/><body><p><br/></p></body></html>", nullptr));
        Name->setText(QCoreApplication::translate("studinfo", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">Name</span></p></body></html>", nullptr));
        lbl_name->setText(QCoreApplication::translate("studinfo", "<html><head/><body><p><br/></p></body></html>", nullptr));
        grade->setText(QCoreApplication::translate("studinfo", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">Grade</span></p></body></html>", nullptr));
        lbl_mob->setText(QCoreApplication::translate("studinfo", "<html><head/><body><p><br/></p></body></html>", nullptr));
        lbl_id->setText(QCoreApplication::translate("studinfo", "<html><head/><body><p><br/></p></body></html>", nullptr));
        id->setText(QCoreApplication::translate("studinfo", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">ID</span></p></body></html>", nullptr));
        age->setText(QCoreApplication::translate("studinfo", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">Age </span></p></body></html>", nullptr));
        mail->setText(QCoreApplication::translate("studinfo", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">Mail</span></p></body></html>", nullptr));
        mob->setText(QCoreApplication::translate("studinfo", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">Mobile</span></p></body></html>", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tablecourse->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("studinfo", "Courses", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tablecourse->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("studinfo", "Grade", nullptr));
    } // retranslateUi

};

namespace Ui {
    class studinfo: public Ui_studinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDINFO_H
