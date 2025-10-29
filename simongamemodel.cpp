// Max Morris
// CS 3505
// 10/28/25
// This class describes all of the methods that will be in the model and will contain all of the underlying logic
// for the simon game.

#include "simongamemodel.h"
#include <QVector>
#include <QRandomGenerator>
#include <QPushButton>
#include <QPropertyAnimation>
#include <QWidget>

SimonGameModel::SimonGameModel(QObject *parent)
    : QObject{parent}
{
    isPlayerTurn = true;
    interval = 1000;
    flashTime = 500;
    timer.setInterval(interval);
    currentIndex = 0;
    inGameloop = false;
    bigBoxTime = false;

    connect(&timer,
            &QTimer::timeout,
            this,
            &SimonGameModel::update);
}

void SimonGameModel::startGame(){
    emit setGameText("");
    emit enableStateChanged(false);
    inGameloop = true;
    AddNewColor();
    isPlayerTurn = false;
    timer.start();
    emit enableButtonsStateChanged(isPlayerTurn);
}

void SimonGameModel::update(){
    if(!isPlayerTurn && currentIndex < sequence.size()){
        emit lightUpButton(sequence[currentIndex]);
        QTimer::singleShot(flashTime, this, [this]() {
            emit lightUpButton("none");
        });
        currentIndex++;
    }
    else if(currentIndex == sequence.size()){
        timer.stop();
        isPlayerTurn = true;
        currentIndex = 0;
        interval = interval * 0.95;
        flashTime = flashTime * 0.95;
        timer.setInterval(interval);
        emit enableButtonsStateChanged(isPlayerTurn);
        emit lightUpButton("none");
        emit updateProgressBar(0);
    }

    if(!bigBoxTime){
        bigBoxTime = true;
        emit spawnBigBox();
    }
}

void SimonGameModel::handlePlayerInput(){
    if(inGameloop && isPlayerTurn){
        QObject *obj = sender();
        QPushButton *button = qobject_cast<QPushButton*>(obj);

        if (!button)
            return;

        QString color;

        if (button->objectName() == "redButton")
            color = "red";
        else if (button->objectName() == "blueButton")
            color = "blue";

        if(color == sequence[currentIndex]){
            currentIndex++;
            emit updateProgressBar(int(currentIndex*100 / sequence.size()));
            if(currentIndex == sequence.size()){
                currentIndex = 0;
                AddNewColor();
                isPlayerTurn = false;
                emit enableButtonsStateChanged(isPlayerTurn);
                timer.start();
            }
        }
        else{
            interval = 1000;
            flashTime = 500;
            currentIndex = 0;
            sequence.clear();
            inGameloop = false;
            isPlayerTurn = false;
            emit enableStateChanged(true);
            emit enableButtonsStateChanged(isPlayerTurn);
            emit setGameText("You Lose");
        }
    }
}

void SimonGameModel::resetBigBox(){
    bigBoxTime = false;
}

void SimonGameModel::AddNewColor(){
    int buttonNumber = QRandomGenerator::global()->bounded(2);
    sequence.append((buttonNumber == 0) ? "red" : "blue");
}
