#include "../funzioni_di_decodifica.h"
#include "decryption_form.h"
#include "ui_decryption_form.h"
#include "mainwindow.h"
#include <QString>
#include <vector> // per std::vector

decryption_form::decryption_form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::decryption_form)
{
    ui->setupUi(this);
    if(last_codified_mex)
    {
        QString mex;
        for(num_type i{};i<n_letters;++i)
            mex += QString::number(last_codified_mex[i])+'\n';
        ui->input_enc_mex->setText(mex);

    }
    ui->cbo_alfabeto->addItem("Scegli una lettera per volta:");
    for(const auto& item: alfabeto_a_codificato)
    {
        QString x{item.first};
        x = x + " : " + QString::number(item.second);
        ui->cbo_alfabeto->addItem(x);
    }
}

decryption_form::~decryption_form()
{
    delete ui;
}

void decryption_form::on_btn_decifra_clicked()
{
    QString x{ui->input_enc_mex->toPlainText()};
    QString::size_type i{0};
    QString temp;
    std::vector<num_type> a;
    while(i<x.size())
    {
        if(x[i]!='\n')
            temp+=x[i++];
        else
        {
            ++i;
            a.push_back(temp.toULongLong());
            temp = "";
        }
    }
    temp = "";
    auto f{decodifica_rsa(a.data(),a.size(),alfabeto_b,key)};
    i = 0;
    while(f[i]!='\0')
        temp+=f[i++];
    ui->output_dec->setText(temp);
    last_decodified_mex=temp;
}

void decryption_form::on_btn_cancella_clicked()
{
    ui->input_enc_mex->setText("");
    ui->output_dec->setText("");
    ui->input_enc_mex->setFocus();
}

void decryption_form::on_cbo_alfabeto_textActivated(const QString &arg1)
{
    if(just_opened)
        just_opened=false;
    else
    {
        if(arg1.compare("Scegli una lettera per volta:"))
        {
            QString x(ui->input_enc_mex->toPlainText());
            x = x + arg1.sliced(4)+'\n';
            ui->input_enc_mex->setText(x);
        }
    }
}
