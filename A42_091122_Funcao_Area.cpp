//FUNCAO calcula area

#include <iostream>
using namespace std;

//funcao calcula area
float area (float n1, float n2){
    int areanumeros = n1 * n2;
    return areanumeros;
}

    //funcao mostra soma
void mostraSoma (float mostrarsoma){
   cout << "A soma é " << mostrarsoma;
   //em void não usa return
}

int main(){
    float l1;
    float l2;

    cout << "Digite L1";
    cin >> l1;

    cout << "Digite L2";
    cin >> l2;
    
    //equacao
    cout << area(l1,l2);

    return 0;
}
