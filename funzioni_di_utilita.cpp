#include "funzioni_di_utilita.h"

#include <algorithm> // per std::swap
#include <cmath> // per std::pow e std::sqrt
#include <cstdlib> // per std::rand
#include <utility> // per std::pair


int conta_cifre(num_type x)
{
    int n_cifre{};
    do
    {
        ++n_cifre;
    }
    while(x/=10);
    return n_cifre;
}

num_type gcd(num_type a, num_type b)
{
    if(b>a) std::swap(a,b);
    return ((a%b)?(gcd(b,(a%b))):b);
}

bool are_relative_primes(num_type a, num_type b)
{
    return (gcd(a,b) == 1);
}

bool is_prime(num_type x)
{
    num_type sqrt{static_cast<num_type>(std::sqrt(x))};
    for(num_type i{2}; i<sqrt; ++i)
        if(!(x%i)) return false;
    return true;
}

/**https://en.wikipedia.org/wiki/Modular_exponentiation#Right-to-left_binary_method*/
num_type modular_pow(num_type base, num_type exponent, num_type modulo)
{
    if(modulo==1)return 0;
    num_type res{1};
    base%=modulo;
    while(exponent>0)
    {
        if((exponent%2)==1)res=(res*base)%modulo;
        exponent>>=1;
        base=(base*base)%modulo;
    }
    return res;
}

num_type gen_random_number(num_type min, num_type max)
{
    static constexpr double f{1./(RAND_MAX+1.)};
    return min + static_cast<num_type>((max-min+1)*(f*std::rand()));
}

num_type gen_random_prime(num_type min,num_type max)
{
    num_type p{gen_random_number(min,max)};
    while(!(is_prime(p))) p = gen_random_number(2,max);
    return p;
}

std::pair<num_type,num_type> generate_distrinct_primes(num_type min, num_type max)
{
    num_type p{gen_random_prime(min,max)};
    num_type q{gen_random_prime(min,max)};
    while(p==q)
        q = gen_random_prime(min,max);
    return std::pair<num_type,num_type> {p,q};
}

