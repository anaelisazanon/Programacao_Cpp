/******************************************************************************
Atividade (for)
Ler um valor inteiro (aceitar somente valores entre 1 e 10) 
e escrever a tabuada de 1 a 10 do valor lido.
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int numero;
    int resultado;
    
    cout << "\nDigite um numero entre 1 e 10 ";
    cin >> numero;
    
    
    for(int i=1; i<=10; i++){
        
        resultado = numero*i;
        
        cout << "\n" << numero << " * " << i << " = " << resultado;
        
    }

/**while
    int i = 1;
    
    while(i<=10){
        resultado = numero*i;
        cout << "\n" << numero << " * " << i << " = " << resultado;
        i++;
    }
*/

    return 0;
}
