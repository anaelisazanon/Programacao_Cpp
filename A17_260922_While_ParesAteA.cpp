//Pares Laço
//Usando laço de repetição crie um programa que leia um número A e 
//imprima todos os números pares até A.

#include <iostream>
using namespace std;

int main ()
{
    int cont = 0;
    int a;
    
    cout << "Digite a quantidade de número que quer digitar ";
    cin >> a;
    
  while (cont < a)
    {
      cont++;
      if (cont % 2 == 0){
      cout << "\ncont " << cont;}
    }

  return 0;
}
