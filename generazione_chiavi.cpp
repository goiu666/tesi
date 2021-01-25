#include "funzioni_di_utilita.h"
#include "generazione_chiavi.h"

#include <ctime> // per std::time
#include <cstdlib> // per std::srand, std::rand
#include <limits>  // per std::numeric_limits<T>::max()
#include <utility> // per std::pair

#include <iostream>

Key::Key()
{

    while(genera_chiave()){}
}

// inizializza tutti gli attributi di Key, e restituisce
// true se non ci sono stati overflow, false altrimenti
bool Key::genera_chiave()
{
    auto [p,q] = generate_distrinct_primes(1,std::sqrt(g_max_num));
    num_type phi_n{(p-1)*(q-1)};
    a=gen_random_number(2,std::sqrt(g_max_num));
    while(gcd(a,phi_n)!=1)
        a=gen_random_number(2,std::sqrt(g_max_num));
    num_type b{std::min(a,phi_n)};
    num_type c{(b==a)?phi_n:a};
    num_type m[2][3] {{1,0,c},{0,1,b}};
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
    if(a==b)   x=m[1-r][1];
    else       x=m[1-r][0];

    n = p*q;

    return (((a*x)<x)||((a*x)<a)||((a*x)%phi_n)!=1);
}

std::pair<num_type, num_type> Key::get_public_key() const
{
    return {n,a};
}

Key crea_chiave()
{
    std::srand(std::time(nullptr));
    std::rand();
    return Key();
}
