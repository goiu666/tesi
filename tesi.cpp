#include <utility> // per std::pair
#include <ctime> // per seedare il generatore di numeri casuali
#include <cstdlib> // per generare numeri casuali
#include <algorithm>
#include <limits>
#include <cmath> // per l'elevamento a potenza
#include <unordered_map>// per l'hash table tra caratteri e code points

//alias per ridurre lunghezza righe
typedef unsigned long long num_type;

/** FUNZIONI DI UTILITA' GENERALE */
// CONTA IL NUMERO DI CIFRE PRESENTI IN UN NUMERO
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
// presuppone che a>b
num_type gcd(num_type a, num_type b)
{
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

//genera una coppia di numeri primi casuali tra loro diversi
std::pair<num_type,num_type> generate_n(num_type min)
{
    static constexpr num_type max{static_cast<num_type>(std::sqrt(std::numeric_limits<num_type>::max()))};
    num_type p{gen_random_prime(2,max)};
    num_type q{gen_random_prime(2,max)};
    while(p==q)
    {
        q = gen_random_prime(2,max);
    }
    return std::pair<num_type,num_type> {p,q};
}

/** STRUTTURA DATI PER GESTIRE LE CHIAVI
    Come membri pubblici ha n ed a.
    Come membri privati ha i fattori p e q oltre che ad un intero x t.c. (x*a)%phi(n)==0 e ovviamente a phi(n) */
struct key
{
    num_type m_a;
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
            num_type a{std::min(m_a,phi_n)};
            num_type b{(a==m_a)?phi_n:m_a};
            num_type m[2][3] {{1,0,b},{0,1,a}};
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
            if(a==m_a) x=m[1-r][1];
            else       x=m[1-r][0];
        }
        while(((m_a*x)<x)||((m_a*x)<m_a));

    }
    num_type get_n()
    {
        return p_q.first*p_q.second;
    }
private:
    std::pair<num_type,num_type> p_q;
    num_type phi_n;
    num_type x;
};

num_type* mex_to_alphabet(const char mex[], int dim,std::unordered_map<char,unsigned int>& alphabet);
int n_of_blocks(num_type p, num_type q, int CP_dim, int mex_dim);
num_type* divide(num_type* arr, int dim,int n_of_blocks, int CP_dim);
num_type encode_block(unsigned int block, num_type a, num_type n);
/** CODIFICA MESSAGGIO IN CHIARIO IN MESSAGGIO CRIPTATO
    Converte un messaggio in chiaro in un vettore di code points che rappresentano i caratteri cifrati

    INPUT:
    *messaggio in chiaro
    *numero di caratteri del messaggio
    *fattori di n
    *esponente della chiave pubblica
    *hash table tra carattere e code point
    *lunghezza dei code points

    OUTPUT:
    *vettore contenente i blocchi code points rappresentanti le lettere cifrate

    PRESUPPOSTI:
    *la dimensione dei code points è inferiore al numero delle cifre dei fattori di n                   */
num_type* rsa_encode(const char mex[],unsigned int dim,num_type p,num_type q,num_type a, std::unordered_map<char,unsigned int>& alphabet, int CP_dim)
{
    //1. associo ad ogni lettera il code point corrispondente
    num_type* arr{new num_type[dim]};
    arr=mex_to_alphabet(mex,dim,alphabet);

    //2. suddivido la lista di code points in blocchi
    int n_blocks{n_of_blocks(p,q,CP_dim,dim)};
    num_type* blocks{new num_type[n_blocks]};
    blocks=divide(arr,dim,n_blocks,CP_dim);

    //3. codifico ogni blocco
    for(int i{};i<n_blocks;++i)
        blocks[i]=encode_block(blocks[i],a,p*q);

    return blocks;
    //nota: nessuna deallocazione poiché ogni memoria allocata verrà restituita come output
}

//funzione che calcola il numero di blocchi
int n_of_blocks(num_type p, num_type q, int CP_dim,int mex_dim)
{
    //se la lunghezza del messaggio è un multiplo del numero di cifre dei code points, allora
    //il numero di blocchi ideale è mex_dim/CP_dim
    if(!(mex_dim%CP_dim))return (mex_dim/CP_dim);
    int dim_p{conta_cifre(p)};
    int dim_q{conta_cifre(q)};
    int min{((dim_q<dim_p)?dim_q:dim_p)};
    while(!(mex_dim%min) && min>CP_dim)
    --min;

    return (mex_dim/min);

}

/** ASSOCIAZIONE CODE POINTS A CARATTERI
    Crea un vettore di code points associati dall'alfabeto pre-concordato al messaggio in chiaro

    INPUT:
    *messaggio in chiaro
    *numero di caratteri del messaggio
    *hash table tra carattere e code point

    OUTPUT:
    *vettore contenente i code points associati alle lettere del messaggio in chiaro in base all'alfabeto

    PRESUPPOSTI:
    *esistenza di un code point per ogni lettera del messaggio in chiaro passato in input                                                                                                               */
num_type* mex_to_alphabet(const char mex[], int dim,std::unordered_map<char,unsigned int>& alphabet)
{
    num_type* arr{new num_type[dim]{}};
    for(int i{};i<dim;++i)
        arr[i]=alphabet[mex[i]];
    return arr;
}

num_type* divide(num_type* arr, int mex_dim,int n_of_blocks, int CP_dim)
{

    num_type* blocks{new num_type[n_of_blocks]{}};
    // numero di code points per blocco
    int x{mex_dim/n_of_blocks};
    int j{};
    for(int i{};i<n_of_blocks;++i)
        for(int e{};e<x;++e,++j)
               blocks[i] += arr[j]*std::pow(10,CP_dim*(x-e-1));
    return blocks;
}

num_type encode_block(unsigned int block, num_type a, num_type n)
{
    num_type x{static_cast<num_type>(std::pow(block,a))};
    return (x%n);
}

int decode_block(int block, num_type x, num_type n)
{
    return (static_cast<int>(std::pow(block,x))%n);
}
int* divide(int* arr, int mex_dim,int n_of_blocks, int CP_dim)
{

    int* blocks{new int[n_of_blocks]{}};
    // numero di code points per blocco
    int x{mex_dim/n_of_blocks};
    int j{};
    for(int i{};i<n_of_blocks;++i)
        for(int e{};e<x;++e,++j)
               blocks[i] += arr[j]*std::pow(10,CP_dim*(x-e-1));
    return blocks;
}
char* translate_blocks(num_type* blocks, int n_blocks, int n_digits, std::unordered_map<int, char>& alphabet, int CP_dim)
{
    char* mex{new char[n_digits]{}};
    int j{};
    for(int i{};i<n_blocks;++i)
        {
            int t_digit{conta_cifre(blocks[i])};
            int n_cp{t_digit/CP_dim};
            auto p{divide(&blocks[i],t_digit,n_cp,CP_dim)};
            for(int z{};z<n_cp;++z,++j)
                mex[j]=alphabet[p[z]];
        }
   return mex;
}

char* rsa_decode(num_type* blocks, int n_blocks,  std::unordered_map<int, char>& alphabet, int CP_dim, num_type n, num_type x)
{
    //1. decodifica di ogni blocco
    for(int i{};i<n_blocks;++i)
        blocks[i]=decode_block(blocks[i], x, n);

    //2. traduzione secondo alfabeto
    // conto quante cifre ci sono in totale nei blocchi
    int n_digits{0};
    for(int i{};i<n_blocks;++i)
        n_digits+=conta_cifre(blocks[i]);

    char* mex{new char[n_digits/CP_dim]};
    //n_cifre/CP_dim dà il numero di code points che ci sono nel mex
    mex = translate_blocks(blocks, n_blocks, n_digits/CP_dim,alphabet, CP_dim);
    return mex;
    //return new char[5]{};
}
