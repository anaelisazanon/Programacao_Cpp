//Ativ FOR - laços determinado diferente do WHILE
// quantidade x de numeros e se é impar ou par

#include <iostream>

using namespace std;

int main()
{
//declaracao variavel
    int n;
    int pares=0;
    int impares=0;

//entrada
    cout << "\nDigite a quantidade de numeros: ";
    cin >> n;

//laco FOR
    for(int i=0; i<n; i++){
        
        int numero;
        cout << "\n Digite o numero: ";
        cin >> numero;
        
        if((numero%2) == 0){
            pares++;
        }else{
            impares++;
        }
        
    }
    
    cout << "\nTotal de numeros pares: " << pares;
    cout << "\nTotal de numeros impares: " << impares;

    return 0;
}
