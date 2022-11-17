#include <iostream>

using namespace std;

int main()
{
    float nota = 10;
    
    if(nota >=7){
        cout<<"Aprovado";
    }
    else if(nota >= 5 and nota <7){
        cout<<"Recuperação";
    }
    else{
        cout<<"Reprovado";
    }

    return 0;
}
