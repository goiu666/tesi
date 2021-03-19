#ifndef GENERAZIONE_CHIAVI_H_INCLUDED
#define GENERAZIONE_CHIAVI_H_INCLUDED

#include "funzioni_di_utilita.h"

/** CLASSE PER GESTIRE LE CHIAVI
    Alla costruzione di un oggetto key, vengono generati p, q, n, phi(n), a ed x in
    un modo tale da evitare qualsiasi tipo di overflow.

    METODI PUBBLICI:
    get_public_key(), la quale restituisce un oggetto di tipo std::pair
    *first:  n
    *second: a

    METODI PRIVATI:
    bool genera_chiave(), chiamata dal costruttore per generare correttamente le chiavi

    FRIEND FUNCTIONS:
    decodifica_cp(), che serve per decofidicare un singolo code point
    */

class Key
{
public:
    Key();
    ~Key();
    std::pair<num_type,num_type> get_public_key() const;
    friend num_type decodifica_cp(num_type, const Key& key);
//private:
    struct
    {
        num_type n{};
        num_type a{};
    } public_key;

    struct private_key_t
    {
        num_type x{};
    };

    private_key_t* private_key{};

    bool genera_chiave();
};

// funzione che crea una chiave, da usare una volta sola allo startup
Key crea_chiave();

#endif // GENERAZIONE_CHIAVI_H_INCLUDED
