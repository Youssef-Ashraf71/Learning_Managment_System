/********************************************************************************
** Form generated from reading UI file 'profinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFINFO_H
#define UI_PROFINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_profinfo
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_3;
    QGridLayout *gridLayout;
    QLabel *mobile;
    QLabel *name;
    QLabel *lbl_name;
    QLabel *lbl_mob;
    QLabel *age;
    QLabel *lbl_age;
    QLabel *mail;
    QLabel *lbl_mail;
    QLabel *id;
    QLabel *title;
    QLabel *lbl_title;
    QLabel *lbl_id;
    QWidget *widget_4;
    QPushButton *backbtn;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_3;
    QTableWidget *tablecourse;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *profinfo)
    {
        if (profinfo->objectName().isEmpty())
            profinfo->setObjectName("profinfo");
        profinfo->resize(763, 460);
        centralwidget = new QWidget(profinfo);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_4 = new QHBoxLayout(centralwidget);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        widget_3 = new QWidget(widget);
        widget_3->setObjectName("widget_3");
        gridLayout = new QGridLayout(widget_3);
        gridLayout->setObjectName("gridLayout");
        mobile = new QLabel(widget_3);
        mobile->setObjectName("mobile");
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mobile->sizePolicy().hasHeightForWidth());
        mobile->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mobile, 6, 0, 1, 1);

        name = new QLabel(widget_3);
        name->setObjectName("name");
        sizePolicy.setHeightForWidth(name->sizePolicy().hasHeightForWidth());
        name->setSizePolicy(sizePolicy);

        gridLayout->addWidget(name, 0, 0, 1, 1);

        lbl_name = new QLabel(widget_3);
        lbl_name->setObjectName("lbl_name");
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lbl_name->sizePolicy().hasHeightForWidth());
        lbl_name->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(lbl_name, 0, 1, 1, 1);

        lbl_mob = new QLabel(widget_3);
        lbl_mob->setObjectName("lbl_mob");
        sizePolicy1.setHeightForWidth(lbl_mob->sizePolicy().hasHeightForWidth());
        lbl_mob->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(lbl_mob, 6, 1, 1, 1);

        age = new QLabel(widget_3);
        age->setObjectName("age");
        sizePolicy.setHeightForWidth(age->sizePolicy().hasHeightForWidth());
        age->setSizePolicy(sizePolicy);

        gridLayout->addWidget(age, 4, 0, 1, 1);

        lbl_age = new QLabel(widget_3);
        lbl_age->setObjectName("lbl_age");
        sizePolicy1.setHeightForWidth(lbl_age->sizePolicy().hasHeightForWidth());
        lbl_age->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(lbl_age, 4, 1, 1, 1);

        mail = new QLabel(widget_3);
        mail->setObjectName("mail");
        sizePolicy.setHeightForWidth(mail->sizePolicy().hasHeightForWidth());
        mail->setSizePolicy(sizePolicy);

        gridLayout->addWidget(mail, 3, 0, 1, 1);

        lbl_mail = new QLabel(widget_3);
        lbl_mail->setObjectName("lbl_mail");
        sizePolicy1.setHeightForWidth(lbl_mail->sizePolicy().hasHeightForWidth());
        lbl_mail->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(lbl_mail, 3, 1, 1, 1);

        id = new QLabel(widget_3);
        id->setObjectName("id");

        gridLayout->addWidget(id, 2, 0, 1, 1);

        title = new QLabel(widget_3);
        title->setObjectName("title");
        sizePolicy.setHeightForWidth(title->sizePolicy().hasHeightForWidth());
        title->setSizePolicy(sizePolicy);

        gridLayout->addWidget(title, 1, 0, 1, 1);

        lbl_title = new QLabel(widget_3);
        lbl_title->setObjectName("lbl_title");
        sizePolicy1.setHeightForWidth(lbl_title->sizePolicy().hasHeightForWidth());
        lbl_title->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(lbl_title, 1, 1, 1, 1);

        lbl_id = new QLabel(widget_3);
        lbl_id->setObjectName("lbl_id");

        gridLayout->addWidget(lbl_id, 2, 1, 1, 1);


        verticalLayout_2->addWidget(widget_3);

        widget_4 = new QWidget(widget);
        widget_4->setObjectName("widget_4");

        verticalLayout_2->addWidget(widget_4);

        backbtn = new QPushButton(widget);
        backbtn->setObjectName("backbtn");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(70);
        sizePolicy2.setVerticalStretch(30);
        sizePolicy2.setHeightForWidth(backbtn->sizePolicy().hasHeightForWidth());
        backbtn->setSizePolicy(sizePolicy2);
        backbtn->setMaximumSize(QSize(200, 30));

        verticalLayout_2->addWidget(backbtn);


        horizontalLayout_4->addWidget(widget);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        horizontalLayout_3 = new QHBoxLayout(widget_2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        tablecourse = new QTableWidget(widget_2);
        if (tablecourse->columnCount() < 2)
            tablecourse->setColumnCount(2);
        QFont font;
        font.setPointSize(12);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        tablecourse->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        tablecourse->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tablecourse->setObjectName("tablecourse");

        horizontalLayout_3->addWidget(tablecourse);


        horizontalLayout_4->addWidget(widget_2);

        profinfo->setCentralWidget(centralwidget);
        menubar = new QMenuBar(profinfo);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 763, 21));
        profinfo->setMenuBar(menubar);
        statusbar = new QStatusBar(profinfo);
        statusbar->setObjectName("statusbar");
        profinfo->setStatusBar(statusbar);
        toolBar = new QToolBar(profinfo);
        toolBar->setObjectName("toolBar");
        profinfo->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(profinfo);

        QMetaObject::connectSlotsByName(profinfo);
    } // setupUi

    void retranslateUi(QMainWindow *profinfo)
    {
        profinfo->setWindowTitle(QCoreApplication::translate("profinfo", "MainWindow", nullptr));
        mobile->setText(QCoreApplication::translate("profinfo", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">Mobile:</span></p></body></html>", nullptr));
        name->setText(QCoreApplication::translate("profinfo", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">Name:</span></p></body></html>", nullptr));
        lbl_name->setText(QString());
        lbl_mob->setText(QString());
        age->setText(QCoreApplication::translate("profinfo", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">Age:</span></p></body></html>", nullptr));
        lbl_age->setText(QString());
        mail->setText(QCoreApplication::translate("profinfo", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">Mail:</span></p></body></html>", nullptr));
        lbl_mail->setText(QString());
        id->setText(QCoreApplication::translate("profinfo", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">ID:</span></p></body></html>", nullptr));
        title->setText(QCoreApplication::translate("profinfo", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">Title:</span></p></body></html>", nullptr));
        lbl_title->setText(QString());
        lbl_id->setText(QString());
        backbtn->setText(QCoreApplication::translate("profinfo", "Back", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tablecourse->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("profinfo", "Course Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tablecourse->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("profinfo", "Course Code", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("profinfo", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class profinfo: public Ui_profinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFINFO_H
