#include <stdio.h>

int main()
{
    int A = 2;
    int B = 12 + 23 / ++A; // primeiro adc 1 ao A, depois divide 23/A depois soma 12
    
    A +=3; //A = A +3;
    // A *= N  é igual a A = A * N 
    
    int C = B % A--;
    float D = B / (A);
    int E = B / (A);
    int F = (E >= D) || ((A == (D + 2)) && ((C + E) > A));
    int G = ((B * A) < (C * A)) && !(F || (D > E));
    
    printf("\n O valor de A é: %d", A);
    printf("\n O valor de B é: %d", B);
    printf("\n O valor de C é: %d", C);
    printf("\n O valor de D é: %d", D);
    printf("\n O valor de E é: %d", E);
    printf("\n O valor de F é: %d", F);
    printf("\n O valor de G é: %d", G);
    
    return 0;
}
