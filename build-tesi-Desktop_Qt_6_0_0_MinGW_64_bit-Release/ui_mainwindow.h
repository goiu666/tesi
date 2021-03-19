/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *btn_cifra;
    QLabel *label_3;
    QLabel *label_2;
    QPushButton *btn_decifra;
    QLabel *label;
    QGroupBox *groupBox;
    QLabel *label_8;
    QLabel *lbl_x;
    QGroupBox *groupBox_2;
    QLabel *lbl_a;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *lbl_n;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(732, 325);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(50, 50, 600, 105));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btn_cifra = new QPushButton(gridLayoutWidget);
        btn_cifra->setObjectName(QString::fromUtf8("btn_cifra"));

        gridLayout->addWidget(btn_cifra, 2, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        btn_decifra = new QPushButton(gridLayoutWidget);
        btn_decifra->setObjectName(QString::fromUtf8("btn_decifra"));

        gridLayout->addWidget(btn_decifra, 2, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(240, 10, 216, 32));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(360, 180, 321, 80));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 40, 16, 16));
        lbl_x = new QLabel(groupBox);
        lbl_x->setObjectName(QString::fromUtf8("lbl_x"));
        lbl_x->setGeometry(QRect(30, 40, 281, 16));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(40, 180, 311, 80));
        lbl_a = new QLabel(groupBox_2);
        lbl_a->setObjectName(QString::fromUtf8("lbl_a"));
        lbl_a->setGeometry(QRect(40, 50, 261, 16));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 50, 16, 16));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 30, 16, 16));
        lbl_n = new QLabel(groupBox_2);
        lbl_n->setObjectName(QString::fromUtf8("lbl_n"));
        lbl_n->setGeometry(QRect(40, 30, 261, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 732, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Codifica RSA", nullptr));
        btn_cifra->setText(QCoreApplication::translate("MainWindow", "CIFRA", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Clicca questo pulsante se vuoi\n"
"codificare un messaggio:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Clicca questo pulsante se vuoi\n"
"decodificare un messaggio cifrato:", nullptr));
        btn_decifra->setText(QCoreApplication::translate("MainWindow", "DECIFRA", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "APPLICAZIONE SULL'ALGORITMO RSA", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "CHIAVE PRIVATA", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "x:", nullptr));
        lbl_x->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "CHIAVE PUBBLICA", nullptr));
        lbl_a->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "a:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "n:", nullptr));
        lbl_n->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
