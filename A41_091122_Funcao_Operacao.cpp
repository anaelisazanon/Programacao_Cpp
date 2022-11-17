//FUNCAO soma, subt, div, multip 
//equacao = (6+8 /2) -5

#include <iostream>
using namespace std;

//funcao soma
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

    //equacao
    cout << subtrai(divide (soma(6,8),2),5);

    return 0;
}
