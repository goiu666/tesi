/********************************************************************************
** Form generated from reading UI file 'encryption_form.ui'
**
** Created by: Qt User Interface Compiler version 6.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENCRYPTION_FORM_H
#define UI_ENCRYPTION_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_encryption_form
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *input_clear_text;
    QLabel *label_2;
    QTextBrowser *output_encryption;
    QPushButton *btn_traduci;
    QPushButton *btn_cancella;

    void setupUi(QDialog *encryption_form)
    {
        if (encryption_form->objectName().isEmpty())
            encryption_form->setObjectName(QString::fromUtf8("encryption_form"));
        encryption_form->resize(590, 395);
        horizontalLayoutWidget = new QWidget(encryption_form);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(40, 20, 481, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        input_clear_text = new QLineEdit(horizontalLayoutWidget);
        input_clear_text->setObjectName(QString::fromUtf8("input_clear_text"));

        horizontalLayout->addWidget(input_clear_text);

        label_2 = new QLabel(encryption_form);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 160, 101, 16));
        output_encryption = new QTextBrowser(encryption_form);
        output_encryption->setObjectName(QString::fromUtf8("output_encryption"));
        output_encryption->setGeometry(QRect(40, 180, 471, 192));
        btn_traduci = new QPushButton(encryption_form);
        btn_traduci->setObjectName(QString::fromUtf8("btn_traduci"));
        btn_traduci->setGeometry(QRect(90, 110, 80, 25));
        btn_cancella = new QPushButton(encryption_form);
        btn_cancella->setObjectName(QString::fromUtf8("btn_cancella"));
        btn_cancella->setGeometry(QRect(210, 110, 80, 25));

        retranslateUi(encryption_form);

        QMetaObject::connectSlotsByName(encryption_form);
    } // setupUi

    void retranslateUi(QDialog *encryption_form)
    {
        encryption_form->setWindowTitle(QCoreApplication::translate("encryption_form", "cifra un testo", nullptr));
        label->setText(QCoreApplication::translate("encryption_form", "Inserisci il testo da cifrare: ", nullptr));
        label_2->setText(QCoreApplication::translate("encryption_form", "Testo cifrato:", nullptr));
        btn_traduci->setText(QCoreApplication::translate("encryption_form", "CIFRA", nullptr));
        btn_cancella->setText(QCoreApplication::translate("encryption_form", "CANCELLA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class encryption_form: public Ui_encryption_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENCRYPTION_FORM_H
