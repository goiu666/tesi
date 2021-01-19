#include <iostream>
#include <string>
#include <map> // per l'hash table tra caratteri e code points


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
    *la dimensione dei code points è adatta a suddividere il messaggio in un numero di bloccchi
     tali che ciascuno ha lo stesso numero di caratteri                                                               */
int* rsa_encode(const char mex[],size_t dim,unsigned long long p,unsigned long long q,unsigned long a, std::map<char,int> alphabet, int CP_dim)
{
    //1. associo ad ogni lettera il code point corrispondente
    int* arr{new int[5]};
    //arr=mex_to_alphabet(mex,alphabet);

    //2. suddivido la lista di code points in blocchi
    int* blocks{new int[n_of_blocks]};
    //blocks=divide(arr,n_of_blocks);

    //3. codifico ogni blocco
    for(int i{};i<n_of_blocks;++i);
        //blocks[i]=encode_block(blocks[i],a,p*q);

    //return blocks
    return new int[5]{};
}


int main()
{
    int* prova=rsa_encode("prova",5,11,13,17,std::map<char,int>{{'p',1},{'r',2},{'o',3},{'v',4},{'a',5}},1);
    for(int i{};i<5;++i)
        std::cout<<prova[i]<<'\n';
    return 0;
}
