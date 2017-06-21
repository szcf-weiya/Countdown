#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "lcdnumber.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle(QString::fromUtf8("CountDown Clock"));
    resize(1000, 1000);
    QWidget *centralWidget = new QWidget(this);
    LCDNumber *number = new LCDNumber(centralWidget, 5, 0);
    number->setGeometry(230, 130, 245, 245);
    number->setFixedSize(245, 245);
    setCentralWidget(centralWidget);
    number->timer->start(100);

}

MainWindow::~MainWindow()
{
    delete ui;
}
