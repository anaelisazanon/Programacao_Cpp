#include <iostream>
using namespace std;

//funcao mostra média
float soma (float n1, float n2){
    int somarnumeros = n1 + n2;
    return somarnumeros;
}

//funcao mostra soma
void mostraSoma (float mostrarsoma){
   cout << "A soma é " << mostrarsoma;
   //em void não usa return
}


int main(){
    float mostrarsoma;

    //funcao somar
    mostrarsoma = soma(4,8);

    //funcao mostra resultado
    mostraSoma(mostrarsoma);

    return 0;
}
