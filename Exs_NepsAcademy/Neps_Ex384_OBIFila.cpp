/*https://neps.academy/br/exercise/384
FILA OBI 2014
A primeira linha contém um inteiro N representando a quantidade de pessoas inicialmente na fila. A segunda linha contém N inteiros representando os identificadores das pessoas na fila. 
O primeiro identificador corresponde ao identificador da primeira pessoa na fila. É garantido que duas pessoas diferentes não possuem o mesmo identificador. 
A terceira linha contém um inteiro M representando a quantidade de pessoas que deixaram a fila. A quarta linha contém M inteiros representando os identificadores das pessoas que deixaram a fila, na ordem em que elas saíram. 
É garantido que um mesmo identificador não aparece duas vezes nessa lista.
Saída
Seu programa deve imprimir uma linha contendo −N−M inteiros com os identificadores das pessoas que permaneceram na fila, em ordem de chegada.
Restrições
1≤N≤50000
1≤M≤50000 e M<N
Cada identificador está entre 1 e 100000*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int inicial;
    int sairam;
    int numero_pessoa;
    int numero_pessoa_saiu;
    int pessoa[50005];
    int posicao[100005];

    cin >> inicial;

    for(int i=0;i<inicial;i++){
        cin >> numero_pessoa;

        pessoa[i] = numero_pessoa;

        posicao[numero_pessoa] = i;
    }
    cin >> sairam;

    for(int i=0;i<sairam;i++){
        cin >> numero_pessoa_saiu;
        posicao[numero_pessoa_saiu] = -1;
    }
        
    for(int i=0;i<inicial;i++){
        if (posicao[pessoa[i]] != -1){
            cout << pessoa[i] << " ";
        }

    }
    cout << "\n";

return 0;
}
