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
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_profinfo
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QWidget *widget_3;
    QGridLayout *gridLayout;
    QLabel *lbl_name;
    QLabel *mail;
    QLabel *mobile;
    QLabel *age;
    QLabel *lbl_mail;
    QLabel *title;
    QLabel *id;
    QLabel *lbl_mob;
    QLabel *lbl_title;
    QLabel *lbl_age;
    QLabel *lbl_id;
    QLabel *name;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *courses_combo;
    QPushButton *assignbtn;
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
        profinfo->resize(950, 500);
        centralwidget = new QWidget(profinfo);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_4 = new QHBoxLayout(centralwidget);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName("gridLayout_2");
        widget_3 = new QWidget(widget);
        widget_3->setObjectName("widget_3");
        gridLayout = new QGridLayout(widget_3);
        gridLayout->setObjectName("gridLayout");
        lbl_name = new QLabel(widget_3);
        lbl_name->setObjectName("lbl_name");
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lbl_name->sizePolicy().hasHeightForWidth());
        lbl_name->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lbl_name, 0, 1, 1, 1);

        mail = new QLabel(widget_3);
        mail->setObjectName("mail");
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mail->sizePolicy().hasHeightForWidth());
        mail->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mail, 3, 0, 1, 1);

        mobile = new QLabel(widget_3);
        mobile->setObjectName("mobile");
        sizePolicy1.setHeightForWidth(mobile->sizePolicy().hasHeightForWidth());
        mobile->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(mobile, 6, 0, 1, 1);

        age = new QLabel(widget_3);
        age->setObjectName("age");
        sizePolicy1.setHeightForWidth(age->sizePolicy().hasHeightForWidth());
        age->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(age, 4, 0, 1, 1);

        lbl_mail = new QLabel(widget_3);
        lbl_mail->setObjectName("lbl_mail");
        sizePolicy.setHeightForWidth(lbl_mail->sizePolicy().hasHeightForWidth());
        lbl_mail->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lbl_mail, 3, 1, 1, 1);

        title = new QLabel(widget_3);
        title->setObjectName("title");
        sizePolicy1.setHeightForWidth(title->sizePolicy().hasHeightForWidth());
        title->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(title, 1, 0, 1, 1);

        id = new QLabel(widget_3);
        id->setObjectName("id");

        gridLayout->addWidget(id, 2, 0, 1, 1);

        lbl_mob = new QLabel(widget_3);
        lbl_mob->setObjectName("lbl_mob");
        sizePolicy.setHeightForWidth(lbl_mob->sizePolicy().hasHeightForWidth());
        lbl_mob->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lbl_mob, 6, 1, 1, 1);

        lbl_title = new QLabel(widget_3);
        lbl_title->setObjectName("lbl_title");
        sizePolicy.setHeightForWidth(lbl_title->sizePolicy().hasHeightForWidth());
        lbl_title->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lbl_title, 1, 1, 1, 1);

        lbl_age = new QLabel(widget_3);
        lbl_age->setObjectName("lbl_age");
        sizePolicy.setHeightForWidth(lbl_age->sizePolicy().hasHeightForWidth());
        lbl_age->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lbl_age, 4, 1, 1, 1);

        lbl_id = new QLabel(widget_3);
        lbl_id->setObjectName("lbl_id");

        gridLayout->addWidget(lbl_id, 2, 1, 1, 1);

        name = new QLabel(widget_3);
        name->setObjectName("name");
        sizePolicy1.setHeightForWidth(name->sizePolicy().hasHeightForWidth());
        name->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(name, 0, 0, 1, 1);


        gridLayout_2->addWidget(widget_3, 0, 0, 1, 1);

        widget_4 = new QWidget(widget);
        widget_4->setObjectName("widget_4");
        horizontalLayout = new QHBoxLayout(widget_4);
        horizontalLayout->setObjectName("horizontalLayout");

        gridLayout_2->addWidget(widget_4, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        courses_combo = new QComboBox(widget);
        courses_combo->setObjectName("courses_combo");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(100);
        sizePolicy2.setVerticalStretch(100);
        sizePolicy2.setHeightForWidth(courses_combo->sizePolicy().hasHeightForWidth());
        courses_combo->setSizePolicy(sizePolicy2);
        courses_combo->setMinimumSize(QSize(100, 0));
        courses_combo->setMaximumSize(QSize(375, 22));
        courses_combo->setStyleSheet(QString::fromUtf8("QComboBox::placeholder { color: white; }"));
        courses_combo->setPlaceholderText(QString::fromUtf8("Choose Course"));

        horizontalLayout_2->addWidget(courses_combo);

        assignbtn = new QPushButton(widget);
        assignbtn->setObjectName("assignbtn");
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(assignbtn->sizePolicy().hasHeightForWidth());
        assignbtn->setSizePolicy(sizePolicy3);
        assignbtn->setMinimumSize(QSize(101, 0));
        assignbtn->setMaximumSize(QSize(200, 22));

        horizontalLayout_2->addWidget(assignbtn);


        gridLayout_2->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        backbtn = new QPushButton(widget);
        backbtn->setObjectName("backbtn");
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(70);
        sizePolicy4.setVerticalStretch(30);
        sizePolicy4.setHeightForWidth(backbtn->sizePolicy().hasHeightForWidth());
        backbtn->setSizePolicy(sizePolicy4);
        backbtn->setMaximumSize(QSize(200, 30));

        gridLayout_2->addWidget(backbtn, 3, 0, 1, 1);


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
        menubar->setGeometry(QRect(0, 0, 950, 25));
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
        lbl_name->setText(QString());
        mail->setText(QCoreApplication::translate("profinfo", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">Mail:</span></p></body></html>", nullptr));
        mobile->setText(QCoreApplication::translate("profinfo", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">Mobile:</span></p></body></html>", nullptr));
        age->setText(QCoreApplication::translate("profinfo", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">Age:</span></p></body></html>", nullptr));
        lbl_mail->setText(QString());
        title->setText(QCoreApplication::translate("profinfo", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">Title:</span></p></body></html>", nullptr));
        id->setText(QCoreApplication::translate("profinfo", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">ID:</span></p></body></html>", nullptr));
        lbl_mob->setText(QString());
        lbl_title->setText(QString());
        lbl_age->setText(QString());
        lbl_id->setText(QString());
        name->setText(QCoreApplication::translate("profinfo", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">Name:</span></p></body></html>", nullptr));
        assignbtn->setText(QCoreApplication::translate("profinfo", "Assign", nullptr));
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
