#ifndef FUNZIONI_DI_DECODIFICA_H_INCLUDED
#define FUNZIONI_DI_DECODIFICA_H_INCLUDED

#include "generazione_chiavi.h" // per la chiave pubblica

#include <cstddef>       // per std::size_t
#include <unordered_map> // per l'alfabeto

/** DECODIFICA MESSAGGIO CIFRATO IN MESSAGGIO IN CHIARO
    Converte un messaggio cifrato in un vettore di lettere in chiaro

    INPUT:
    *messaggio in chiaro
    *numero di caratteri del messaggio
    *chiave pubblica
    *hash table tra carattere e code point

    OUTPUT:
    *vettore contenente i code points rappresentanti le lettere cifrate
*/
char* decodifica_rsa(num_type* messaggio_cifrato, std::size_t n_cp,
                     std::unordered_map<num_type,char>& alfabeto,
                     const Key& key);

// funzione che decodifica il singolo code point (lettera codificata)
num_type decodifica_cp(num_type cp, const Key& key);

#endif // FUNZIONI_DI_DECODIFICA_H_INCLUDED
