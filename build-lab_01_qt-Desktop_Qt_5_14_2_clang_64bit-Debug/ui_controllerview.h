/********************************************************************************
** Form generated from reading UI file 'controllerview.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLLERVIEW_H
#define UI_CONTROLLERVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ControllerView
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *rotateForm;
    QLabel *xLabel;
    QLineEdit *xField;
    QLabel *yLabel;
    QLineEdit *yField;
    QLabel *zLabel;
    QLineEdit *zField;
    QWidget *formLayoutWidget_2;
    QFormLayout *scaleForm;
    QLabel *dxLabel;
    QLineEdit *dxField;
    QLabel *dyLabel;
    QLineEdit *dyField;
    QLabel *dzLabel;
    QLineEdit *dzField;
    QPushButton *rotateButton;
    QPushButton *moveButton;
    QPushButton *scaleButton;
    QLabel *kLabel;
    QLineEdit *kField;
    QPushButton *loadModelButton;
    QPushButton *clearButto;

    void setupUi(QWidget *ControllerView)
    {
        if (ControllerView->objectName().isEmpty())
            ControllerView->setObjectName(QString::fromUtf8("ControllerView"));
        ControllerView->resize(294, 385);
        formLayoutWidget = new QWidget(ControllerView);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(0, 0, 131, 91));
        rotateForm = new QFormLayout(formLayoutWidget);
        rotateForm->setObjectName(QString::fromUtf8("rotateForm"));
        rotateForm->setVerticalSpacing(6);
        rotateForm->setContentsMargins(0, 0, 0, 0);
        xLabel = new QLabel(formLayoutWidget);
        xLabel->setObjectName(QString::fromUtf8("xLabel"));
        xLabel->setAlignment(Qt::AlignCenter);

        rotateForm->setWidget(0, QFormLayout::LabelRole, xLabel);

        xField = new QLineEdit(formLayoutWidget);
        xField->setObjectName(QString::fromUtf8("xField"));

        rotateForm->setWidget(0, QFormLayout::FieldRole, xField);

        yLabel = new QLabel(formLayoutWidget);
        yLabel->setObjectName(QString::fromUtf8("yLabel"));
        yLabel->setAlignment(Qt::AlignCenter);

        rotateForm->setWidget(1, QFormLayout::LabelRole, yLabel);

        yField = new QLineEdit(formLayoutWidget);
        yField->setObjectName(QString::fromUtf8("yField"));

        rotateForm->setWidget(1, QFormLayout::FieldRole, yField);

        zLabel = new QLabel(formLayoutWidget);
        zLabel->setObjectName(QString::fromUtf8("zLabel"));
        zLabel->setAlignment(Qt::AlignCenter);

        rotateForm->setWidget(2, QFormLayout::LabelRole, zLabel);

        zField = new QLineEdit(formLayoutWidget);
        zField->setObjectName(QString::fromUtf8("zField"));

        rotateForm->setWidget(2, QFormLayout::FieldRole, zField);

        formLayoutWidget_2 = new QWidget(ControllerView);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(150, 0, 141, 91));
        scaleForm = new QFormLayout(formLayoutWidget_2);
        scaleForm->setObjectName(QString::fromUtf8("scaleForm"));
        scaleForm->setRowWrapPolicy(QFormLayout::DontWrapRows);
        scaleForm->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        scaleForm->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scaleForm->setContentsMargins(0, 0, 0, 0);
        dxLabel = new QLabel(formLayoutWidget_2);
        dxLabel->setObjectName(QString::fromUtf8("dxLabel"));

        scaleForm->setWidget(0, QFormLayout::LabelRole, dxLabel);

        dxField = new QLineEdit(formLayoutWidget_2);
        dxField->setObjectName(QString::fromUtf8("dxField"));

        scaleForm->setWidget(0, QFormLayout::FieldRole, dxField);

        dyLabel = new QLabel(formLayoutWidget_2);
        dyLabel->setObjectName(QString::fromUtf8("dyLabel"));

        scaleForm->setWidget(1, QFormLayout::LabelRole, dyLabel);

        dyField = new QLineEdit(formLayoutWidget_2);
        dyField->setObjectName(QString::fromUtf8("dyField"));

        scaleForm->setWidget(1, QFormLayout::FieldRole, dyField);

        dzLabel = new QLabel(formLayoutWidget_2);
        dzLabel->setObjectName(QString::fromUtf8("dzLabel"));

        scaleForm->setWidget(2, QFormLayout::LabelRole, dzLabel);

        dzField = new QLineEdit(formLayoutWidget_2);
        dzField->setObjectName(QString::fromUtf8("dzField"));

        scaleForm->setWidget(2, QFormLayout::FieldRole, dzField);

        rotateButton = new QPushButton(ControllerView);
        rotateButton->setObjectName(QString::fromUtf8("rotateButton"));
        rotateButton->setGeometry(QRect(10, 100, 116, 24));
        moveButton = new QPushButton(ControllerView);
        moveButton->setObjectName(QString::fromUtf8("moveButton"));
        moveButton->setGeometry(QRect(160, 100, 121, 24));
        scaleButton = new QPushButton(ControllerView);
        scaleButton->setObjectName(QString::fromUtf8("scaleButton"));
        scaleButton->setGeometry(QRect(160, 150, 121, 24));
        kLabel = new QLabel(ControllerView);
        kLabel->setObjectName(QString::fromUtf8("kLabel"));
        kLabel->setGeometry(QRect(10, 150, 16, 16));
        kField = new QLineEdit(ControllerView);
        kField->setObjectName(QString::fromUtf8("kField"));
        kField->setGeometry(QRect(30, 150, 91, 24));
        loadModelButton = new QPushButton(ControllerView);
        loadModelButton->setObjectName(QString::fromUtf8("loadModelButton"));
        loadModelButton->setGeometry(QRect(20, 200, 101, 24));
        QFont font;
        font.setPointSize(13);
        font.setBold(false);
        font.setWeight(50);
        loadModelButton->setFont(font);
        clearButto = new QPushButton(ControllerView);
        clearButto->setObjectName(QString::fromUtf8("clearButto"));
        clearButto->setGeometry(QRect(170, 200, 101, 24));

        retranslateUi(ControllerView);

        QMetaObject::connectSlotsByName(ControllerView);
    } // setupUi

    void retranslateUi(QWidget *ControllerView)
    {
        ControllerView->setWindowTitle(QCoreApplication::translate("ControllerView", "Form", nullptr));
        xLabel->setText(QCoreApplication::translate("ControllerView", "x", nullptr));
        yLabel->setText(QCoreApplication::translate("ControllerView", "y", nullptr));
        zLabel->setText(QCoreApplication::translate("ControllerView", "z", nullptr));
        dxLabel->setText(QCoreApplication::translate("ControllerView", "dx", nullptr));
        dyLabel->setText(QCoreApplication::translate("ControllerView", "dy", nullptr));
        dzLabel->setText(QCoreApplication::translate("ControllerView", "dz", nullptr));
        rotateButton->setText(QCoreApplication::translate("ControllerView", "Rotate", nullptr));
        moveButton->setText(QCoreApplication::translate("ControllerView", "Move", nullptr));
        scaleButton->setText(QCoreApplication::translate("ControllerView", "Scale", nullptr));
        kLabel->setText(QCoreApplication::translate("ControllerView", "k", nullptr));
        loadModelButton->setText(QCoreApplication::translate("ControllerView", "Load model", nullptr));
        clearButto->setText(QCoreApplication::translate("ControllerView", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ControllerView: public Ui_ControllerView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLLERVIEW_H
