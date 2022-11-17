#include <iostream>
using namespace std;

int main(){
    
    char op;  // = 'c'   unica letra e aspas simples
    
    cout << "Digite um operador: ";
    cin >> op;
    
    if (op == '+'){
        cout << "\n Operador de adicao";
    }
    else{
        cout << "\n Operador de desconhecido";
    } 
    return 0;
}
