/******************************************************************************
Ex extra
Ler N números e imprimir quantos são pares e quantos são ímpares.
maior e menor
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int totalPar = 0;
    int totalImpar = 0;
    int totalNumero;
    int menor;
    int maior;  
    //n precisa coloca == numero grande =99999 pq iniciou
    
    int numero;
    
    cout << "\n Digite o total de numeros: ";
    cin >> totalNumero;
    
    
  //só para salvar o primeiro numero menor e maior  
    cout << "\n Digite um numeros: ";
    cin >> numero;
    
    maior = numero;
    menor = numero;
    
    if(numero%2 == 0){
            
            totalPar++;
        }
        else{
            totalImpar++;
        }
        
        
//continuacao dos demais nuemeors
    for(int i=0; i<totalNumero-1; /*pq já leu um numero fora*/ i++){
        
        cout << "\n Digite um numero: ";
        cin >> numero;
        
        if(numero < menor){
            
            menor = numero;
        }
        
        if(numero > maior){
            
            maior = numero;
        }
        
        if(numero%2 == 0){
            
            totalPar++;
        }
        else{
            totalImpar++;
        }
    } //divide por 2 mas pega o resto
        
    cout << "\n" << totalPar << "números são pares";
    cout << "\n" << totalImpar << "números são ímpares";
   
    cout << "\n" << maior << " é o maior numero";
    cout << "\n" << menor << "é o menor numero";


    return 0;
}
