//Pares Laço
//Usando laço de repetição crie um programa que leia um número A
//e imprima todos os números pares até A.

#include <iostream>
using namespace std;

int main ()
{
    int cont = 0;
    int resto;
    int a;
    
    cout << "Digite um número";
    cin >> a;
    
  while (cont <= a) //até
    {
     
      resto = cont % 2;
      
      if (resto == 0){ //divide por 2 e dá o resto ==0
      cout << "\ncont " << cont;}
      
      cont++;
      
    }

  return 0;
}
