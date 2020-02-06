#include "mainwindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent) : DMainWindow(parent)
{
    initUI();
    initConnections();
}

void MainWindow::initUI()
{
    // 设置主窗口内容
    QFrame *content = new QFrame;
    content->setStyleSheet("background: red");

    setCentralWidget(content);
}

void MainWindow::initConnections()
{
    qDebug() << "hahhahhha";
}
