/******************************************************************************
Bubble sort -  funcao
*******************************************************************************/
#include <iostream>
using namespace std;


void Trocar(int *p){
    int aux = *p;
    *p = *(p+1);
    *(p+1) = aux;
}

int main()
{
    const int N = 8;
    int troca=1;
    int lista [N] = {6, 5, 45, 12, 88, 31, 3, 15};

    for(int i=0; i<N; i++){
        cout << " " << lista[i];
    }
    
    while(troca){ //troca==1
        troca = 0;
        for(int i=0; i < N-1; i++){
            
            if(lista[i] > lista[i+1]){
                
                Trocar(lista+i); //= &lista[i]+i  ele sem colchete é = o endereco da primeira posicao
                //soma +i pq pega o endereço seguinte do endereço da lista[i] -- vai pro próximo thread_local
                
                //extra - PEGA ENDEREÇO DO LOCAL [5] DA MATRIZ
                    //int *vet
                    //vet = maloc(4)
                    //                    == int *vet[5] (NÃO EXISTE ASSIM)
                
                troca =1;
            }
        }
    }
    
    cout << "\n";
    for(int i=0; i<N; i++){
        cout << " " << lista[i];
    }
    return 0;
}
