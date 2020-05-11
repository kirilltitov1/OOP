#include "controllerview.h"
#include "ui_controllerview.h"

ControllerView::ControllerView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ControllerView)
{
    ui->setupUi(this);
}

void ControllerView::assemblyUI() {
    this->setFixedWidth(285);

    Validator = new QRegExpValidator(QRegExp("^[+-]?[0-9]{0,5}(\\.|,|$)[0-9]{0,4}$"));
    ui->xField->setValidator(Validator);
    ui->yField->setValidator(Validator);
    ui->zField->setValidator(Validator);

    ui->dxField->setValidator(Validator);
    ui->dyField->setValidator(Validator);
    ui->dzField->setValidator(Validator);

    ui->kField->setValidator(Validator);
}

void ControllerView::getScene(GraphicScene *scene) {
    this->scene.width = scene->width;
    this->scene.height = scene->height;
    this->scene.scene = scene->scene;
}

ControllerView::~ControllerView()
{
    delete ui;
}

void ControllerView::on_moveButton_clicked()
{

}

void ControllerView::on_rotateButton_clicked()
{

}


void ControllerView::on_scaleButton_clicked()
{

}

void ControllerView::on_clearButto_clicked()
{

}

void ControllerView::on_loadModelButton_clicked()
{

}
