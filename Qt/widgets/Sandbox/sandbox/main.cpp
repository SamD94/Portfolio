#include "mainwindow.h"

#include <QApplication>
#include <QtSql>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    QSqlQuery query;
    query.exec("CREATE TABLE Account (id INT PRIMARY KEY, username VARCHAR(255));");

    return a.exec();
}
