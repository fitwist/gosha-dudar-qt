#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QListWidgetItem>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QListWidgetItem *item_1 = new QListWidgetItem(QIcon(":/img/img/attribution.png"), "Audi");
    ui->listWidget->addItem(item_1);
    QListWidgetItem *item_2 = new QListWidgetItem(QIcon(":/img/img/broadcast.png"), "BMW");
    ui->listWidget->addItem(item_2);
    QListWidgetItem *item_3 = new QListWidgetItem(QIcon(":/img/img/targeting.png"), "Volvo");
    ui->listWidget->addItem(item_3);
    ui->listWidget->addItem("Ford");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->statusBar->showMessage(ui->listWidget->currentItem()->text());
    ui->listWidget->currentItem()->setBackgroundColor(Qt::blue);
    ui->listWidget->currentItem()->setForeground(Qt::white);
}
