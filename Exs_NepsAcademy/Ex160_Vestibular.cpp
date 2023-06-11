/*Vestibular:
Entrada
A entrada contém um único conjunto de testes, que deve ser lido do dispositivo de entrada padrão. A primeira linha da entrada contém um único inteiro 
N, indicando o número de questões da prova. A segunda linha da entrada contém uma cadeia de N caracteres, indicando o gabarito da prova. A terceira linha da entrada contém outra cadeia de 
N caracteres, indicando as opções marcadas pelo candidato. Ambas as cadeias contêm apenas os caracteres 'A', 'B', 'C', 'D' e 'E' (sempre em letra maiúscula).
Saída
Seu programa deve imprimir na saída padrão uma única linha contendo um único inteiro, indicando o número de acertos do candidato.
Restrições
1≤N≤80*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int N;
    cin >> N; //precisa dizer o valor de N antes de chamar o vetor com tamanho N

    char questoes[N];
    char respostas[N];
    int somador = 0;
    
    for(int i=0;i<N;i++){
        cin >> questoes[i];
    }
    
    for(int i=0;i<N;i++){
        cin >> respostas[i];
    }

    for(int i=0;i<N;i++){
        if (questoes[i] == respostas[i]){
            somador = somador +1;
        }
    }
    cout << somador;

    cout << "\n";

return 0;
}
