#include <iostream>
using namespace std;

//funcao de calcular
float soma (float n1, float n2){

    float resultado;
    resultado = n1 + n2;

    return resultado;
}

//pode ter funcao com mesmo nome
float soma (float n1, float n2, float n3){

    float resultado;
    resultado = n1 + n2 + n3;

    return resultado;
}

int main(){
    float mostraresultado;
    
    //aqui vai chamar a funcao de 3 numeros pq tem 3
    mostraresultado = soma(3, 4, 5);

    //aqui vai chamar a funcao de 2 numeros pq tem 2
    mostraresultado = soma(3, 4);

    cout << "A soma é " << mostraresultado;

    return 0;
}
