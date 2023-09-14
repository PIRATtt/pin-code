#include "secondwindow.h"
#include "ui_secondwindows.h"
#include "QMessageBox" // специальный класс для открытия окна
#include "QDebug"
#include "QPixmap"

SecondWindow::SecondWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecondWindow)
{
    ui->setupUi(this);
}

SecondWindow::~SecondWindow()
{
    delete ui;
}
