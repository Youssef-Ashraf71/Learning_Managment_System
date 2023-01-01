/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dashboard
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *btn_studd;
    QLabel *crslbl;
    QPushButton *btn_proff;
    QLabel *studlbl;
    QPushButton *btn_courss;
    QLabel *proflbl;
    QWidget *widget_2;
    QGridLayout *gridLayout_3;
    QWidget *widget_3;
    QGridLayout *gridLayout_4;
    QPushButton *btn_newadmin;
    QPushButton *btn_export;
    QLabel *label;

    void setupUi(QMainWindow *Dashboard)
    {
        if (Dashboard->objectName().isEmpty())
            Dashboard->setObjectName("Dashboard");
        Dashboard->resize(1130, 605);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Dashboard->sizePolicy().hasHeightForWidth());
        Dashboard->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(Dashboard);
        centralwidget->setObjectName("centralwidget");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        btn_studd = new QPushButton(widget);
        btn_studd->setObjectName("btn_studd");
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btn_studd->sizePolicy().hasHeightForWidth());
        btn_studd->setSizePolicy(sizePolicy2);
        btn_studd->setMaximumSize(QSize(180, 50));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        btn_studd->setFont(font);
        btn_studd->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";"));

        gridLayout->addWidget(btn_studd, 2, 2, 1, 1);

        crslbl = new QLabel(widget);
        crslbl->setObjectName("crslbl");

        gridLayout->addWidget(crslbl, 0, 1, 1, 1);

        btn_proff = new QPushButton(widget);
        btn_proff->setObjectName("btn_proff");
        sizePolicy2.setHeightForWidth(btn_proff->sizePolicy().hasHeightForWidth());
        btn_proff->setSizePolicy(sizePolicy2);
        btn_proff->setMaximumSize(QSize(180, 50));
        btn_proff->setFont(font);
        btn_proff->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";"));

        gridLayout->addWidget(btn_proff, 2, 3, 1, 1);

        studlbl = new QLabel(widget);
        studlbl->setObjectName("studlbl");

        gridLayout->addWidget(studlbl, 0, 2, 1, 1);

        btn_courss = new QPushButton(widget);
        btn_courss->setObjectName("btn_courss");
        sizePolicy2.setHeightForWidth(btn_courss->sizePolicy().hasHeightForWidth());
        btn_courss->setSizePolicy(sizePolicy2);
        btn_courss->setMaximumSize(QSize(180, 50));
        btn_courss->setFont(font);
        btn_courss->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";"));

        gridLayout->addWidget(btn_courss, 2, 1, 1, 1);

        proflbl = new QLabel(widget);
        proflbl->setObjectName("proflbl");

        gridLayout->addWidget(proflbl, 0, 3, 1, 1);


        gridLayout_2->addWidget(widget, 3, 0, 1, 1);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        sizePolicy2.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy2);
        gridLayout_3 = new QGridLayout(widget_2);
        gridLayout_3->setObjectName("gridLayout_3");
        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName("widget_3");
        gridLayout_4 = new QGridLayout(widget_3);
        gridLayout_4->setObjectName("gridLayout_4");
        btn_newadmin = new QPushButton(widget_3);
        btn_newadmin->setObjectName("btn_newadmin");
        btn_newadmin->setMaximumSize(QSize(180, 40));
        btn_newadmin->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";"));

        gridLayout_4->addWidget(btn_newadmin, 2, 1, 1, 1);

        btn_export = new QPushButton(widget_3);
        btn_export->setObjectName("btn_export");
        btn_export->setMaximumSize(QSize(180, 40));
        btn_export->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";"));

        gridLayout_4->addWidget(btn_export, 3, 1, 1, 1);


        gridLayout_3->addWidget(widget_3, 3, 2, 1, 1);

        label = new QLabel(widget_2);
        label->setObjectName("label");
        label->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font1.setPointSize(48);
        font1.setBold(true);
        font1.setItalic(false);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("font: 900 48pt \"Segoe UI Black\";"));
        label->setMargin(0);

        gridLayout_3->addWidget(label, 1, 2, 1, 1);


        gridLayout_2->addWidget(widget_2, 0, 0, 1, 1);

        Dashboard->setCentralWidget(centralwidget);

        retranslateUi(Dashboard);

        QMetaObject::connectSlotsByName(Dashboard);
    } // setupUi

    void retranslateUi(QMainWindow *Dashboard)
    {
        Dashboard->setWindowTitle(QCoreApplication::translate("Dashboard", "MainWindow", nullptr));
        btn_studd->setText(QCoreApplication::translate("Dashboard", "Student", nullptr));
        crslbl->setText(QString());
        btn_proff->setText(QCoreApplication::translate("Dashboard", "Professor", nullptr));
        studlbl->setText(QString());
        btn_courss->setText(QCoreApplication::translate("Dashboard", "Course", nullptr));
        proflbl->setText(QString());
        btn_newadmin->setText(QCoreApplication::translate("Dashboard", "Add Admin", nullptr));
        btn_export->setText(QCoreApplication::translate("Dashboard", "Export All Data", nullptr));
        label->setText(QCoreApplication::translate("Dashboard", "Welcome Admin !", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dashboard: public Ui_Dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
