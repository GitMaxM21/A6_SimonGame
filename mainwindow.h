#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "simongamemodel.h"
#include <QMainWindow>
#include <QPropertyAnimation>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(SimonGameModel& model, QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void flashButton(QString color);
    void moveBigBox();
    void bigBoxAnimationFinished();

signals:
    void finishedMovingBigBox();


private:
    Ui::MainWindow *ui;
    QPropertyAnimation *bigBoxAnimation = nullptr;
};
#endif // MAINWINDOW_H
