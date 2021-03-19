#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "../generazione_chiavi.h"
#include <QMainWindow>
#include <QString>
#include <unordered_map> // per gli alfabeti

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

/** VARIABILI GLOBALI DEL PROGRAMMA A INTERFACCIA GRAFICA */

// chiave generata
inline Key key;

// alfabeto per la codifica
inline std::unordered_map<char,num_type> alfabeto_a
{
    {'a',10},
    {'b',11},
    {'c',12},
    {'d',13},
    {'e',14},
    {'f',15},
    {'g',16},
    {'h',17},
    {'i',18},
    {'l',19},
    {'m',20},
    {'n',21},
    {'o',22},
    {'p',23},
    {'q',24},
    {'r',25},
    {'s',26},
    {'t',27},
    {'u',28},
    {'v',29},
    {'z',30},
    {' ',31},
    {',',32},
    {'.',33},
    {'?',34},
    {'!',35},
    {':',36},
    {'\'',37},
    {'w', 38},
    {'y', 39},
    {'j', 40},
    {'k', 41},
    {'x', 42}};

// alfabeto per la decodifica
inline std::unordered_map<num_type,char> alfabeto_b
{
    {10,'a'},
    {11,'b'},
    {12,'c'},
    {13,'d'},
    {14,'e'},
    {15,'f'},
    {16,'g'},
    {17,'h'},
    {18,'i'},
    {19,'l'},
    {20,'m'},
    {21,'n'},
    {22,'o'},
    {23,'p'},
    {24,'q'},
    {25,'r'},
    {26,'s'},
    {27,'t'},
    {28,'u'},
    {29,'v'},
    {30,'z'},
    {31,' '},
    {32,','},
    {33,'.'},
    {34,'?'},
    {35,'!'},
    {36,':'},
    {37,'\''},
    {38,'w'},
    {39,'y'},
    {40,'j'},
    {41,'k'},
    {42,'x'}};

// ultimo messaggio cifrato, così che di default possa essere
// decifrato nella finestra a questo dedicata
inline num_type* last_codified_mex;

// numero di lettere codificate, necessarie per salvare la dimensione
// del vettore di cp cifrati
inline num_type n_letters;

// ultimo messaggio decifrato, così che di default possa essere
// cifrato nella finestra a questo dedicata
inline QString last_decodified_mex;

// alfabeto di codifica cifrato, per la scelta agevole delle lettere
inline std::unordered_map<char,num_type> alfabeto_a_codificato;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_btn_cifra_clicked();
    void on_btn_decifra_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
