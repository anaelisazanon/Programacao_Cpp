//FUNCAO soma, subt, div, multip

#include <iostream>
using namespace std;

//funcao mostra soma
float soma (float n1, float n2){
    int somarnumeros = n1 + n2;
    return somarnumeros;
}

    //funcao mostra soma
void mostraSoma (float mostrarsoma){
   cout << "A soma é " << mostrarsoma;
   //em void não usa return
}

//subtracao
int subtrai(int n1, int n2){
    int subtrainumeros = n1 - n2;
    return subtrainumeros;
}
    //funcao mostra subtracao
void mostraSub (float mostrarsub){
   cout << "A subt é " << mostrarsub;
   //em void não usa return
}

//divisao
int divide(float n1, float n2){
    int divnumeros = n1 / n2;
    return divnumeros;
}
    //funcao mostra divisao
void mostraDiv (float mostrardiv){
   cout << "A divisao é " << mostrardiv;
   //em void não usa return
}

//multiplicacao
int multiplica(float n1, float n2){
    int mulnumeros = n1 * n2;
    return mulnumeros;
}
    //funcao mostra divisao
void mostraMult (float mostrarmult){
   cout << "A multiplicacao é " << mostrarmult;
   //em void não usa return
}


int main(){
    float mostrarsoma;
    float mostrarsubt;
    float mostrardiv;
    float mostrarmult;

    //funcao somar
    mostrarsoma = soma(4,8);
    mostrarsubt = subtrai(3,2);
    mostrardiv = divide(6,2.0);
    mostrarmult = multiplica(6,2.0);

    //funcao mostra resultado
    mostraSoma(mostrarsoma);
    mostraSub(mostrarsubt);
    mostraDiv(mostrardiv);
    mostraMult(mostrarmult);

    //tmb pode usar
        //cout << soma(divide(3,2), 3);

    return 0;
}
