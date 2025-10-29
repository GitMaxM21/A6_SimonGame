// Max Morris
// CS 3505
// 10/28/25
// This class describes all of the methods that will be in the view of the simon game.
// It sends ui information about the buttons to the model to be updated.

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
    // This method will recieve a color and update the corresponding button to flash.
    void flashButton(QString color);

    // This method will be called when the box needs to be moved on the screen.
    void moveBigBox();

    // This method will be called when the box has finished animating.
    void bigBoxAnimationFinished();

signals:
    // This is a singal that will be triggered when the box has finished moving.
    void finishedMovingBigBox();


private:
    Ui::MainWindow *ui;
    QPropertyAnimation *bigBoxAnimation = nullptr;
};
#endif // MAINWINDOW_H
