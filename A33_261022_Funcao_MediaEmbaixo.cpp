/******************************************************************************
Ex funcao EMBAIXO- bloco de codigo
embaixo

A diferenca vai ser que em cima vc só declara e embaixo vc coloca a função toda
*******************************************************************************/
#include <iostream>

using namespace std;

//só declara para colocar funcao embaixo
float calculaMedia(int, int);

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

 //funcao embaixo//se for void n volta nada
float calculaMedia(int pn1, int pn2){//funcao usa tudo junto
    
    float media;
    media = (pn1 + pn2) / 2;
    return media;
}  
