#ifndef FUNZIONI_DI_CODIFICA_H_INCLUDED
#define FUNZIONI_DI_CODIFICA_H_INCLUDED

#include "funzioni_di_utilita.h"
#include "generazione_chiavi.h" // per la chiave pubblica

#include <cstddef> // per std::size_t
#include <unordered_map> // per l'alfabeto
#include <utility> // per std::pair

/** CODIFICA MESSAGGIO IN CHIARIO IN MESSAGGIO CRIPTATO
    Converte un messaggio in chiaro in un vettore di code points che rappresentano i caratteri cifrati

    INPUT:
    *messaggio in chiaro
    *numero di caratteri del messaggio
    *chiave pubblica
    *hash table tra carattere e code point

    OUTPUT:
    *vettore contenente i code points rappresentanti le lettere cifrate
*/
num_type* codifica_rsa(const char messaggio[], std::size_t n_lettere,
                       std::pair<num_type, num_type> chiave_pubblica,
                       std::unordered_map<char,num_type>& alfabeto);

// funzione che associa ad ogni lettera del messaggio il corrispondente code point
num_type* mex_to_alphabet(const char messaggio[], std::size_t n_lettere,
                          std::unordered_map<char, num_type>& alfabeto);

// funzione che codifica ogni code point
num_type codifica_cp(num_type cp, std::pair<num_type, num_type> chiave_pubblica);

#endif // FUNZIONI_DI_CODIFICA_H_INCLUDED
