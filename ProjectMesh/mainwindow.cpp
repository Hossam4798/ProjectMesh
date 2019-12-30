#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    nodeWindow = new NodeWindow();
    timer = new QTimer();
    connect(timer,&QTimer::timeout,this,&MainWindow::changeWindow);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeWindow(){
    if(nodeWindow->isVisible()){
        nodeWindow->hide();
        this->show();
    }else{
        this->hide();
        nodeWindow->show();
    }
}

void MainWindow::on_pushButton_clicked()
{
    nodeWindow->show();
}
