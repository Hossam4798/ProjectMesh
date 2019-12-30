#include "nodewindow.h"
#include "ui_nodewindow.h"

NodeWindow::NodeWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NodeWindow)
{
    ui->setupUi(this);
}

NodeWindow::~NodeWindow()
{
    delete ui;
}
