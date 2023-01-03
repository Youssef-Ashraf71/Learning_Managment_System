
#include "Database.h"
#include "mainwindow.h"
#include"student.h"
#include"professor.h"
#include"course.h"
#include<vector>
#include <QApplication>
#include <QFile>

Database database;
int main(int argc, char *argv[])
{
    database.add_admin("12","123");
    QApplication a(argc, argv);
    MainWindow w;
    w.show();


//  import style sheets
    QFile file(":/media/media/SpyBot.qss");
    file.open(QFile::ReadOnly);

    QString styleSheet { QLatin1String(file.readAll()) };

    //setup stylesheet
    a.setStyleSheet(styleSheet);
//






    return a.exec();
}
