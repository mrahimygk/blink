#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QTimer>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->textEdit->setPlainText("300");
    time =  ui->textEdit->toPlainText().toLong();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QTimer::singleShot(time*1000/*1800000*/, [this](){
        show();
    });

    hide();
}

void MainWindow::on_pushButton_2_clicked()
{
    close();
}
void MainWindow::on_textEdit_textChanged()
{
    time = ui->textEdit->toPlainText().toLong();
}
