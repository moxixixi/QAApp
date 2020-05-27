#include "datacenter.h"
#include <QMutex>
#include <QMutexLocker>
#include "sqlopt.h"

DataCenter* DataCenter::m_instance = Q_NULLPTR;

DataCenter::DataCenter(QObject *parent) : QObject(parent)
  ,m_hasAnswered()
{

}

DataCenter::~DataCenter()
{
    if(m_instance)
    {
        delete m_instance;
    }
}

DataCenter* DataCenter::GetInstance()
{
    static QMutex mutex;
    if(Q_NULLPTR == m_instance)
    {
        QMutexLocker locker(&mutex);
        m_instance = new (std::nothrow)DataCenter();
    }
    return m_instance;
}

void DataCenter::init()
{
    //init database
}

size_t DataCenter::getProblemCount()
{
    return 0;
}

void DataCenter::getProblem(int index, Question& _question)
{

}

int DataCenter::getRandomIndex(int npreindex)
{
    if(npreindex != -1)
    {
        m_hasAnswered.insert(npreindex);
    }


    return 0;
}

void DataCenter::clearAnswered()
{
    m_hasAnswered.clear();
}
