#include <iostream>
using namespace std;

int main(){
    
    float altura;
    
    cout << "Digite a altura do atleta: ";
    cin >> altura;
    
    if (altura >=1.95){
        cout << "Categoria Ótima";
    }
    
    else if (altura >= 1.85){
        cout << "Categoria Boa";
    }
    
    else if (altura >= 1.75){
        cout << "Categoria Regular";
    }
    
    else{
        cout << "Categoria Insuficiente";
    }

    return 0;
}
