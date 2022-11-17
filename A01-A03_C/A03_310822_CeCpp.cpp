#include <iostream>

using namespace std;
//usa isso para n ter q usar em cada COUT "std cout"

int main()
{
    int v1 = 44;
    cout << "Hello World" << v1 << "novo texto";
    printf("\ntexto %d", v1);
    
    cin >> v1; //entrada (espera digitar algo do teclado)
    
    cout << "digitado>:" << v1;
    
    return 0;
}
