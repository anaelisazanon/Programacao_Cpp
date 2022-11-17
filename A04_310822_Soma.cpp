#include <iostream>

using namespace std;


int main()
{
    int n1, n2, soma, media;
    n1 = 45;
    n2 = 80;
    
    cout << "Digite n1: ";
    cin >> n1; //n soma o valor original com o digitado
    
    cout << "Digite n2: ";
    cin >> n2;
    
    
    soma = n1 + n2;
    
    media = n1 + n2 / 2.0; // colocar 2.0
        
    cout << "A soma é " << soma;
    
    cout << "\nA média é " << media;

    return 0;
}
