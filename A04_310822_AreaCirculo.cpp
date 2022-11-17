#include <stdio.h>

#define PI 3.14 // Const p.i = 3.14


int main()
{
 
    float areaCirculo, circunferenciaCirculo;
    int r = 4;
    
    circunferenciaCirculo = 2 * PI * r;
    areaCirculo = PI * (r * r);

    printf("\nA circunferência do Circulo é: %d", circunferenciaCirculo);
    printf("\nA área do Circulo é: %d", areaCirculo);

    return 0;
}
