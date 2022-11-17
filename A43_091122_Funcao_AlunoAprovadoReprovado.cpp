//Faça um programa para imprimir na tela se um aluno esta aprovado, em recuperação ou reprovado de acordo com os seguintes critérios:
//- aprovado : nota >= 7
//- em recuperação : 5 >= nota >7
//- reprovado : nota < 5
//Para isso crie uma função com a seguinte assinatura:
//void imprimeSituacao(float nota)

#include <iostream>
using namespace std;

void imprimeSituacao(float nota){
    int n;

    if (n >= 7){
        cout << "Aprovado ";
    }
    else if (n >= 5 and n < 7){
        cout <<  "Em recuperacao ";
    
    }else{
        cout << "Reprovado ";
    }
}

int main(){

    float nota;

    cout << "Digite a nota ";
    cin >> nota;

    //o void não chama com cout
    imprimeSituacao(nota);

    return 0;

}
