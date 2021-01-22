#include <limits>
#include <iostream>
#include <cmath> // per l'elevamento a potenza
#include <map> // per l'hash table tra caratteri e code points

/** CONTA IL NUMERO DI CIFRE PRESENTI IN UN NUMERO */
int conta_cifre(unsigned long long x)
{
    int n_cifre{};
    do
    {
        ++n_cifre;
    }
    while(x/=10);
    return n_cifre;
}

int* mex_to_alphabet(const char mex[], int dim,std::map<char,int> alphabet);
int n_of_blocks(unsigned long long p, unsigned long long q, int CP_dim, int mex_dim);
unsigned long long* divide(int* arr, int dim,int n_of_blocks, int CP_dim);
unsigned long long encode_block(int block, unsigned long a, unsigned long long n);
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
unsigned long long* rsa_encode(const char mex[],int dim,unsigned long long p,unsigned long long q,unsigned long a, std::map<char,int> alphabet, int CP_dim)
{
    //1. associo ad ogni lettera il code point corrispondente
    int* arr{new int[5]};
    arr=mex_to_alphabet(mex,dim,alphabet);

    //2. suddivido la lista di code points in blocchi
    int n_blocks{n_of_blocks(p,q,CP_dim,dim)};
    unsigned long long* blocks{new unsigned long long[n_blocks]};
    blocks=divide(arr,dim,n_blocks,CP_dim);

    //3. codifico ogni blocco
    for(int i{};i<n_blocks;++i)
        blocks[i]=encode_block(blocks[i],a,p*q);

    return blocks;
    //nota: nessuna deallocazione poiché ogni memoria allocata verrà restituita come output
}

//funzione che calcola il numero di blocchi
int n_of_blocks(unsigned long long p, unsigned long long q, int CP_dim,int mex_dim)
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
int* mex_to_alphabet(const char mex[], int dim,std::map<char,int> alphabet)
{
    int* arr{new int[dim]{}};
    for(int i{};i<dim;++i)
        arr[i]=alphabet[mex[i]];
    return arr;
}

unsigned long long* divide(int* arr, int mex_dim,int n_of_blocks, int CP_dim)
{

    unsigned long long* blocks{new unsigned long long[n_of_blocks]{}};
    // numero di code points per blocco
    int x{mex_dim/n_of_blocks};
    int j{};
    for(int i{};i<n_of_blocks;++i)
        for(int e{};e<x;++e,++j)
               blocks[i] += arr[j]*std::pow(10,CP_dim*(x-e-1));
    return blocks;
}

unsigned long long encode_block(int block, unsigned long a, unsigned long long n)
{
    unsigned long long x{static_cast<unsigned long long >(std::pow(block,a))};
    return (x%n);
}

int main()
{
    int* prova=rsa_encode("prova",5,11,13,17,std::map<char,int>{{'p',1},{'r',2},{'o',3},{'v',4},{'a',5}},1);
    delete[] prova;
    return 0;
}
