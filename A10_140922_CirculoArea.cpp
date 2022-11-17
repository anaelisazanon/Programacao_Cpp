#include <iostream>

using namespace std;

#include <math.h>

#define PI 3.14 // Const p.i = 3.14


int main()
{
 
    float areaCirculo, circunferenciaCirculo;
    int r;
    
    cout << "Digite o valor do raio";
    cin >> r;
    
    circunferenciaCirculo = 2*PI*r;
    areaCirculo = PI  * pow(r,2); //pow é potenciacao (r*r)
    
    cout << "para um raio de " << r;
    cout << "\nA circunferência do Circulo é: " << circunferenciaCirculo;
    cout << "\nA área do Circulo é: " << areaCirculo;

    return 0;
}
