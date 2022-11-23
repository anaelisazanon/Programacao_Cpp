/******************************************************************************
vetor digitar os valores -- digitar maior e menor
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
    
    int maior = vet[0];
    int menor = vet[0];
    
    for(int g=1; g<=4; g++){
        
        if (vet[g] > maior){
            maior = vet[g];
        }
    }
    cout << "\nMaior valor" << maior;
    
    for(int g=1; g<=4; g++){
        
        if (vet[g] < menor){
            menor = vet[g];
        }
    }
    cout << "\nMenor valor" << menor;

    return 0;
}
