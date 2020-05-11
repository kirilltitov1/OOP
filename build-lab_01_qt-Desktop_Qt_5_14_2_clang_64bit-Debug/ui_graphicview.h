/********************************************************************************
** Form generated from reading UI file 'graphicview.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHICVIEW_H
#define UI_GRAPHICVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GraphicView
{
public:

    void setupUi(QWidget *GraphicView)
    {
        if (GraphicView->objectName().isEmpty())
            GraphicView->setObjectName(QString::fromUtf8("GraphicView"));
        GraphicView->resize(254, 441);

        retranslateUi(GraphicView);

        QMetaObject::connectSlotsByName(GraphicView);
    } // setupUi

    void retranslateUi(QWidget *GraphicView)
    {
        GraphicView->setWindowTitle(QCoreApplication::translate("GraphicView", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GraphicView: public Ui_GraphicView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHICVIEW_H
