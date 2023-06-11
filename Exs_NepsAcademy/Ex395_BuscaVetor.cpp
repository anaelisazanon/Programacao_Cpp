/*https://neps.academy/br/exercise/395
Faça um programa para ler 10 valores inteiros, armazená-los em um vetor, depois ler um inteiro X. Imprima "SIM" se X aparece no vetor, ou "NAO" caso contrário.
Entrada
A primeira linha da entrada consiste de 10 inteiros separados por um espaço em branco. A segunda linha contém um inteiro X.
Saída
Imprima "SIM" se X aparece no vetor, ou "NAO" caso contrário.
Restrições
Todos os valores fornecidos não serão negativos nem maiores que 100.*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int vet[10];
    int X;
    bool m=false;

    for(int i=0; i < 10; i++){
        cin >> vet[i];
    }
    cin >> X;

    for(int i = 0; i < 10; i++){
        if (X == vet[i]){
            m = true;
            cout << "SIM" << endl;
            break;
        }
    }
    if (m == false){
        cout << "NAO" << endl;
    }
}
