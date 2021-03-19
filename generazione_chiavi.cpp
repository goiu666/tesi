#include "funzioni_di_utilita.h"
#include "generazione_chiavi.h"

#include <cstdlib> // per std::srand, std::rand
#include <ctime>   // per std::time
#include <limits>  // per std::numeric_limits<T>::max()
#include <utility> // per std::pair

Key::Key()
{
    std::srand(std::time(nullptr));
    std::rand();
    while(genera_chiave()){delete private_key;}
}

// inizializza tutti gli attributi di Key, e restituisce
// true se non ci sono stati overflow, false altrimenti
bool Key::genera_chiave()
{
    auto [p,q] = generate_distinct_primes(2,std::sqrt(g_max_num));
    private_key = new private_key_t;
    num_type phi_n=(p-1)*(q-1);
    public_key.a=gen_random_number(2,std::sqrt(g_max_num));
    while(gcd(public_key.a,phi_n)!=1)
        public_key.a=gen_random_number(2,std::sqrt(g_max_num));
    num_type inf{std::min(public_key.a,phi_n)};
    num_type sup{(inf==public_key.a)?phi_n:public_key.a};
    num_type m[2][3] {{1,0,sup},{0,1,inf}};
    int r{0};
    do
    {
        num_type f{m[r][2]/m[1-r][2]};
        for(int i{}; i<3; ++i)
            m[r][i]-=(m[1-r][i]*f);
        if(r) --r;
        else  ++r;
    }
    while(m[1-r][2]!=1);
    if(public_key.a==inf)   private_key->x=m[1-r][1];
    else                    private_key->x=m[1-r][0];

    public_key.n = p*q;

    return ((modular_pow(999,public_key.a*private_key->x,p*q)!=999));

}

std::pair<num_type,num_type> Key::get_public_key() const
{
    return {public_key.n, public_key.a};
}

Key crea_chiave()
{
    std::srand(std::time(nullptr));
    std::rand();
    return Key();
}

Key::~Key()
{
    delete private_key;
}
