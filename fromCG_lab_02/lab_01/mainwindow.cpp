#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "entry.h"
#include "errors.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QObject::connect(ui->pushButtonOpenFile, SIGNAL(clicked()), SLOT(onOpenClicked()));
    QObject::connect(ui->pushButtonMove, SIGNAL(clicked()), SLOT(onMoveClicked()));
    QObject::connect(ui->pushButtonScale, SIGNAL(clicked()), SLOT(onScaleClicked()));
    QObject::connect(ui->pushButtonRotUp, SIGNAL(clicked()), SLOT(onRotateUpClicked()));
    QObject::connect(ui->pushButtonRotDown, SIGNAL(clicked()), SLOT(onRotateDownClicked()));
    QObject::connect(ui->pushButtonRotLeft, SIGNAL(clicked()), SLOT(onRotateLeftClicked()));
    QObject::connect(ui->pushButtonRotRight, SIGNAL(clicked()), SLOT(onRotateRightCLicked()));
    QObject::connect(ui->pushButtonRotateCloclwise, SIGNAL(clicked()), SLOT(onRotateClockwiseClicked()));
    QObject::connect(ui->pushButtonRotateUnclockwise, SIGNAL(clicked()), SLOT(onRotateUnclockwiseClicked()));
}

MainWindow::~MainWindow()
{
    Args args;
    args.action = QUIT;
    enter(args);
    delete ui;
}

void MainWindow::onOpenClicked()
{
    Args args;
    args.action = LOAD_FILE;
    LoadFile lf;
    lf.filename = "/Users/kirilltitov/Downloads/BMSTU-OOP-master-2/OOP_lab1/cube";
    args.lf = lf;
    Errors err = static_cast<Errors>(enter(args));
    if (err != OK)
    {
        errorMessage(err);
    }
    else
    {
        Draw draw;
        draw.gV = ui->graphicsView;
        draw.heigh = ui->graphicsView->height();
        draw.width = ui->graphicsView->width();

        args.action = DRAW;
        args.draw = draw;
        draw.gV->setSceneRect(800, 600, 1, 1);
        err = static_cast<Errors>(enter(args));
        if (err != OK)
        {
            errorMessage(err);
        }
    }
}

void MainWindow::onMoveClicked()
{
    Args args;
    args.action = MOVE;
    Movement transfer;
    transfer.x = ui->spinBoxMoveX->value();
    transfer.y = -(ui->spinBoxMoveY->value());
    transfer.z = ui->spinBoxMoveZ->value();
    args.move = transfer;
    Errors err = static_cast<Errors>(enter(args));
    if (err)
    {
        errorMessage(err);
    }
    Draw draw;
    draw.gV = ui->graphicsView;
    draw.heigh = ui->graphicsView->height();
    draw.width = ui->graphicsView->width();
    args.action = DRAW;
    args.draw = draw;
    err = static_cast<Errors>(enter(args));
    if (err)
    {
        errorMessage(err);
    }
}

void MainWindow::onScaleClicked()
{
    Args args;
    args.action = SCALE;
    Scale scale;
    scale.sc = ui->spinBoxScale->value();
    args.scale = scale;

    Errors err = static_cast<Errors>(enter(args));
    if (err)
    {
        errorMessage(err);
    }

    Draw draw;
    draw.gV = ui->graphicsView;
    draw.heigh = ui->graphicsView->height();
    draw.width = ui->graphicsView->width();

    args.action = DRAW;
    args.draw = draw;

    err = static_cast<Errors>(enter(args));
    if (err)
    {
        errorMessage(err);
    }
}

Errors MainWindow::onRotateX(int angle)
{
    Args args;
    args.action = TURNX;

    Turn turn;
    turn.angle = angle;
    args.turn = turn;

    Errors err = static_cast<Errors>(enter(args));
    if (err != OK)
        return err;

    Draw draw;
    draw.gV = ui->graphicsView;
    draw.heigh = ui->graphicsView->height();
    draw.width = ui->graphicsView->width();

    args.action = DRAW;
    args.draw = draw;

    err = static_cast<Errors>(enter(args));
    return err;
}

Errors MainWindow::onRotateY(int angle)
{
    Args args;
    args.action = TURNY;

    Turn turn;
    turn.angle = angle;
    args.turn = turn;
    Errors err = static_cast<Errors>(enter(args));
    if (err != OK)
        return err;
    Draw draw;
    draw.gV = ui->graphicsView;
    draw.heigh = ui->graphicsView->height();
    draw.width = ui->graphicsView->width();

    args.action = DRAW;
    args.draw = draw;
    err = static_cast<Errors>(enter(args));
    return err;
}

Errors MainWindow::onRotateZ(int angle)
{
    Args args;
    args.action = TURNZ;

    Turn turn;
    turn.angle = angle;
    args.turn = turn;

    Errors err = static_cast<Errors>(enter(args));
    if (err != OK)
        return err;

    Draw draw;
    draw.gV = ui->graphicsView;
    draw.heigh = ui->graphicsView->height();
    draw.width = ui->graphicsView->width();

    args.action = DRAW;
    args.draw = draw;

    err = static_cast<Errors>(enter(args));
    return err;
}

void MainWindow::onRotateUpClicked()
{
    int angle = -(ui->spinBoxAngle->value());
    Errors err = onRotateX(angle);
    if (err != OK)
    {
        errorMessage(err);
    }
}

void MainWindow::onRotateDownClicked()
{
    int angle = ui->spinBoxAngle->value();
    Errors err = onRotateX(angle);
    if (err)
    {
        errorMessage(err);
    }
}

void MainWindow::onRotateLeftClicked()
{
    int angle = -(ui->spinBoxAngle->value());
    Errors err = onRotateY(angle);
    if (err != OK)
    {
        errorMessage(err);
    }
}

void MainWindow::onRotateRightCLicked()
{
    int angle = ui->spinBoxAngle->value();
    Errors err = onRotateY(angle);
    if (err != OK)
    {
        errorMessage(err);
    }
}

void MainWindow::onRotateClockwiseClicked()
{
    int angle = -(ui->spinBoxAngle->value());
    Errors err = onRotateZ(angle);
    if (err != OK)
    {
        errorMessage(err);
    }
}

void MainWindow::onRotateUnclockwiseClicked()
{
    int angle = ui->spinBoxAngle->value();
    Errors err = onRotateZ(angle);
    if (err != OK)
    {
        errorMessage(err);
    }
}
