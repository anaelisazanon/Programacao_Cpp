/******************************************************************************
Ponteiro para retornar 2 valores em uma funcao
*******************************************************************************/
#include <iostream>
using namespace std;


//int dobraValor(int valor){
//    return valor*2;
//}

void dobraValores(int *valor1, int *valor2){
    
    *valor1  = *valor1 *2;
    *valor2  = *valor2 *2;
}

int main()
{
    int var1, var2;
    var1 = 40;
    var2 = 15;
    
    dobraValores(&var1, &var2);
    
    cout << "\n" << var1 << "\n" << var2;
    
    //cout << dobraValor(4);
    
    return 0;
}
