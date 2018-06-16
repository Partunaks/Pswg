#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<ctime>
#include<iostream>
#include<QDebug>
#include<QChar>

QString chars="abcdefghijklmnopqrstuvwxyz";
QString numbers="0123456789";
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    srand(time(NULL));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

    int ran=0;
    QString buff;
    QString pass;
    int length = ui->spinBox->value();
    buff += chars;
         if(ui->UpperCase->checkState())
         {
             buff += chars.toUpper();
         }
         if(ui->Numbers->checkState())
         {

             buff += numbers;
         }
    for(int i=0;i<length;i++)
    {
     ran = 1 + rand() % buff.length()-1;
     pass += buff.at(ran);
    }
    ui->lineEdit->setText(pass);
    buff="";
    pass="";
}

