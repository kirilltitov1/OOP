/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *mainLayout;
    QGraphicsView *graphicsView;
    QVBoxLayout *verticalLayout;
    QLabel *labelLoadFile;
    QLineEdit *lineEditFilename;
    QPushButton *pushButtonOpenFile;
    QLabel *labelMovement;
    QGridLayout *gridLayout;
    QLabel *labelX;
    QSpinBox *spinBoxMoveX;
    QLabel *labelZ;
    QLabel *labelY;
    QSpinBox *spinBoxMoveY;
    QSpinBox *spinBoxMoveZ;
    QPushButton *pushButtonMove;
    QLabel *labelScaling;
    QHBoxLayout *horizontalLayout_3;
    QDoubleSpinBox *spinBoxScale;
    QPushButton *pushButtonScale;
    QLabel *labelRotation;
    QLabel *labelAngle;
    QSpinBox *spinBoxAngle;
    QGridLayout *gridLayout_2;
    QPushButton *pushButtonRotDown;
    QPushButton *pushButtonRotRight;
    QPushButton *pushButtonRotLeft;
    QPushButton *pushButtonRotUp;
    QPushButton *pushButtonRotateCloclwise;
    QPushButton *pushButtonRotateUnclockwise;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1142, 732);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setMinimumSize(QSize(300, 300));
        centralWidget->setMaximumSize(QSize(2000, 2000));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 0, 1121, 661));
        mainLayout = new QHBoxLayout(horizontalLayoutWidget);
        mainLayout->setSpacing(6);
        mainLayout->setContentsMargins(11, 11, 11, 11);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        mainLayout->setContentsMargins(0, 0, 0, 0);
        graphicsView = new QGraphicsView(horizontalLayoutWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setMinimumSize(QSize(800, 600));

        mainLayout->addWidget(graphicsView);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelLoadFile = new QLabel(horizontalLayoutWidget);
        labelLoadFile->setObjectName(QString::fromUtf8("labelLoadFile"));
        QFont font;
        font.setPointSize(12);
        labelLoadFile->setFont(font);

        verticalLayout->addWidget(labelLoadFile);

        lineEditFilename = new QLineEdit(horizontalLayoutWidget);
        lineEditFilename->setObjectName(QString::fromUtf8("lineEditFilename"));

        verticalLayout->addWidget(lineEditFilename);

        pushButtonOpenFile = new QPushButton(horizontalLayoutWidget);
        pushButtonOpenFile->setObjectName(QString::fromUtf8("pushButtonOpenFile"));

        verticalLayout->addWidget(pushButtonOpenFile);

        labelMovement = new QLabel(horizontalLayoutWidget);
        labelMovement->setObjectName(QString::fromUtf8("labelMovement"));
        labelMovement->setFont(font);

        verticalLayout->addWidget(labelMovement);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelX = new QLabel(horizontalLayoutWidget);
        labelX->setObjectName(QString::fromUtf8("labelX"));
        labelX->setMaximumSize(QSize(20, 16777215));
        labelX->setFont(font);

        gridLayout->addWidget(labelX, 0, 0, 1, 1);

        spinBoxMoveX = new QSpinBox(horizontalLayoutWidget);
        spinBoxMoveX->setObjectName(QString::fromUtf8("spinBoxMoveX"));
        spinBoxMoveX->setMinimum(-300);
        spinBoxMoveX->setMaximum(300);
        spinBoxMoveX->setValue(10);

        gridLayout->addWidget(spinBoxMoveX, 0, 1, 1, 1);

        labelZ = new QLabel(horizontalLayoutWidget);
        labelZ->setObjectName(QString::fromUtf8("labelZ"));
        labelZ->setFont(font);

        gridLayout->addWidget(labelZ, 2, 0, 1, 1);

        labelY = new QLabel(horizontalLayoutWidget);
        labelY->setObjectName(QString::fromUtf8("labelY"));
        labelY->setFont(font);

        gridLayout->addWidget(labelY, 1, 0, 1, 1);

        spinBoxMoveY = new QSpinBox(horizontalLayoutWidget);
        spinBoxMoveY->setObjectName(QString::fromUtf8("spinBoxMoveY"));
        spinBoxMoveY->setMinimum(-300);
        spinBoxMoveY->setMaximum(300);
        spinBoxMoveY->setValue(10);

        gridLayout->addWidget(spinBoxMoveY, 1, 1, 1, 1);

        spinBoxMoveZ = new QSpinBox(horizontalLayoutWidget);
        spinBoxMoveZ->setObjectName(QString::fromUtf8("spinBoxMoveZ"));
        spinBoxMoveZ->setMinimum(-300);
        spinBoxMoveZ->setMaximum(300);
        spinBoxMoveZ->setValue(10);

        gridLayout->addWidget(spinBoxMoveZ, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        pushButtonMove = new QPushButton(horizontalLayoutWidget);
        pushButtonMove->setObjectName(QString::fromUtf8("pushButtonMove"));

        verticalLayout->addWidget(pushButtonMove);

        labelScaling = new QLabel(horizontalLayoutWidget);
        labelScaling->setObjectName(QString::fromUtf8("labelScaling"));
        labelScaling->setFont(font);

        verticalLayout->addWidget(labelScaling);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        spinBoxScale = new QDoubleSpinBox(horizontalLayoutWidget);
        spinBoxScale->setObjectName(QString::fromUtf8("spinBoxScale"));

        horizontalLayout_3->addWidget(spinBoxScale);

        pushButtonScale = new QPushButton(horizontalLayoutWidget);
        pushButtonScale->setObjectName(QString::fromUtf8("pushButtonScale"));

        horizontalLayout_3->addWidget(pushButtonScale);


        verticalLayout->addLayout(horizontalLayout_3);

        labelRotation = new QLabel(horizontalLayoutWidget);
        labelRotation->setObjectName(QString::fromUtf8("labelRotation"));
        labelRotation->setFont(font);

        verticalLayout->addWidget(labelRotation);

        labelAngle = new QLabel(horizontalLayoutWidget);
        labelAngle->setObjectName(QString::fromUtf8("labelAngle"));
        labelAngle->setFont(font);

        verticalLayout->addWidget(labelAngle);

        spinBoxAngle = new QSpinBox(horizontalLayoutWidget);
        spinBoxAngle->setObjectName(QString::fromUtf8("spinBoxAngle"));
        spinBoxAngle->setMinimum(-360);
        spinBoxAngle->setMaximum(360);
        spinBoxAngle->setValue(1);

        verticalLayout->addWidget(spinBoxAngle);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButtonRotDown = new QPushButton(horizontalLayoutWidget);
        pushButtonRotDown->setObjectName(QString::fromUtf8("pushButtonRotDown"));
        QFont font1;
        font1.setPointSize(14);
        pushButtonRotDown->setFont(font1);

        gridLayout_2->addWidget(pushButtonRotDown, 1, 1, 1, 1);

        pushButtonRotRight = new QPushButton(horizontalLayoutWidget);
        pushButtonRotRight->setObjectName(QString::fromUtf8("pushButtonRotRight"));
        pushButtonRotRight->setFont(font1);

        gridLayout_2->addWidget(pushButtonRotRight, 1, 2, 1, 1);

        pushButtonRotLeft = new QPushButton(horizontalLayoutWidget);
        pushButtonRotLeft->setObjectName(QString::fromUtf8("pushButtonRotLeft"));
        pushButtonRotLeft->setFont(font1);

        gridLayout_2->addWidget(pushButtonRotLeft, 1, 0, 1, 1);

        pushButtonRotUp = new QPushButton(horizontalLayoutWidget);
        pushButtonRotUp->setObjectName(QString::fromUtf8("pushButtonRotUp"));
        pushButtonRotUp->setFont(font1);

        gridLayout_2->addWidget(pushButtonRotUp, 0, 1, 1, 1);

        pushButtonRotateCloclwise = new QPushButton(horizontalLayoutWidget);
        pushButtonRotateCloclwise->setObjectName(QString::fromUtf8("pushButtonRotateCloclwise"));
        pushButtonRotateCloclwise->setFont(font1);

        gridLayout_2->addWidget(pushButtonRotateCloclwise, 0, 0, 1, 1);

        pushButtonRotateUnclockwise = new QPushButton(horizontalLayoutWidget);
        pushButtonRotateUnclockwise->setObjectName(QString::fromUtf8("pushButtonRotateUnclockwise"));
        pushButtonRotateUnclockwise->setFont(font1);

        gridLayout_2->addWidget(pushButtonRotateUnclockwise, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_2);


        mainLayout->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1142, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        labelLoadFile->setText(QCoreApplication::translate("MainWindow", "Load file", nullptr));
        lineEditFilename->setText(QCoreApplication::translate("MainWindow", "/Users/kirilltitov/Documents/BMSTU/4sem/OOP/fromCG_lab_02/lab_01/cube", nullptr));
        pushButtonOpenFile->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        labelMovement->setText(QCoreApplication::translate("MainWindow", "Movement", nullptr));
        labelX->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        labelZ->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        labelY->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        pushButtonMove->setText(QCoreApplication::translate("MainWindow", "Move", nullptr));
        labelScaling->setText(QCoreApplication::translate("MainWindow", "Scaling", nullptr));
        pushButtonScale->setText(QCoreApplication::translate("MainWindow", "Scale", nullptr));
        labelRotation->setText(QCoreApplication::translate("MainWindow", "Rotation", nullptr));
        labelAngle->setText(QCoreApplication::translate("MainWindow", "Angle", nullptr));
        pushButtonRotDown->setText(QCoreApplication::translate("MainWindow", "\342\206\223", nullptr));
        pushButtonRotRight->setText(QCoreApplication::translate("MainWindow", "\342\206\222", nullptr));
        pushButtonRotLeft->setText(QCoreApplication::translate("MainWindow", "\342\206\220", nullptr));
        pushButtonRotUp->setText(QCoreApplication::translate("MainWindow", "\342\206\221", nullptr));
        pushButtonRotateCloclwise->setText(QCoreApplication::translate("MainWindow", "\342\206\273", nullptr));
        pushButtonRotateUnclockwise->setText(QCoreApplication::translate("MainWindow", "\342\206\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
