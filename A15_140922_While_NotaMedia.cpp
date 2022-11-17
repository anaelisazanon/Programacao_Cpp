#include <iostream>
using namespace std;

int main()
{
    int cont = 0;
    int nota;
    float media;
    float soma;
    
    while(cont < 3){
        
        cout << "Digite a primeira nota ";
        cin >> nota;
        
        soma+= nota;
        
        cont++;
 
    }
    
    media = soma / 3;
    
    if(nota >=7){
        cout<<"Aprovado";
    }
    else if(nota >= 5 and nota <7){
        cout<<"Recuperação";
    }
    else{
        cout<<"Reprovado";
    }
    
    cout << "\nA média é " << media;
    

    return 0;
}
