#include "graphicview.h"
#include "ui_graphicview.h"

GraphicView::GraphicView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GraphicView)
{
    ui->setupUi(this);
}

GraphicView::~GraphicView()
{
    delete ui;
}
