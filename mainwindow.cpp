// Max Morris
// CS 3505
// 10/28/25
// This class describes all of the methods that will be in the view of the simon game.
// Most of the connect methods take the components in the gui and send it to the model.

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "simongamemodel.h"
#include <QString>
#include <QPropertyAnimation>


MainWindow::MainWindow(SimonGameModel& model, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->bigBox->hide();
    bigBoxAnimation = new QPropertyAnimation(ui->bigBox, "pos", this);

    connect(ui->startButton,
            &QPushButton::clicked,
            &model,
            &SimonGameModel::startGame);

    connect(ui->redButton,
            &QPushButton::clicked,
            &model,
            &SimonGameModel::handlePlayerInput);

    connect(ui->blueButton,
            &QPushButton::clicked,
            &model,
            &SimonGameModel::handlePlayerInput);

    connect(&model,
            &SimonGameModel::setGameText,
            this,
            [this](QString text) {ui->youLoseText->setText(text);});

    connect(&model,
            &SimonGameModel::updateProgressBar,
            this,
            [this](int percentComplete) {ui->progressBar->setValue(percentComplete);});

    connect(&model,
            &SimonGameModel::enableStateChanged,
            this,
            [this](bool enable) {
                ui->startButton->setEnabled(enable);
            });

    connect(&model,
            &SimonGameModel::lightUpButton,
            this,
            &MainWindow::flashButton);

    connect(&model,
            &SimonGameModel::enableButtonsStateChanged,
            this,
            [this](bool enable) {
                ui->redButton->setEnabled(enable);
                ui->blueButton->setEnabled(enable);
            });

    connect(&model,
            &SimonGameModel::spawnBigBox,
            this,
            &MainWindow::moveBigBox);

    connect(this,
            &MainWindow::finishedMovingBigBox,
            &model,
            &SimonGameModel::resetBigBox);

    connect(bigBoxAnimation,
            &QPropertyAnimation::finished,
            this,
            &MainWindow::bigBoxAnimationFinished);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::flashButton(QString color){
    if(color == "red"){
        ui->redButton->setStyleSheet( QString("QPushButton {background-color: rgb(255,150,150);} "
                                             "QPushButton:pressed {background-color: rgb(255,150,150);} "
                                             "QPushButton:disabled {background-color: rgb(255,150,150);}") );
        ui->blueButton->setStyleSheet( QString("QPushButton {background-color: rgb(50,50,200);} "
                                              "QPushButton:pressed {background-color: rgb(150,150,255);}"
                                              "QPushButton:disabled {background-color: rgb(50,50,200);}") );
    }
    else if(color == "blue"){
        ui->blueButton->setStyleSheet( QString("QPushButton {background-color: rgb(150,150,255);} "
                                              "QPushButton:pressed {background-color: rgb(150,150,255);}"
                                              "QPushButton:disabled {background-color: rgb(150,150,255);}") );
        ui->redButton->setStyleSheet( QString("QPushButton {background-color: rgb(200,50,50);} "
                                             "QPushButton:pressed {background-color: rgb(255,150,150);}"
                                             "QPushButton:disabled {background-color: rgb(200,50,50);}") );
    }
    else if(color == "none")
    {
        ui->redButton->setStyleSheet( QString("QPushButton {background-color: rgb(200,50,50);} "
                                             "QPushButton:pressed {background-color: rgb(255,150,150);} "
                                             "QPushButton:disabled {background-color: rgb(200,50,50);}") );
        ui->blueButton->setStyleSheet( QString("QPushButton {background-color: rgb(50,50,200);} "
                                              "QPushButton:pressed {background-color: rgb(150,150,255);}"
                                              "QPushButton:disabled {background-color: rgb(50,50,200);}") );
    }
}

void MainWindow::moveBigBox(){
    QWidget *bigBox = ui->bigBox;
    bigBox->show();
    QWidget *window = this;

    int startX = window->width();
    int endX = -(ui->bigBox->width());
    int y = ui->redButton->height();

    bigBox->move(startX, y);

    bigBoxAnimation->setDuration(3000);
    bigBoxAnimation->setStartValue(QPoint(startX, y));
    bigBoxAnimation->setEndValue(QPoint(endX, y));
    bigBoxAnimation->setEasingCurve(QEasingCurve::InOutQuad);
    bigBoxAnimation->start();
}

void MainWindow::bigBoxAnimationFinished() {
    ui->bigBox->hide();
    emit finishedMovingBigBox();
}
