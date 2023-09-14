#include "database.h"
#include "ui_database.h"

DataBase::DataBase(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DataBase)
{
    ui->setupUi(this);
}

DataBase::~DataBase()
{
    delete ui;
}
