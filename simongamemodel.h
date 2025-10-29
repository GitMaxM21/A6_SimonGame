// Max Morris
// CS 3505
// 10/28/25
// This class describes all of the methods that will be in the simon game.
// This class holds the internals of each of the mechanics in the game.

#ifndef SIMONGAMEMODEL_H
#define SIMONGAMEMODEL_H

#include <QObject>
#include <QVector>
#include <QRandomGenerator>
#include <QTimer>

class SimonGameModel : public QObject
{
    Q_OBJECT
public:
    explicit SimonGameModel(QObject *parent = nullptr);

public slots:
    // This method is called when the game is started.
    void startGame();

    //  This method is called when it is the computers turn and the buttons need to update color.
    void update();

    // This method is called when it's the player's turn and thier input needs to be handled.
    void handlePlayerInput();

    // This method is called when the box needs to finish animating.
    void resetBigBox();

signals:
    // This method determains if the start button is enabled or not based on if their is a game being played.
    void enableStateChanged(bool isRunning);

    // This signal tells the view which button needs to be lit up.
    void lightUpButton(QString color);

    // This signal will enable or disable the colored simon buttons.
    void enableButtonsStateChanged(bool isComputerTurn);

    // This will set the lose text in the game.
    void setGameText(QString text);

    // This method will update the progress bar.
    void updateProgressBar(int percentComplete);

    // This will tell the ui when the big box should appear on screen.
    void spawnBigBox();

private:
    // This contains the list of colors that will be played by the computer.
    QVector<QString> sequence;

    // This determains which button will be lit up in the sequence at random.
    QRandomGenerator buttonSelector;

    // This string contains the current color of the sequence.
    QString currentColor;

    // This timer is used to determain when the buttons will flash.
    QTimer timer;

    // This number in ms determains the amount of time each colored button will have in each sequence step.
    int interval;

    // This number determains how long a button will flash in ms.
    int flashTime;

    // This int determains what step in a given turn the player or computer is at.
    int currentIndex;

    // This boolean determains if the player has started a game and has yet to lose.
    bool inGameloop;

    // This boolean decides if it is a player or computers turn.
    bool isPlayerTurn;

    // This boolean determains if the box will be able to move.
    bool bigBoxTime;

    // This private method will add a new color to the sequence if it is needed.
    void AddNewColor();
};

#endif // SIMONGAMEMODEL_H
