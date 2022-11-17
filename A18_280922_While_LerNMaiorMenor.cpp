//Atividade 
//Usando laço de repetição, faça um programa que leia N números e imprima o maior e o menor deles

#include <iostream>
using namespace std;

int main()
{
    int cont = 1;
    int total_de_numeros;
    int numero_maior = 0;
    int numero_menor = 1000; //para sempre ser menor
    int numero; //variavel para fazer comparação; //n1, n2, n3
    
    
    cout << "Digite a total de números: ";
    cin >> total_de_numeros;
    
    numero_menor = numero;
    
    while (cont <= total_de_numeros){
        
        cout << "\n Digite o " << cont << "o numero: ";
        cin >> numero;
        
        cont++;
        
        if (numero > numero_maior){
            numero_maior = numero; //AQUI não USA CIN!
        }
        if (numero < numero_menor){
             numero_menor = numero; //AQUI não USA CIN!
        }
 
    }
    
    cout << "\n O numero maior é " << numero_maior;
    cout << "\n O numero menor é " << numero_menor;

    return 0;
}
