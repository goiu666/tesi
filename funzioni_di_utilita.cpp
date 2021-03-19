#include "funzioni_di_utilita.h"

#include <algorithm> // per std::swap
#include <cmath>     // per std::pow e std::sqrt
#include <cstdlib>   // per std::rand
#include <utility>   // per std::pair

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

    if(x==1 || x==0) return false;
    if(x<4)          return true;
    if(x%2==0)       return false;
    if(x<9)          return true;
    if(x%3==0)       return false;
    num_type r{static_cast<num_type>(std::floor(std::sqrt(x)))};
    num_type f{5};
    while(f<=r)
    {
        if(x%f==0)     return false;
        if(x%(f+2)==0) return false;
        f+=6;
    }
    return true;
}

/**https://en.wikipedia.org/wiki/Modular_exponentiation#Right-to-left_binary_method*/
num_type modular_pow(num_type base, num_type exponent, num_type m)
{
    if(m==1)return 0;

    num_type res{1};
    base%=m;
    if(base==0)return 0;
    while(exponent>0)
    {
        if(exponent&1)res=(res*base)%m;
        exponent>>=1;
        base=(base*base)%m;
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
    while(!is_prime(p))p=gen_random_number(min,max);
    return p;
}

std::pair<num_type,num_type> generate_distinct_primes(num_type min, num_type max)
{
    num_type p{gen_random_prime(min,max)};
    num_type q{gen_random_prime(min,max)};
    while(p==q)
        q = gen_random_number(min,max);
    return std::pair<num_type,num_type> {p,q};
}

