/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <plotter.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionEscultor;
    QAction *actionPutVoxel;
    QAction *actionCutVoxel;
    QAction *actionPutBox;
    QAction *actionCutBox;
    QAction *actionPutSphere;
    QAction *actionCutSphere;
    QAction *actionPutEllipsoid;
    QAction *actionCutEllipsoid;
    QAction *actionSalvar;
    QAction *actionSair;
    QAction *actionSalvar_2;
    QWidget *centralWidget;
    QSpinBox *spinBox_5;
    QSlider *sliderCz;
    QLabel *label_13;
    QLabel *label_7;
    QSlider *sliderCx;
    QSlider *sliderCy;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QSlider *sliderB;
    QLabel *label_2;
    QSlider *sliderG;
    QLabel *label;
    QLabel *label_3;
    QSlider *sliderR;
    QLabel *label_11;
    QLabel *label_4;
    QSlider *sliderRaio;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_12;
    QSpinBox *spinBox_6;
    Plotter *widget;
    QSpinBox *spinBox_4;
    QSpinBox *spinBox_7;
    QWidget *layoutWidget_2;
    QFormLayout *formLayout;
    QLabel *label_9;
    QSlider *sliderA;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(884, 473);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        MainWindow->setContextMenuPolicy(Qt::DefaultContextMenu);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        actionEscultor = new QAction(MainWindow);
        actionEscultor->setObjectName(QString::fromUtf8("actionEscultor"));
        QFont font;
        font.setPointSize(12);
        actionEscultor->setFont(font);
        actionPutVoxel = new QAction(MainWindow);
        actionPutVoxel->setObjectName(QString::fromUtf8("actionPutVoxel"));
        actionPutVoxel->setCheckable(true);
        actionPutVoxel->setChecked(false);
        actionCutVoxel = new QAction(MainWindow);
        actionCutVoxel->setObjectName(QString::fromUtf8("actionCutVoxel"));
        actionCutVoxel->setCheckable(true);
        actionPutBox = new QAction(MainWindow);
        actionPutBox->setObjectName(QString::fromUtf8("actionPutBox"));
        actionPutBox->setCheckable(true);
        actionCutBox = new QAction(MainWindow);
        actionCutBox->setObjectName(QString::fromUtf8("actionCutBox"));
        actionCutBox->setCheckable(true);
        actionPutSphere = new QAction(MainWindow);
        actionPutSphere->setObjectName(QString::fromUtf8("actionPutSphere"));
        actionPutSphere->setCheckable(true);
        actionCutSphere = new QAction(MainWindow);
        actionCutSphere->setObjectName(QString::fromUtf8("actionCutSphere"));
        actionCutSphere->setCheckable(true);
        actionPutEllipsoid = new QAction(MainWindow);
        actionPutEllipsoid->setObjectName(QString::fromUtf8("actionPutEllipsoid"));
        actionPutEllipsoid->setCheckable(true);
        actionCutEllipsoid = new QAction(MainWindow);
        actionCutEllipsoid->setObjectName(QString::fromUtf8("actionCutEllipsoid"));
        actionCutEllipsoid->setCheckable(true);
        actionSalvar = new QAction(MainWindow);
        actionSalvar->setObjectName(QString::fromUtf8("actionSalvar"));
        actionSair = new QAction(MainWindow);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        actionSalvar_2 = new QAction(MainWindow);
        actionSalvar_2->setObjectName(QString::fromUtf8("actionSalvar_2"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setMaximumSize(QSize(1300, 990));
        spinBox_5 = new QSpinBox(centralWidget);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));
        spinBox_5->setGeometry(QRect(780, 180, 42, 22));
        sliderCz = new QSlider(centralWidget);
        sliderCz->setObjectName(QString::fromUtf8("sliderCz"));
        sliderCz->setGeometry(QRect(650, 210, 131, 22));
        sliderCz->setOrientation(Qt::Horizontal);
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(620, 270, 21, 16));
        label_13->setFont(font);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(620, 210, 16, 16));
        label_7->setFont(font);
        sliderCx = new QSlider(centralWidget);
        sliderCx->setObjectName(QString::fromUtf8("sliderCx"));
        sliderCx->setGeometry(QRect(650, 150, 131, 22));
        sliderCx->setOrientation(Qt::Horizontal);
        sliderCy = new QSlider(centralWidget);
        sliderCy->setObjectName(QString::fromUtf8("sliderCy"));
        sliderCy->setGeometry(QRect(650, 180, 131, 22));
        sliderCy->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(671, 30, 151, 80));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        sliderB = new QSlider(layoutWidget);
        sliderB->setObjectName(QString::fromUtf8("sliderB"));
        sliderB->setMaximum(255);
        sliderB->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderB, 2, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        sliderG = new QSlider(layoutWidget);
        sliderG->setObjectName(QString::fromUtf8("sliderG"));
        sliderG->setMaximum(255);
        sliderG->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderG, 1, 1, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        sliderR = new QSlider(layoutWidget);
        sliderR->setObjectName(QString::fromUtf8("sliderR"));
        sliderR->setMaximum(255);
        sliderR->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderR, 0, 1, 1, 1);

        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(660, 10, 91, 16));
        label_11->setFont(font);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(690, 130, 47, 13));
        label_4->setFont(font);
        sliderRaio = new QSlider(centralWidget);
        sliderRaio->setObjectName(QString::fromUtf8("sliderRaio"));
        sliderRaio->setGeometry(QRect(650, 270, 131, 22));
        sliderRaio->setOrientation(Qt::Horizontal);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(620, 150, 21, 16));
        label_5->setFont(font);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(620, 180, 21, 16));
        label_6->setFont(font);
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(690, 250, 47, 13));
        label_12->setFont(font);
        spinBox_6 = new QSpinBox(centralWidget);
        spinBox_6->setObjectName(QString::fromUtf8("spinBox_6"));
        spinBox_6->setGeometry(QRect(780, 210, 42, 22));
        widget = new Plotter(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 0, 531, 391));
        spinBox_4 = new QSpinBox(centralWidget);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));
        spinBox_4->setGeometry(QRect(780, 270, 42, 22));
        spinBox_7 = new QSpinBox(centralWidget);
        spinBox_7->setObjectName(QString::fromUtf8("spinBox_7"));
        spinBox_7->setGeometry(QRect(780, 150, 42, 22));
        layoutWidget_2 = new QWidget(centralWidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(610, 20, 38, 108));
        formLayout = new QFormLayout(layoutWidget_2);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QFont font1;
        font1.setPointSize(10);
        label_9->setFont(font1);

        formLayout->setWidget(0, QFormLayout::FieldRole, label_9);

        sliderA = new QSlider(centralWidget);
        sliderA->setObjectName(QString::fromUtf8("sliderA"));
        sliderA->setGeometry(QRect(620, 40, 22, 84));
        sliderA->setOrientation(Qt::Vertical);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 884, 21));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setFont(font);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionSair);
        menuMenu->addAction(actionSalvar_2);
        mainToolBar->addAction(actionEscultor);
        mainToolBar->addAction(actionPutVoxel);
        mainToolBar->addAction(actionCutVoxel);
        mainToolBar->addAction(actionPutBox);
        mainToolBar->addAction(actionCutBox);
        mainToolBar->addAction(actionPutSphere);
        mainToolBar->addAction(actionCutSphere);

        retranslateUi(MainWindow);
        QObject::connect(actionPutVoxel, SIGNAL(triggered(bool)), MainWindow, SLOT(execTipo(bool)));
        QObject::connect(actionCutVoxel, SIGNAL(triggered(bool)), MainWindow, SLOT(execTipo(bool)));
        QObject::connect(actionPutBox, SIGNAL(triggered(bool)), MainWindow, SLOT(execTipo(bool)));
        QObject::connect(actionCutBox, SIGNAL(triggered(bool)), MainWindow, SLOT(execTipo(bool)));
        QObject::connect(actionPutSphere, SIGNAL(triggered(bool)), MainWindow, SLOT(execTipo(bool)));
        QObject::connect(actionCutSphere, SIGNAL(triggered(bool)), MainWindow, SLOT(execTipo(bool)));
        QObject::connect(actionPutEllipsoid, SIGNAL(triggered(bool)), MainWindow, SLOT(execTipo(bool)));
        QObject::connect(actionCutEllipsoid, SIGNAL(triggered(bool)), MainWindow, SLOT(execTipo(bool)));
        QObject::connect(actionSair, SIGNAL(triggered()), MainWindow, SLOT(Sair()));
        QObject::connect(actionSalvar_2, &QAction::triggered, widget, qOverload<>(&Plotter::salvaEscultor));
        QObject::connect(sliderCx, &QSlider::valueChanged, spinBox_7, &QSpinBox::setValue);
        QObject::connect(sliderCy, &QSlider::valueChanged, spinBox_5, &QSpinBox::setValue);
        QObject::connect(sliderCz, &QSlider::valueChanged, spinBox_6, &QSpinBox::setValue);
        QObject::connect(sliderRaio, &QSlider::valueChanged, spinBox_4, &QSpinBox::setValue);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionEscultor->setText(QCoreApplication::translate("MainWindow", "Escultor", nullptr));
        actionPutVoxel->setText(QCoreApplication::translate("MainWindow", "PutVoxel", nullptr));
        actionCutVoxel->setText(QCoreApplication::translate("MainWindow", "CutVoxel", nullptr));
        actionPutBox->setText(QCoreApplication::translate("MainWindow", "PutBox", nullptr));
        actionCutBox->setText(QCoreApplication::translate("MainWindow", "CutBox", nullptr));
        actionPutSphere->setText(QCoreApplication::translate("MainWindow", "PutSphere", nullptr));
        actionCutSphere->setText(QCoreApplication::translate("MainWindow", "CutSphere", nullptr));
        actionPutEllipsoid->setText(QCoreApplication::translate("MainWindow", "PutEllipsoid", nullptr));
        actionCutEllipsoid->setText(QCoreApplication::translate("MainWindow", "CutEllipsoid", nullptr));
        actionSalvar->setText(QCoreApplication::translate("MainWindow", "OFF", nullptr));
        actionSair->setText(QCoreApplication::translate("MainWindow", "Sair", nullptr));
        actionSalvar_2->setText(QCoreApplication::translate("MainWindow", "Salvar", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Cor do Pixel", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Caixa", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Esfera", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("MainWindow", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
