/******************************************************************************
vetor digitar os valores -- com constante
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    const int n = 5;
    int vet[n];
    int numero;
    
    
    for(int i=0; i<n; i++){
        cout << "Digite o  valor " << i << " ";
        cin >> vet[i];
    }
    
    for(int i=0; i<n; i++){
        cout << "\nORDEM NORMAL -- vet[" << i << "]:" << vet[i];
    }
    
    for(int i=n-1; i>=0; i--){
        cout << "\nINVERTIDO -- vet[" << i << "]:" << vet[i];
    }

    return 0;
}
