#include <limits>
#include <cmath>
#include <iostream>
#include <utility>
#include <ctime>
#include <cstdlib>
#include <algorithm>

typedef unsigned long long T;

/** FUNZIONI DI UTILITA' GENERALE */

// presuppone che a>b
inline T gcd(T a, T b)
{
    return ((a%b)?(gcd(b,(a%b))):b);
}

bool are_relative_primes(T a, T b)
{
    return (gcd(a,b) == 1);
}

bool is_prime(T x)
{
    T sqrt{static_cast<T>(std::sqrt(x))};
    for(T i{2}; i<sqrt; ++i)
        if(!(x%i)) return false;
    return true;
}

T gen_random_number(T min, T max)
{
    static constexpr double f{1./(RAND_MAX+1.)};
    return min + static_cast<T>((max-min+1)*(f*std::rand()));
}

T gen_random_prime(T min,T max)
{
    T p{gen_random_number(min,max)};
    while(!(is_prime(p))) p = gen_random_number(2,max);
    return p;
}

/** GENERATORE NUMERI PRIMI CASUALI
    Genera una coppia di numeri primi diversi tra loro*/
std::pair<T,T> generate_n(T min)
{
    static constexpr T max{static_cast<T>(std::sqrt(std::numeric_limits<T>::max()))};
    T p{gen_random_prime(max)};
    T q{gen_random_prime(max)};
    while(p==q)
    {
        q = gen_random_prime(max);
    }
    return std::pair<T,T> {p,q};
}
/** STRUTTURA DATI PER GESTIRE LE CHIAVI
    Come membri pubblici ha n ed a.
    Come membri privati ha i fattori p e q oltre che ad un intero x t.c. (x*a)%phi(n)==0 e ovviamente a phi(n) */
struct key
{
    T m_a;
    key()
    {
        p_q=generate_n(1);
        phi_n=(p_q.first-1)*(p_q.second-1);
        m_a=1;
        do
        {
            do
            {
                ++m_a;
            }
            while(gcd(m_a,phi_n)!=1);
            T a{std::min(m_a,phi_n)};
            T b{(a==m_a)?phi_n:m_a};
            T m[2][3] {{1,0,b},{0,1,a}};
            int r{0};

            do
            {
                T f{m[r][2]/m[1-r][2]};
                for(int i{}; i<3; ++i)
                    m[r][i]-=(m[1-r][i]*f);
                if(r) --r;
                else  ++r;
            }
            while(m[1-r][2]!=1);
            if(a==m_a) x=m[1-r][1];
            else       x=m[1-r][0];
        }
        while(((m_a*x)<x)||((m_a*x)<m_a));

    }
    T get_n()
    {
        return p_q.first*p_q.second;
    }
private:
    std::pair<T,T> p_q;
    T phi_n;
    T x;
};
