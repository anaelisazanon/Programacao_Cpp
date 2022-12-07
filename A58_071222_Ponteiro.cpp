/******************************************************************************
Ponteiro - variável que guarda endereço de memória
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int var = 45;
    int *p1;
    int *p2;
    int vet[0];
    
    p1 = &var; // p recebe conteúdo (endereço do VAR) //45 n importa
    
    cout << var;

    cout << "\n var  " << &var; //diz o conteúdo endereço do var
    cout << "\n&var  " << p1; //diz o conteúdo endereço de var
    cout << "\n&p1  " << &p1; // diz o endereço do p
    cout << "\n*p1  " << *p1; //diz o conteúdo do var pq o p1 aponta pro var
    
    p2 = p1;
    
    cout << "\np2  " << p2;
    
    cout << "\n*p2  " << *p2;
    
    *p2 = 40;
    cout << "\n*p2  " << *p2;
    cout << "\n*var  " << var; // n acessou a variável mas trocou o valor pelo *p2
    
    
    p1 = vet; // p1 = &vet[0];  endereco do vetor é o da primeira posicao
    cout << "\np1  " << p1;

    return 0;
}
