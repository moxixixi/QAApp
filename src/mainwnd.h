#ifndef MAINWND_H
#define MAINWND_H

#include <QWidget>

namespace Ui {
class QMainWnd;
}

class QMainWnd : public QWidget
{
    Q_OBJECT

public:
    explicit QMainWnd(QWidget *parent = nullptr);
    ~QMainWnd();

private:
    void initlogic();
    void connectSignalAndSlot();

private:
    Ui::QMainWnd *ui;
};

#endif // MAINWND_H
