#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "../generazione_chiavi.h"
#include "../funzioni_di_codifica.h"
#include "../funzioni_di_decodifica.h"
#include "encryption_form.h"
#include "decryption_form.h"
#include <QByteArray>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lbl_n->setText(QString::number(key.get_public_key().first));
    ui->lbl_a->setText(QString::number(key.get_public_key().second));
    ui->lbl_x->setText(QString::number(key.private_key->x));
    for(const auto& item: alfabeto_a)
    {
        alfabeto_a_codificato[item.first]=modular_pow(item.second,key.get_public_key().second,key.get_public_key().first);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_cifra_clicked()
{
    encryption_form ef(this);
    ef.setModal(true);
    hide();
    ef.exec();
    show();
}

void MainWindow::on_btn_decifra_clicked()
{
    decryption_form df(this);
    df.setModal(true);
    hide();
    df.exec();
    show();
}
