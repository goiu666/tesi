#include "funzioni_di_decodifica.h"
#include <cstddef> // per std::size_t

char* decodifica_rsa(num_type* messaggio_cifrato, std::size_t n_cp,
                     std::unordered_map<num_type,char>& alfabeto,
                     const Key& key)
{
    //1. decodifica di ogni cp
    for(std::size_t i{}; i<n_cp; ++i)
        messaggio_cifrato[i]=decodifica_cp(messaggio_cifrato[i], key);

    //2. associo ad ogni cp il suo carattere corrispondente
    char* messaggio{new char[n_cp+1]};
    for(std::size_t i{}; i<n_cp; ++i)
        messaggio[i]=alfabeto[messaggio_cifrato[i]];

    // terminazione
    messaggio[n_cp]='\0';

    return messaggio;
}

num_type decodifica_cp(num_type cp, const Key& key)
{
    return static_cast<num_type>(modular_pow(cp, key.private_key->x, key.public_key.n));
}
