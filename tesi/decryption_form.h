#ifndef DECRYPTION_FORM_H
#define DECRYPTION_FORM_H

#include <QDialog>

namespace Ui {
class decryption_form;
}

class decryption_form : public QDialog
{
    Q_OBJECT

public:
    explicit decryption_form(QWidget *parent = nullptr);
    ~decryption_form();

private slots:
    void on_btn_decifra_clicked();
    void on_btn_cancella_clicked();
    void on_cbo_alfabeto_textActivated(const QString &arg1);

private:
    Ui::decryption_form *ui;
    bool just_opened{true};
};

#endif // DECRYPTION_FORM_H
