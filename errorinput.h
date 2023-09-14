#ifndef ERRORINPUT_H
#define ERRORINPUT_H

#include <QDialog>

namespace Ui {
class ErrorInput;
}

class ErrorInput : public QDialog
{
    Q_OBJECT

public:
    explicit ErrorInput(QWidget *parent = nullptr);
    ~ErrorInput();

private:
    Ui::ErrorInput *ui;
};

#endif // ERRORINPUT_H
