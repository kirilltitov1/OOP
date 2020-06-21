#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QObject>
#include "errors.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void onOpenClicked();
    void onMoveClicked();
    void onScaleClicked();
    void onRotateUpClicked();
    void onRotateDownClicked();
    void onRotateLeftClicked();
    void onRotateRightCLicked();
    void onRotateClockwiseClicked();
    void onRotateUnclockwiseClicked();

private:
    Ui::MainWindow *ui;
    Errors onRotateX(int angle);
    Errors onRotateY(int angle);
    Errors onRotateZ(int angle);
};

#endif // MAINWINDOW_H
