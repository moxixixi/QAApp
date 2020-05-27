#include "sqlopt.h"
#include <QMutex>
#include <QMutexLocker>

QSqlOpt* QSqlOpt::m_instance = Q_NULLPTR;

QSqlOpt::QSqlOpt(QObject* parent)
    :QObject (parent)
{

}

QSqlOpt::~QSqlOpt()
{
    if(m_instance)
    {
        delete m_instance;
    }
}

QSqlOpt* QSqlOpt::GetInstance()
{
    static QMutex mutex;
    if(Q_NULLPTR == m_instance)
    {
        QMutexLocker locker(&mutex);
        m_instance = new (std::nothrow)QSqlOpt();
    }
    return m_instance;
}

void QSqlOpt::init()
{
   //init database
}
