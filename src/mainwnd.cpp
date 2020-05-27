#include "mainwnd.h"
#include "ui_qmainwnd.h"
#include "datacenter.h"

QMainWnd::QMainWnd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QMainWnd)
{
    ui->setupUi(this);

    initlogic();
    connectSignalAndSlot();
}

QMainWnd::~QMainWnd()
{
    delete ui;
}

void QMainWnd::initlogic()
{
    DataCenter::GetInstance()->init();
}

void QMainWnd::connectSignalAndSlot()
{

}
