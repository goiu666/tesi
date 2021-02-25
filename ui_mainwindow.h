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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btn_traduci;
    QPushButton *btn_cancella;
    QTextBrowser *output_mex;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *lbl_disp_input;
    QLineEdit *input_box;
    QTextBrowser *dec;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btn_traduci = new QPushButton(centralwidget);
        btn_traduci->setObjectName(QString::fromUtf8("btn_traduci"));
        btn_traduci->setGeometry(QRect(40, 110, 80, 25));
        btn_cancella = new QPushButton(centralwidget);
        btn_cancella->setObjectName(QString::fromUtf8("btn_cancella"));
        btn_cancella->setGeometry(QRect(150, 110, 80, 25));
        output_mex = new QTextBrowser(centralwidget);
        output_mex->setObjectName(QString::fromUtf8("output_mex"));
        output_mex->setGeometry(QRect(10, 160, 391, 91));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 140, 101, 20));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 70, 280, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lbl_disp_input = new QLabel(layoutWidget);
        lbl_disp_input->setObjectName(QString::fromUtf8("lbl_disp_input"));
        lbl_disp_input->setScaledContents(true);

        horizontalLayout->addWidget(lbl_disp_input);

        input_box = new QLineEdit(layoutWidget);
        input_box->setObjectName(QString::fromUtf8("input_box"));

        horizontalLayout->addWidget(input_box);

        dec = new QTextBrowser(centralwidget);
        dec->setObjectName(QString::fromUtf8("dec"));
        dec->setGeometry(QRect(10, 280, 256, 41));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 260, 101, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 360, 721, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
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
        btn_traduci->setText(QCoreApplication::translate("MainWindow", "TRADUCI", nullptr));
        btn_cancella->setText(QCoreApplication::translate("MainWindow", "CANCELLA", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Testo cifrato:", nullptr));
        lbl_disp_input->setText(QCoreApplication::translate("MainWindow", "Inserisci una frase qualsiasi:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Testo originale:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Se si inseriscono lettere ripetute, si pu\303\262 notare una debolezza dei metodi crittografici: la presenza di regolarit\303\240 nelle codifiche", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
