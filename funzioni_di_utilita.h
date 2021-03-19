#ifndef FUNZIONI_DI_UTILITA_H_INCLUDED
#define FUNZIONI_DI_UTILITA_H_INCLUDED

#include <cmath>   // per std::pow e std::sqrt
#include <cstdlib> // per std::rand
#include <limits>  // per std::numeric_limits<T>::max()
#include <utility> // per std::pair

/** FUNZIONI DI UTILITA' GENERALE */

// alias per ridurre lunghezza righe
typedef unsigned long long num_type;

// massimo valore di num_type
inline constexpr num_type g_max_num{std::numeric_limits<num_type>::max()};

// funzione che conta il numero di cifre di un numero
int conta_cifre(num_type x);

// calcola il massimo comun divisore tra due numeri
num_type gcd(num_type a, num_type b);

// controlla se due numeri sono relativamente primi tra loro
// presuppone che a > b
bool are_relative_primes(num_type a, num_type b);

// controlla se il numero è primo
bool is_prime(num_type x);

/**https://en.wikipedia.org/wiki/Modular_exponentiation#Right-to-left_binary_method*/
// funzione di calcolo veloce di una potenza modulare
num_type modular_pow(num_type base, num_type exponent, num_type modulo);

// genera un numero causale tra min e max inclusi
num_type gen_random_number(num_type min, num_type max);

// genera un numero primo causale tra min e max inclusi
num_type gen_random_prime(num_type min,num_type max);

// genera una coppia di numeri primi casuali tra loro diversi
std::pair<num_type,num_type> generate_distinct_primes(num_type min, num_type max);

#endif // FUNZIONI_DI_UTILITA_H_INCLUDED
