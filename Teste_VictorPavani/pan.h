#ifndef PAN_H
#define PAN_H

#include <QDialog>
#include <QAbstractButton>

namespace Ui {
class Pan;
}

class Pan : public QDialog
{
    Q_OBJECT

public:
    explicit Pan(QWidget *parent = nullptr);
    ~Pan();

private slots:
    void on_buttonBox_clicked(QAbstractButton *button);

    void on_pushButton_clicked();

private:
    Ui::Pan *ui;
};

#endif // PAN_H
