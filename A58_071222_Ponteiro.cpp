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
    
    
    p = &var; // p recebe conteúdo (endereço do VAR) //45 n importa
    
    cout << var;

    cout << "\n" << &var; //diz o conteúdo endereço do var
    cout << "\n" << p1; //diz o conteúdo endereço de var
    cout << "\n" << &p1; // diz o endereço do p
    cout << "\n" << *p1; //diz o conteúdo do var pq o p1 aponta pro var
    
    
    return 0;
}
