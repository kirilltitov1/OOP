#ifndef GRAPHICVIEW_H
#define GRAPHICVIEW_H

#include <QWidget>

namespace Ui {
class GraphicView;
}

class GraphicView : public QWidget
{
    Q_OBJECT

public:
    explicit GraphicView(QWidget *parent = nullptr);
    ~GraphicView();

private:
    Ui::GraphicView *ui;
};

#endif // GRAPHICVIEW_H
