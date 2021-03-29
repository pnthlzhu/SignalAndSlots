#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QObject::connect(ui->btnSum, SIGNAL(clicked()), this, SLOT(doBtnSumClick()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::doBtnSumClick()
{
    //qDebug() << "hello slots" << endl;
    QString v1 = ui->lineNum1->text();
    QString v2 = ui->lineNum2->text();

    int iSum = v1.toInt() + v2.toInt();

    ui->lineSum->setText(QString::number(iSum));
}
