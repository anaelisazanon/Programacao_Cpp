#include <stdio.h>

int main()
{
    float r1=0, r2=0, r3=0, r4=0, r5=0;
    
    r1 = 2+3*6;
    r2 = 12/3*2-5;
    r3 = 31/4.0;
    r4 = 31/4;
    r5 = 31%4;
    
    printf("\nr1: %.2f", r1);
    printf("\nr2: %.2f", r2);
    printf("\nr3: %.2f", r3);
    printf("\nr4: %.2f", r4);
    printf("\nr5: %.2f", r5);
    
    return 0;
}
