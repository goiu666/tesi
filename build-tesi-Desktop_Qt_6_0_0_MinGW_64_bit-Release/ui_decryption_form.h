/********************************************************************************
** Form generated from reading UI file 'decryption_form.ui'
**
** Created by: Qt User Interface Compiler version 6.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DECRYPTION_FORM_H
#define UI_DECRYPTION_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_decryption_form
{
public:
    QLabel *label;
    QTextEdit *input_enc_mex;
    QPushButton *btn_decifra;
    QLineEdit *output_dec;
    QComboBox *cbo_alfabeto;
    QPushButton *btn_cancella;
    QLabel *label_2;

    void setupUi(QDialog *decryption_form)
    {
        if (decryption_form->objectName().isEmpty())
            decryption_form->setObjectName(QString::fromUtf8("decryption_form"));
        decryption_form->resize(479, 470);
        label = new QLabel(decryption_form);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 171, 61));
        input_enc_mex = new QTextEdit(decryption_form);
        input_enc_mex->setObjectName(QString::fromUtf8("input_enc_mex"));
        input_enc_mex->setGeometry(QRect(190, 40, 221, 85));
        btn_decifra = new QPushButton(decryption_form);
        btn_decifra->setObjectName(QString::fromUtf8("btn_decifra"));
        btn_decifra->setGeometry(QRect(50, 150, 80, 25));
        output_dec = new QLineEdit(decryption_form);
        output_dec->setObjectName(QString::fromUtf8("output_dec"));
        output_dec->setGeometry(QRect(20, 190, 361, 24));
        cbo_alfabeto = new QComboBox(decryption_form);
        cbo_alfabeto->setObjectName(QString::fromUtf8("cbo_alfabeto"));
        cbo_alfabeto->setGeometry(QRect(40, 340, 291, 24));
        btn_cancella = new QPushButton(decryption_form);
        btn_cancella->setObjectName(QString::fromUtf8("btn_cancella"));
        btn_cancella->setGeometry(QRect(230, 150, 80, 25));
        label_2 = new QLabel(decryption_form);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 250, 291, 91));

        retranslateUi(decryption_form);

        QMetaObject::connectSlotsByName(decryption_form);
    } // setupUi

    void retranslateUi(QDialog *decryption_form)
    {
        decryption_form->setWindowTitle(QCoreApplication::translate("decryption_form", "decifra un testo", nullptr));
        label->setText(QCoreApplication::translate("decryption_form", "Inserisci messaggio cifrato:\n"
"Vai a capo dopo ogni lettera!", nullptr));
        btn_decifra->setText(QCoreApplication::translate("decryption_form", "DECIFRA", nullptr));
        btn_cancella->setText(QCoreApplication::translate("decryption_form", "CANCELLA", nullptr));
        label_2->setText(QCoreApplication::translate("decryption_form", "Se vuoi una mano, scegli da qua sotto le lettere\n"
" per comporre il messaggio da decifrare", nullptr));
    } // retranslateUi

};

namespace Ui {
    class decryption_form: public Ui_decryption_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DECRYPTION_FORM_H
