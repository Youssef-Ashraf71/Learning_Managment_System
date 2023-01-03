/********************************************************************************
** Form generated from reading UI file 'add_course_menu.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_COURSE_MENU_H
#define UI_ADD_COURSE_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Add_course_menu
{
public:
    QGridLayout *gridLayout;
    QLabel *lbl_title;
    QLineEdit *txt_title;
    QLineEdit *txt_id;
    QLabel *lbl_hall;
    QPushButton *btn_add;
    QComboBox *combo_prof;
    QPushButton *btn_cancel;
    QLabel *lbl_time;
    QLabel *lbl_id;
    QLabel *lbl_prof;
    QLabel *lbl_day;
    QComboBox *combo_hall;
    QComboBox *combo_day;
    QComboBox *combo_time;

    void setupUi(QDialog *Add_course_menu)
    {
        if (Add_course_menu->objectName().isEmpty())
            Add_course_menu->setObjectName("Add_course_menu");
        Add_course_menu->resize(574, 504);
        gridLayout = new QGridLayout(Add_course_menu);
        gridLayout->setObjectName("gridLayout");
        lbl_title = new QLabel(Add_course_menu);
        lbl_title->setObjectName("lbl_title");

        gridLayout->addWidget(lbl_title, 0, 0, 1, 1);

        txt_title = new QLineEdit(Add_course_menu);
        txt_title->setObjectName("txt_title");

        gridLayout->addWidget(txt_title, 0, 2, 1, 1);

        txt_id = new QLineEdit(Add_course_menu);
        txt_id->setObjectName("txt_id");

        gridLayout->addWidget(txt_id, 1, 2, 1, 1);

        lbl_hall = new QLabel(Add_course_menu);
        lbl_hall->setObjectName("lbl_hall");

        gridLayout->addWidget(lbl_hall, 7, 0, 1, 1);

        btn_add = new QPushButton(Add_course_menu);
        btn_add->setObjectName("btn_add");

        gridLayout->addWidget(btn_add, 11, 0, 1, 3);

        combo_prof = new QComboBox(Add_course_menu);
        combo_prof->setObjectName("combo_prof");

        gridLayout->addWidget(combo_prof, 6, 2, 1, 1);

        btn_cancel = new QPushButton(Add_course_menu);
        btn_cancel->setObjectName("btn_cancel");

        gridLayout->addWidget(btn_cancel, 12, 0, 1, 3);

        lbl_time = new QLabel(Add_course_menu);
        lbl_time->setObjectName("lbl_time");

        gridLayout->addWidget(lbl_time, 9, 0, 1, 1);

        lbl_id = new QLabel(Add_course_menu);
        lbl_id->setObjectName("lbl_id");

        gridLayout->addWidget(lbl_id, 1, 0, 1, 1);

        lbl_prof = new QLabel(Add_course_menu);
        lbl_prof->setObjectName("lbl_prof");

        gridLayout->addWidget(lbl_prof, 6, 0, 1, 1);

        lbl_day = new QLabel(Add_course_menu);
        lbl_day->setObjectName("lbl_day");

        gridLayout->addWidget(lbl_day, 8, 0, 1, 1);

        combo_hall = new QComboBox(Add_course_menu);
        combo_hall->setObjectName("combo_hall");

        gridLayout->addWidget(combo_hall, 7, 2, 1, 1);

        combo_day = new QComboBox(Add_course_menu);
        combo_day->setObjectName("combo_day");

        gridLayout->addWidget(combo_day, 8, 2, 1, 1);

        combo_time = new QComboBox(Add_course_menu);
        combo_time->setObjectName("combo_time");

        gridLayout->addWidget(combo_time, 9, 2, 1, 1);

        QWidget::setTabOrder(txt_title, txt_id);
        QWidget::setTabOrder(txt_id, btn_add);
        QWidget::setTabOrder(btn_add, btn_cancel);

        retranslateUi(Add_course_menu);

        QMetaObject::connectSlotsByName(Add_course_menu);
    } // setupUi

    void retranslateUi(QDialog *Add_course_menu)
    {
        Add_course_menu->setWindowTitle(QCoreApplication::translate("Add_course_menu", "Dialog", nullptr));
        lbl_title->setText(QCoreApplication::translate("Add_course_menu", "Course Title", nullptr));
        lbl_hall->setText(QCoreApplication::translate("Add_course_menu", "Lecture Hall", nullptr));
        btn_add->setText(QCoreApplication::translate("Add_course_menu", "Add", nullptr));
        combo_prof->setPlaceholderText(QCoreApplication::translate("Add_course_menu", "Choose Supervisor professor", nullptr));
        btn_cancel->setText(QCoreApplication::translate("Add_course_menu", "Cancel", nullptr));
        lbl_time->setText(QCoreApplication::translate("Add_course_menu", "time", nullptr));
        lbl_id->setText(QCoreApplication::translate("Add_course_menu", "Course ID", nullptr));
        lbl_prof->setText(QCoreApplication::translate("Add_course_menu", "Professor", nullptr));
        lbl_day->setText(QCoreApplication::translate("Add_course_menu", "Day", nullptr));
        combo_hall->setPlaceholderText(QCoreApplication::translate("Add_course_menu", "Choose Lecture Hall", nullptr));
        combo_day->setPlaceholderText(QCoreApplication::translate("Add_course_menu", "Choose Day", nullptr));
        combo_time->setPlaceholderText(QCoreApplication::translate("Add_course_menu", "Choose Time Slot", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Add_course_menu: public Ui_Add_course_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_COURSE_MENU_H
