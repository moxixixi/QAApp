#include "datacenter.h"
#include <QMutex>
#include <QMutexLocker>
#include "sqlopt.h"
#include <QTime>
#include <QThread>

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
    return 10;
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

    size_t nCount = getProblemCount();
    if(m_hasAnswered.size() >= nCount) return -1;

    int index = -1;
    while(nCount > 0)
    {
        QTime qtime = QTime::currentTime();
        qsrand(qtime.msec() + qtime.second()*1000);
        index = qrand() % nCount;
        if(m_hasAnswered.count(index) == 0)
        {
            break;
        }
        QThread::sleep(1);
    }

    return index;
}

void DataCenter::clearAnswered()
{
    m_hasAnswered.clear();
}
