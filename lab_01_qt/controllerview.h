#ifndef CONTROLLERVIEW_H
#define CONTROLLERVIEW_H

#include <QWidget>
#include <QtGui>

#include "graphicScene.h"

namespace Ui {
class ControllerView;
}

class ControllerView : public QWidget
{
    Q_OBJECT

public:
    explicit ControllerView(QWidget *parent = nullptr);
    ~ControllerView();

    void getScene(GraphicScene *);

private slots:
    void on_rotateButton_clicked();

    void on_moveButton_clicked();

    void on_scaleButton_clicked();

    void on_clearButto_clicked();

    void on_loadModelButton_clicked();

private:
    Ui::ControllerView *ui;
    QRegExpValidator *Validator;
    GraphicScene scene;

    void assemblyUI();
};

#endif // CONTROLLERVIEW_H
