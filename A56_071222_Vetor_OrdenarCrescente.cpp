/******************************************************************************
vetor , ordenar crescente
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    const int N = 8;
    int lista [N] = {6, 5, 45, 12, 88, 31, 3, 15};
    
    for(int i=0; i<N; i++){
        cout << " " << lista[i];
    }

    for(int i=0; i<N; i++){
        
        for(int j=0; j<N; j++){ //começa comparando [0] com [1]
            if(lista[i] < lista[j]){
                
                int auxiliar = lista[i]; //coloca [0] no aux
                lista[i] = lista[j]; // coloca o [1] no [0]
                lista[j] = auxiliar; // coloca aux na [1]
            }
        }
    }
    cout << "\n";
    
    for(int i=0; i<N; i++){
        cout << " " << lista[i];
    }
    
    return 0;
}
