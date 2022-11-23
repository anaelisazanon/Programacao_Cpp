/******************************************************************************
vetor digitar os valores
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int vet[5];
    
    
    for(int i=0; i<5; i++){
        cout << "Digite o  valor " << i << " ";
        cin >> vet[i];
    }
    
    for(int j=0; j<=4; j++){
        cout << "\nORDEM NORMAL -- vet[" << j << "]:" << vet[j];
    }
    
    for(int g=4; g>=0; g--){
        cout << "\nINVERTIDO -- vet[" << g << "]:" << vet[g];
    }

    return 0;
}
