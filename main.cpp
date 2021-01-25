#include "funzioni_di_codifica.h"   // funzioni di codifica
#include "funzioni_di_decodifica.h" // funzioni di decodifica
#include "funzioni_di_utilita.h"    // funzioni di utilità
#include "generazione_chiavi.h"     // per tipo Key che gestisce le chiavi

#include <cstddef>
#include <iostream>
#include <limits> // per std::numeric_limits<T>::max()
#include <memory> // per std::move
#include <string>
#include <unordered_map>// per l'hash table tra caratteri e code points

int main()
{
    Key pubblica{crea_chiave()};
    std::unordered_map<char,num_type> alfabeto_a
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
        {':',36}};
    std::unordered_map<num_type,char> alfabeto_b
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
        {36,':'}};
    pubblica.stampa_chiave();
    std::cout<<"inserisci stringa: ";
    char buffer[256];
    std::cin.getline(buffer,std::numeric_limits<std::streamsize>::max(),'\n');
    std::string mex{buffer};
    auto encoded_mex{codifica_rsa(mex.c_str(),mex.size(),pubblica.get_public_key(),alfabeto_a)};
    for(std::size_t i{};i<mex.size();++i)std::cout<<encoded_mex[i]<<' ';
    std::cout<<'\n';
    auto dec_mex{decodifica_rsa(encoded_mex,mex.size(),alfabeto_b,pubblica)};
    std::cout<<dec_mex<<'\n';

}
