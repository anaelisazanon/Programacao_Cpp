/******************************************************************************
funcao calculadora
*******************************************************************************/
#include <iostream>
using namespace std;

//funcao soma
float calculaSoma(float n1, float n2){
    int resultado = n1 + n2;
    return resultado;
    //ou return n1+n2;
}

//funcao subtracao
float calculaSubt(float n1, float n2){
    int resultado = n1 - n2;
    return resultado;
}

//funcao divisao
float calculaDiv(float n1, float n2){
    int resultado = n1 / n2;
    return resultado;
}

//funcao multiplicacao
float calculaMult(float n1, float n2){
    int resultado = n1 * n2;
    return resultado;
}

//funcao resultado (agloba as outras 4)

float operacao(float n1, float n2, char op){
    switch (op){
        case '+': return calculaSoma(n1, n2); 
            //break;
        case '-': return calculaSubt(n1, n2); 
        case '/': return calculaDiv(n1, n2); 
        case '*': return calculaMult(n1, n2);
     
        /*default:
            cout << "Não é válido";
            break;*/
        }
    return 0;
}

int main(){
    
    int n1, n2;
    float resultado;
    char continua = 's';
    char op;

    while ((continua == 's') || (continua == 'S')) {
        cout << "Digite um numero: ";
        cin >> n1;
        
        cout << "Digite outro numero: ";
        cin >> n2;
    
        cout << "Digite o operador: ";
        cin >> op;
        
        
    //funcao
        resultado = operacao(n1, n2, op);
        cout  << "Resultado " << resultado;
        
    //pergunta se retorna    
        cout << "\nDeseja fazer mais uma operação? Digite s Ou n";
        cin >> continua;
    }

    return 0;
}
