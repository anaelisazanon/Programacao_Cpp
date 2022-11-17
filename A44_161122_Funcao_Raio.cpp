/******************************************************************************
Construa um programa para calcular a área de um circulo. O usuário deverá informa o raio e o programa deverá exibira resposta.
Utilize função para calcular a área. lembre-se que e área de um circulo é pi*R*R, onde pi é 3,14 e R é o raio.

*******************************************************************************/
#include <iostream>

using namespace std;

float calculaArea (int r){
    float pi = 3.14;
    float area;
    area = pi*r*r;
    
    return area;
}

int main()
{
    float areamain;
    int r;
    
    cout << "Digite o raio";
    cin >> r;
    
    areamain = calculaArea(r);
    
    cout << "A área do círculo é " << areamain;

    return 0;
}
