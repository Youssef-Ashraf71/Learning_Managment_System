#include "mainwindow.h"
#include"member.h"
#include"student.h"
#include"professor.h"
#include"course.h"
#include <QApplication>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    professor Ahmed;
    course math;
    math.prof=Ahmed;
    Ahmed.c=&math;
    Ahmed.c->get_prof();
    return a.exec();
}
