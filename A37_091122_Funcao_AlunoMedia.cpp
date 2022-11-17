//Digitar número de alunos
//Digitar 3 notas para N alunos
//Calcular média de cada aluno usando uma função usando:
//float media (float n1, float n2, float n3)
//Imprimir média de cada aluno usando:
//void imprimedia (float m)

#include <iostream>
using namespace std;

//funcao mostra média
float calculaMedia (float n1, float n2, float n3){
    int media_funcao = (n1 + n2 + n3) /3;
    return media_funcao;
}

//funcao mostra resultado media
void imprimeMedia (float media){
    cout << "Resultado é " << media;
}

int main(){
    float media_main;
    int numero_alunos = 0;
    int n1, n2, n3;


//digitar numero de alunos
    cout << "\nDigite a quantidade de alunos para calcular a média: ";
    cin >> numero_alunos;

    for(int i=0; i<numero_alunos; i++){

        //for(int j=0; j<3; j++){
        //    cout << "\nDigite a nota "; i;
        //   cin >> n1;
        //}

    //leu as notas
        cout << "\n Digite a nota 1 ";
        cin >> n1;
        cout << "\n Digite a nota 2 ";
        cin >> n2;
        cout << "\n Digite a nota 3 ";
        cin >> n3;   

    //funcao
    media_main = calculaMedia(n1,n2,n3);

    //funcao mostra resultado
    imprimeMedia(media_main);
    }
    return 0;
}
