//calculadora
//digitar n1, operador, n2, resultado
//pergunta se quer continuar

#include <iostream>
using namespace std;

int main(){
    
    int n1, n2;
    float resultado;
    char continua;
    char op;  // = 'c'   unica letra e aspas simples
    bool flag_sucesso; //informar que finalizou sem dar erro
    
    do {
        cout << "Digite um numero: ";
        cin >> n1;
        
        cout << "Digite outro numero: ";
        cin >> n2;
    
        cout << "Digite o operador: ";
        cin >> op;
        
//processamento   
        flag_sucesso = true;
        switch (op){
            case '+': 
                resultado = n1 + n2;
                cout << "Resultado é " << resultado;
                break;
                
            case '-': 
                resultado = n1 - n2;
                break;
                
            case '/': 
                resultado = n1 / n2;
                break;      
                
            case '*': 
                resultado = n1 * n2;
                break;
     
            default:
                flag_sucesso = false;
                cout << "Não é válido";
                break;
    
        }
        if (flag_sucesso){
            
            cout << "\nResultado: " << resultado;
        }
        
        
        cout << "\nDeseja fazer mais uma operação? Digite s Ou n";
        cin >> continua;
    }
    while ((continua == 's') || (continua == 'S'));
    return 0;
}
