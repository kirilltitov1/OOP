#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QHBoxLayout>

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QHBoxLayout *layout = new QHBoxLayout;
    ui->centralwidget->setLayout(layout);
    this->setWindowTitle("Lab_01");

    graphicView = new GraphicView;
    layout->addWidget(graphicView);

    controllerView = new ControllerView;
    layout->addWidget(controllerView);

}

MainWindow::~MainWindow()
{
    delete ui;
    delete graphicView;
    delete controllerView;
}
