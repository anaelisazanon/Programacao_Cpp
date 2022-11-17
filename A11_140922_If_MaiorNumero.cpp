//Maior numero

#include <iostream>

using namespace std;

int main()
{
    int n1=4, n2=1, n3=33, n4=6, n5=100;
    int maior;
    
    maior = n1;
    
    if (n2 > maior){
        maior = n2;
    }
    if(n3 > maior){
        
        maior = n3;
    }
    if(n4 > maior){
        
        maior = n4;
    }
    if(n5 > maior){

        maior = n5;
    }
    
    cout << "O maior é " << maior;

    return 0;
}
