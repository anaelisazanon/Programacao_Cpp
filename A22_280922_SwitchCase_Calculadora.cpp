//calculadora
//digitar n1, operador, n2, resultado

#include <iostream>
using namespace std;

int main(){
    
    int n1, n2, resultado, numero;
    char op;  // = 'c'   unica letra e aspas simples
    
    cout << "Digite um numero: ";
    cin >> n1;
    
    cout << "Digite outro numero: ";
    cin >> n2;


    cout << "Digite o operador: ";
    cin >> op;
    
    switch (op){
        case '+': 
            resultado = n1 + n2;
            cout << "Resultado é " << resultado;
            break;
            
        case '-': 
            resultado = n1 - n2;
            cout << "Resultado é " << resultado;
            break;
            
        case '/': 
            resultado = n1 / n2;
            cout << "Resultado é " << resultado;
            break;      
            
        case '*': 
            resultado = n1 * n2;
            cout << "Resultado é " << resultado;
            break;
 
        default:
            cout << "Não é válido";
            break;
        
    }

    
    return 0;
}
