//calculadora
//digitar n1, operador, n2, resultado
//pergunta se quer continuar

#include <iostream>
using namespace std;

int main(){
    
    int n1, n2;
    float resultado;
    char continua = 's';
    char op;  // = 'c'   unica letra e aspas simples

    while ((continua == 's') || (continua == 'S')) {
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
        cout << "\nDeseja fazer mais uma operação? Digite s Ou n";
        cin >> continua;
    }

    return 0;
}
