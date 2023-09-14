#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "database.h"
#include "errorinput.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::on_pushButton_clicked()
{
    hide();
    if (ui->pin->text() == "1234") {
        window = new DataBase(this);
        window->show();
    } else {
        errorwindow = new ErrorInput(this);
        errorwindow->show();

    }
}

