/******************************************************************************
Bubble sort
*******************************************************************************/
#include <iostream>
using namespace std;

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
                int aux = lista[i];
                lista[i] = lista[i+1];
                lista[i+1] = aux;
                
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
