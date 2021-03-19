#ifndef ENCRYPTION_FORM_H
#define ENCRYPTION_FORM_H

#include <QDialog>

namespace Ui {
class encryption_form;
}

class encryption_form : public QDialog
{
    Q_OBJECT

public:
    explicit encryption_form(QWidget *parent = nullptr);
    ~encryption_form();

private slots:
    void on_btn_traduci_clicked();
    void on_btn_cancella_clicked();

private:
    Ui::encryption_form *ui;
    void traduci_input(const QString&);
};

#endif // ENCRYPTION_FORM_H
