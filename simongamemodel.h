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
    void startGame();
    void update();
    void handlePlayerInput();
    void resetBigBox();

signals:
    void enableStateChanged(bool isRunning);
    void lightUpButton(QString color);
    void enableButtonsStateChanged(bool isComputerTurn);
    void setGameText(QString text);
    void updateProgressBar(int percentComplete);
    void spawnBigBox();

private:
    QVector<QString> sequence;
    QRandomGenerator buttonSelector;
    QString currentColor;
    QTimer timer;
    int interval;
    int flashTime;
    int currentIndex;
    bool inGameloop;
    bool isPlayerTurn;
    bool bigBoxTime;

    void AddNewColor();
};

#endif // SIMONGAMEMODEL_H
