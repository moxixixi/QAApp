#ifndef DATACENTER_H
#define DATACENTER_H

#include <QObject>
#include "qaappdef.h"
#include <set>

class DataCenter : public QObject
{
    Q_OBJECT

public:
    static DataCenter* GetInstance();
    ~DataCenter();

private:
    explicit DataCenter(QObject *parent = nullptr);

public:
    void init();
    size_t getProblemCount();
    void getProblem(int index, Question& _question);
    int getRandomIndex(int npreindex = -1);
    void clearAnswered();

private:
    static DataCenter* m_instance;
    std::set<int> m_hasAnswered;
};

#endif // DATACENTER_H
