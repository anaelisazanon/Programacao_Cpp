#include <iostream>
using namespace std;

int main()
{
    int cont = 0;
    float numero;
    float soma;
    int quant_numero;
    float media;
    
    cout << "Digite a quantidade de número que quer digitar ";
    cin >> quant_numero;
    
    while(cont < quant_numero){
        
        cont++;
        cout << "Digite o número (" << cont << "):";
        cin >> numero;
        
        soma+= numero; //soma = soma + num
        
 
    }
    
    media = soma / quant_numero;
    
    cout << "\nA média é " << media;

    return 0;
}
