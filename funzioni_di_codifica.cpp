#include "funzioni_di_codifica.h"
#include "funzioni_di_utilita.h"

#include <cstddef>
#include <unordered_map> // per l'alfabeto

num_type* codifica_rsa(const char messaggio[], std::size_t n_lettere,
                       std::pair<num_type, num_type> chiave_pubblica,
                       std::unordered_map<char,num_type>& alfabeto)
{
    //1. associo ad ogni lettera il code point corrispondente
    num_type* messaggio_codificato{new num_type[n_lettere]};
    messaggio_codificato=mex_to_alphabet(messaggio,n_lettere,alfabeto);

    //2. codifico ogni code point (lettera cifrata)
    for(std::size_t i{}; i<n_lettere; ++i)
        messaggio_codificato[i]=codifica_cp(messaggio_codificato[i],chiave_pubblica);

    return messaggio_codificato;
    //nota: nessuna deallocazione poiché ogni memoria allocata verrà restituita come output
}

num_type* mex_to_alphabet(const char messaggio[], std::size_t n_lettere,
                          std::unordered_map<char, num_type>& alfabeto)
{
    num_type* arr{new num_type[n_lettere]{}};
    for(std::size_t i{}; i<n_lettere; ++i)
        arr[i]=alfabeto[messaggio[i]];
    return arr;
}

num_type codifica_cp(num_type cp, std::pair<num_type, num_type> chiave_pubblica)
{
    return static_cast<num_type>(modular_pow(cp,chiave_pubblica.second,chiave_pubblica.first));
}
