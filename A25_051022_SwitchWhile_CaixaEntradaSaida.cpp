// Saldo = 0
//Perguntar operacao entrada e saida
//valor
//Perguntar se quer repetir

#include <iostream>
using namespace std;

int main(){

//declaracao variavel
    float valor_produto;
    char entrada_saida;
    float saldo = 0;
    char continua = 's';

while (continua == 's'){
    //perguntar o valor  
        cout << "Digite o valor: ";
        cin >> valor_produto;
        
        cout << "\nDigite a operação: ";
        cout << "\ne: entrada ";
        cout << "\ns: saída ";
        cin >> entrada_saida;
        
    
    //soma ou subtrai    
        switch (entrada_saida){
            case 'e':
                saldo = saldo + valor_produto;
                cout << "\nO valor final é de " << saldo;
                break;
                
            case 's':
                saldo = saldo - valor_produto;
                cout << "\nO valor final é de " << saldo;
                break;
                
            default:
                cout << "Não é válido";
                break;
            
        }
    cout << "\nDeseja fazer mais uma operação? Digite s/n ";
    cin >> continua;
}
    return 0;
}
