#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/resource/img/okko.tv_subscription_67888.png");
    int w = ui->image->width();
    int h = ui->image->height();

    ui->image->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString login = ui->login->text();
    QString password = ui->pass->text();

    if(login != nullptr && password != nullptr) {
//        QMessageBox::information(this, "Ура", "Вы успешно авторизовались!");
        ui->statusBar->showMessage("Вы успешно авторизовались");
    } else {
//        QMessageBox::warning(this, "Авторизация", "Вы не авторизовались!");
        ui->statusBar->showMessage("Вы не авторизовались");
    }
}
