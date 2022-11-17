/******************************************************************************
Ex funcao - bloco de codigo
*******************************************************************************/
#include <iostream>

using namespace std;

//funcao //se for void n volta nada
float calculaMedia(int pn1, int pn2){//funcao usa tudo junto
    
    float media;
    media = (pn1 + pn2) / 2;
    return media;
}

//main
int main()
{
    int n1,n2;
    float media;
    
    cout << "\nDigite o numero 1";
    cin >> n1;
    
    cout << "\nDigite o numero 2";
    cin >> n2;
    
    //chamando a função
    media = calculaMedia(n1, n2); 
    
    //informar media
    cout << "\nA média é " << media;
    
    
    
    
    return 0;
}
