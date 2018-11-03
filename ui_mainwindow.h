/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *wire_color_label;
    QCheckBox *red_wire;
    QCheckBox *blue_wire;
    QCheckBox *star;
    QCheckBox *led;
    QCheckBox *parallel_port;
    QCheckBox *serial_even;
    QCheckBox *multi_batteries;
    QPushButton *resetButton;
    QLabel *result;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        wire_color_label = new QLabel(centralWidget);
        wire_color_label->setObjectName(QStringLiteral("wire_color_label"));
        wire_color_label->setGeometry(QRect(20, 10, 81, 21));
        red_wire = new QCheckBox(centralWidget);
        red_wire->setObjectName(QStringLiteral("red_wire"));
        red_wire->setGeometry(QRect(20, 30, 81, 20));
        blue_wire = new QCheckBox(centralWidget);
        blue_wire->setObjectName(QStringLiteral("blue_wire"));
        blue_wire->setGeometry(QRect(20, 70, 81, 20));
        star = new QCheckBox(centralWidget);
        star->setObjectName(QStringLiteral("star"));
        star->setGeometry(QRect(110, 30, 81, 20));
        led = new QCheckBox(centralWidget);
        led->setObjectName(QStringLiteral("led"));
        led->setGeometry(QRect(110, 70, 81, 20));
        parallel_port = new QCheckBox(centralWidget);
        parallel_port->setObjectName(QStringLiteral("parallel_port"));
        parallel_port->setGeometry(QRect(190, 30, 101, 20));
        serial_even = new QCheckBox(centralWidget);
        serial_even->setObjectName(QStringLiteral("serial_even"));
        serial_even->setGeometry(QRect(190, 50, 131, 20));
        multi_batteries = new QCheckBox(centralWidget);
        multi_batteries->setObjectName(QStringLiteral("multi_batteries"));
        multi_batteries->setGeometry(QRect(190, 70, 131, 20));
        multi_batteries->setChecked(false);
        resetButton = new QPushButton(centralWidget);
        resetButton->setObjectName(QStringLiteral("resetButton"));
        resetButton->setGeometry(QRect(300, 10, 93, 28));
        result = new QLabel(centralWidget);
        result->setObjectName(QStringLiteral("result"));
        result->setGeometry(QRect(60, 135, 271, 91));
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        font.setWeight(75);
        result->setFont(font);
        result->setFrameShape(QFrame::WinPanel);
        result->setFrameShadow(QFrame::Sunken);
        result->setLineWidth(4);
        result->setMidLineWidth(4);
        result->setTextFormat(Qt::RichText);
        result->setScaledContents(false);
        result->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        wire_color_label->setText(QApplication::translate("MainWindow", "Wire Color", Q_NULLPTR));
        red_wire->setText(QApplication::translate("MainWindow", "Red", Q_NULLPTR));
        blue_wire->setText(QApplication::translate("MainWindow", "Blue", Q_NULLPTR));
        star->setText(QApplication::translate("MainWindow", "Star", Q_NULLPTR));
        led->setText(QApplication::translate("MainWindow", "LED", Q_NULLPTR));
        parallel_port->setText(QApplication::translate("MainWindow", "Parallel Port", Q_NULLPTR));
        serial_even->setText(QApplication::translate("MainWindow", "Last Serial # Even", Q_NULLPTR));
        multi_batteries->setText(QApplication::translate("MainWindow", "Batteries >= 2", Q_NULLPTR));
        resetButton->setText(QApplication::translate("MainWindow", "RESET", Q_NULLPTR));
        result->setText(QApplication::translate("MainWindow", "CUT", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
