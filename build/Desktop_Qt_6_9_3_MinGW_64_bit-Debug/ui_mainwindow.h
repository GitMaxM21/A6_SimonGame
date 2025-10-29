/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *bigBox;
    QWidget *widget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QProgressBar *progressBar;
    QLabel *youLoseText;
    QHBoxLayout *horizontalLayout;
    QPushButton *redButton;
    QPushButton *blueButton;
    QWidget *widget1;
    QPushButton *startButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        bigBox = new QWidget(centralwidget);
        bigBox->setObjectName("bigBox");
        bigBox->setGeometry(QRect(770, 130, 411, 171));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        QBrush brush1(QColor(255, 255, 127, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush2);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush2);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush2);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush2);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush2);
        QBrush brush3(QColor(255, 255, 220, 255));
        brush3.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush3);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush2);
        QBrush brush4(QColor(255, 255, 255, 127));
        brush4.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush4);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush2);
#endif
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush2);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush2);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush2);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush2);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush2);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush3);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush4);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush2);
#endif
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush2);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush2);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush2);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush2);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush2);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush2);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush2);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush2);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush3);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush2);
        QBrush brush5(QColor(0, 0, 0, 127));
        brush5.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush5);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush2);
#endif
        bigBox->setPalette(palette);
        bigBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127)"));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(70, 20, 681, 371));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        progressBar = new QProgressBar(widget);
        progressBar->setObjectName("progressBar");
        QPalette palette1;
        QBrush brush6(QColor(0, 170, 0, 255));
        brush6.setStyle(Qt::BrushStyle::SolidPattern);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Highlight, brush6);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Highlight, brush6);
        progressBar->setPalette(palette1);
        progressBar->setValue(0);
        progressBar->setAlignment(Qt::AlignmentFlag::AlignJustify|Qt::AlignmentFlag::AlignVCenter);
        progressBar->setInvertedAppearance(false);

        verticalLayout->addWidget(progressBar);

        youLoseText = new QLabel(widget);
        youLoseText->setObjectName("youLoseText");
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        youLoseText->setFont(font);
        youLoseText->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(youLoseText);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        redButton = new QPushButton(widget);
        redButton->setObjectName("redButton");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(redButton->sizePolicy().hasHeightForWidth());
        redButton->setSizePolicy(sizePolicy1);
        QPalette palette2;
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush2);
        QBrush brush7(QColor(200, 50, 50, 255));
        brush7.setStyle(Qt::BrushStyle::SolidPattern);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush7);
        QBrush brush8(QColor(255, 109, 109, 255));
        brush8.setStyle(Qt::BrushStyle::SolidPattern);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush8);
        QBrush brush9(QColor(227, 79, 79, 255));
        brush9.setStyle(Qt::BrushStyle::SolidPattern);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush9);
        QBrush brush10(QColor(100, 25, 25, 255));
        brush10.setStyle(Qt::BrushStyle::SolidPattern);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush10);
        QBrush brush11(QColor(133, 33, 33, 255));
        brush11.setStyle(Qt::BrushStyle::SolidPattern);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush11);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush2);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush2);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush7);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush2);
        QBrush brush12(QColor(227, 152, 152, 255));
        brush12.setStyle(Qt::BrushStyle::SolidPattern);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush12);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush3);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush5);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush);
#endif
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush2);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush7);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush8);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush9);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush10);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush11);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush2);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush2);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush7);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush2);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush12);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush3);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush5);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush);
#endif
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush10);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush7);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush8);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush9);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush10);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush11);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush10);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush10);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush7);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush7);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush2);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush7);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush3);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush2);
        QBrush brush13(QColor(100, 25, 25, 127));
        brush13.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush13);
#endif
        QBrush brush14(QColor(255, 69, 69, 255));
        brush14.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush14);
#endif
        redButton->setPalette(palette2);

        horizontalLayout->addWidget(redButton);

        blueButton = new QPushButton(widget);
        blueButton->setObjectName("blueButton");
        sizePolicy1.setHeightForWidth(blueButton->sizePolicy().hasHeightForWidth());
        blueButton->setSizePolicy(sizePolicy1);
        QPalette palette3;
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush2);
        QBrush brush15(QColor(50, 50, 200, 255));
        brush15.setStyle(Qt::BrushStyle::SolidPattern);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush15);
        QBrush brush16(QColor(109, 109, 255, 255));
        brush16.setStyle(Qt::BrushStyle::SolidPattern);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush16);
        QBrush brush17(QColor(79, 79, 227, 255));
        brush17.setStyle(Qt::BrushStyle::SolidPattern);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush17);
        QBrush brush18(QColor(25, 25, 100, 255));
        brush18.setStyle(Qt::BrushStyle::SolidPattern);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush18);
        QBrush brush19(QColor(33, 33, 133, 255));
        brush19.setStyle(Qt::BrushStyle::SolidPattern);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush19);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush2);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush2);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush15);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush2);
        QBrush brush20(QColor(152, 152, 227, 255));
        brush20.setStyle(Qt::BrushStyle::SolidPattern);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush20);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush3);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush5);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush);
#endif
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush2);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush15);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush16);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush17);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush18);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush19);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush2);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush2);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush15);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush2);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush20);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush3);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush5);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush);
#endif
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush18);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush15);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush16);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush17);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush18);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush19);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush18);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush18);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush15);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush15);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush2);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush15);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush3);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush2);
        QBrush brush21(QColor(25, 25, 100, 127));
        brush21.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush21);
#endif
        QBrush brush22(QColor(69, 69, 255, 255));
        brush22.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush22);
#endif
        blueButton->setPalette(palette3);

        horizontalLayout->addWidget(blueButton);


        verticalLayout->addLayout(horizontalLayout);

        widget1 = new QWidget(widget);
        widget1->setObjectName("widget1");

        verticalLayout->addWidget(widget1);

        startButton = new QPushButton(widget);
        startButton->setObjectName("startButton");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(startButton->sizePolicy().hasHeightForWidth());
        startButton->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(startButton);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        redButton->raise();
        blueButton->raise();
        startButton->raise();
        progressBar->raise();
        youLoseText->raise();
        startButton->raise();
        redButton->raise();
        blueButton->raise();
        youLoseText->raise();
        progressBar->raise();
        widget1->raise();
        bigBox->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        youLoseText->setText(QString());
        redButton->setText(QString());
        blueButton->setText(QString());
        startButton->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
