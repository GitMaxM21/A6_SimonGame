// My creative element is a yellow box that will disrupt gameplay by flying over the buttons
// This will happen whenever the computer is creating a sequence.
// It uses QPropertyAnimator in order to move across the screen.
#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SimonGameModel game;
    MainWindow w(game);
    w.show();
    return a.exec();
}
