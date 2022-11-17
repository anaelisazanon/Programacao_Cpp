#include <iostream>
using namespace std;

int main()
{
    int idade = 0;
    
    cout << "Digite a idade: ";
    cin >> idade;
    
    
    if(idade >= 18){
        cout << "\nA Pessoa é de maior";
    }   
    else{
        cout << "\nA Pessoa é de menor";
    }
   
    return 0;
}
