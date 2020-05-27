#ifndef SQLOPT_H
#define SQLOPT_H

#include <QObject>

class QSqlOpt : public QObject
{
    Q_OBJECT

public:
    static QSqlOpt* GetInstance();
    ~QSqlOpt();

private:
    explicit QSqlOpt(QObject *parent = nullptr);

public:
    void init();

private:
    static QSqlOpt* m_instance;
};

#endif // SQLOPT_H
