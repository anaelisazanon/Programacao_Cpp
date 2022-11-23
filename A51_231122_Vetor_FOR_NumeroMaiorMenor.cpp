/******************************************************************************
vetor digitar os valores -- digitar maior e menor
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int vet[5];
    int valor;
    int maior = 0;
    int menor = 10000;
    
    for(int i=0; i<5; i++){
        cout << "Digite o  valor " << i << " ";
        cin >> vet[i];
    }
    
    for(int g=0; g<=4; g++){
        
        if (vet[g] > maior){
            maior = vet[g];
        }
    }
    cout << "Maior valor" << maior;
    
    for(int g=0; g<=4; g++){
        
        if (vet[g] < menor){
            menor = vet[g];
        }
    }
    cout << "Menor valor" << menor;

    return 0;
}
