//switch case
//digitar 1-12 e imprimir nome do mes

#include <iostream>
using namespace std;

int main(){
    
    int mes;
    
    cout << "Digite um número de 1-12: ";
    cin >> mes;
    
    switch (mes){
        case 1:
            cout << "\n Esse é o mês Janeiro";
            break;
        
        case 2:
            cout << "\n Esse é o mês Fevereiro";
            break;
            
        case 3:
            cout << "\n Esse é o mês Março";
            break;
            
        case 4:
            cout << "\n Esse é o mês Abril";
            break;

        case 5:
            cout << "\n Esse é o mês Maio";
            break;
            
        case 6:
            cout << "\n Esse é o mês Junho";
            break;

        case 7:
            cout << "\n Esse é o mês Julho";
            break;
            
        case 8:
            cout << "\n Esse é o mês Agosto";
            break;
            
        case 9:
            cout << "\n Esse é o mês Setembro";
            break;
            
        case 10:
            cout << "\n Esse é o mês Outubro";
            break;
            
        case 11:
            cout << "\n Esse é o mês Novembro";
            break;
            
        case 12:
            cout << "\n Esse é o mês Dezembro";
            break;
            
        default:
            cout << "Esse número não é válido";
    }    
    
    return 0;
}
