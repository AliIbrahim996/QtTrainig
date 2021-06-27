#include "databasemanager.h"

DataBaseManager::DataBaseManager(const QString& path)
{
    dataBase = QSqlDatabase::addDatabase("QSQLITE");
    dataBase.setDatabaseName(path);

    if(!dataBase.open()){
        qDebug <<"Error: connection failed due to  " << dataBase.lastError();
    }
    else{
        qDebug <<"Database: connection ok!  ";
    }
}

bool DataBaseManager::addPerson(const QString& name){

            bool success = false;
            QSqlQuery query;
              query.prepare("INSERT into people (name) VALUES (:name)");
              query.bindValue(":name", name);
              if(query.exec())
              {
                  success = true;
              }
              else
              {
                   qDebug() << "addPerson error:"
                            << query.lastError();
              }

              return success;

}

bool DataBaseManager::deletePerson(const QString &name){
     bool success = false;
    if(personExists(name)){
        QSqlQuery query;
        query.prepare("DELETE FROM people WHERE name = (:name)");
        query.bindValue(":name", name);
           success = query.exec();
           if(!success)
           {
               qDebug() << "removePerson error:"
                        << query.lastError();
           }

    }
    return success;
}

bool DataBaseManager::personExists(const QString &name){

}
