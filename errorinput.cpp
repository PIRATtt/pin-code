#include "errorinput.h"
#include "ui_errorinput.h"

ErrorInput::ErrorInput(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ErrorInput)
{
    ui->setupUi(this);
}

ErrorInput::~ErrorInput()
{
    delete ui;
}
