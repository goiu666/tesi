#include "../generazione_chiavi.h"
#include "../funzioni_di_codifica.h"
#include "../funzioni_di_decodifica.h"
#include "encryption_form.h"
#include "ui_encryption_form.h"
#include "mainwindow.h"
#include <QByteArray> // per l'input da codificare
encryption_form::encryption_form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::encryption_form)
{
    ui->setupUi(this);
    ui->input_clear_text->setFocus();
    if(last_decodified_mex!="")
        ui->input_clear_text->setText(last_decodified_mex);
}

encryption_form::~encryption_form()
{
    delete ui;
}
void encryption_form::traduci_input(const QString& input)
{
    auto x{input.toLower()};
    QByteArray ba{x.toLocal8Bit()};
    auto e{codifica_rsa(ba.data(),input.size(),key.get_public_key(),alfabeto_a)};
    last_codified_mex = e;
    QString dec_mex;
    n_letters = ba.size();
    for(int i{};i<ba.size();++i)
        dec_mex+=QString::number(e[i]);
    ui->output_encryption->setText(dec_mex);
    ui->input_clear_text->setFocus();
}
void encryption_form::on_btn_traduci_clicked()
{
    if(ui->input_clear_text->text()!="")
       traduci_input(ui->input_clear_text->text());
    ui->input_clear_text->setFocus();
}

void encryption_form::on_btn_cancella_clicked()
{

    ui->input_clear_text->setText("");
    ui->output_encryption->setText("");
    ui->input_clear_text->setFocus();
}
