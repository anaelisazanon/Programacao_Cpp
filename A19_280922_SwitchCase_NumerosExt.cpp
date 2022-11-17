//switch case
//digitar num 1-5 e imprimir valor é diferente desses ou é esses

#include <iostream>

using namespace std;

int main()
{

    int numero;
    
    cout<<"Digite um numero de 1-5: ";
    cin >> numero;
    
    switch (numero){
        case 1: //n usa formula somente uma variavel
            cout << "\nEsse é o número UM";
            break;
        
        case 2:
            cout << "\nEsse é o número DOIS";
            break;
        
        case 3:
            cout << "\nEsse é o número TRÊS";
            break;
        
        case 4:
            cout << "\nEsse é o número QUATRO";
            break;
            
        case 5:
            cout << "\nEsse é o número CINCO";
            break;
            
        default:
            cout << "Esse número não está entre UM e CINCO";
        
    }
    
    return 0;
}
