#include <stdio.h>

int main()
{
    int A, B, E, D;
    
    A = 2; 
    B = 6;
    
    {
        int A=0, C=0;
        /*importante inicializar =0*/

        A++; //A=1//
        ++C;

        C = A + ++B;
        /*Soma primeiro +1 em B, depois Faz "C= A + B(novo)"
        C=8 */
        B = C++ - A;
       //Soma depois +1 em B, PRIMEIRO Faz "B= C - A"  B=7 Depois faz C+1 fica C=9

        printf("\nA1: %d", A);
        printf("\nC: %d", C);
    }

    printf("\nA2: %d", A);
    printf("\nB: %d", B);
    

    E = ((A < B) && D) || (B != (A<B));
    
    //A < B --> 2 e 7 --> 1(true)//
    //D falso 0//
    //B = 7 --> true 1//
    //V+F= F // F ou V = V

    printf("\nE: %d", E);

    return 0;
}
