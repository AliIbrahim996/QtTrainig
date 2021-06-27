#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include<QString>
#include<QSqlDatabase>
class DataBaseManager
{
public:
    DataBaseManager(const QString& path);
    bool addPerson(const QString& name);
    bool deletePerson(const QString& name);
    bool personExists(const QString& name);


private:
    QSqlDatabase dataBase;
};

#endif // DATABASEMANAGER_H
