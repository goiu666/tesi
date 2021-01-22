#include <iostream>
#include <unordered_map>
#include <cmath>

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

unsigned long long decode_block(unsigned long long block, unsigned long long x, unsigned long long n)
{
    return (static_cast<unsigned long long>(std::pow(block,x))%n);
}
unsigned long long* divide(unsigned long long* arr, int mex_dim,int n_of_blocks, int CP_dim)
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
char* translate_blocks(unsigned long long* blocks, int n_blocks, int n_digits, std::unordered_map<int, char>& alphabet, int CP_dim)
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

char* rsa_decode(unsigned long long* blocks, int n_blocks,  std::unordered_map<int, char>& alphabet, int CP_dim, unsigned long long n, unsigned long long x)
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

int main(){
    std::unordered_map<int,char> alphabet{{1,'a'},{2,'b'},{3,'c'},{4,'d'},{5,'e'}};
auto x=rsa_decode(new unsigned long long[5]{1,2,3,4,5},5,alphabet,1,15,1);
std::cout<<x<<'\n';
}
