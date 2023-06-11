#include <bits/stdc++.h>
using namespace std;

int main(){

    int A=0;
    int B=0;
    int tem=0;

    cin >> A;
    cin >> B;

    int vet[A] = {0};
    int vet2[B] = {0};

    for(int k=0; k<A; k++){
        cin >> vet[k];
    }
    for(int k=0; k<B; k++){
        cin >> vet2[k];
    }
    cout << "\n";

    for(int k=0;k<B;k++){
        for(int l=0; l<A;l++){
            if(vet[k] == vet2[l]){
                tem = tem +1;
                break;
            }
        }
    }
    if (tem == B){
        cout << "S" << "\n";
    }else{
        cout << "N" << "\n";
    }

}

/*#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int* vet = new int[A];
    int* vet2 = new int[B];

    for (int k = 0; k < A; k++) {
        cin >> vet[k];
    }

    for (int k = 0; k < B; k++) {
        cin >> vet2[k];
    }

    int tem = 0;
    for (int k = 0; k < B; k++) {
        for (int l = 0; l < A; l++) {
            if (vet2[k] == vet[l]) {
                tem = tem + 1;
                if (l == k) {  // Verifica se está na sequência correta
                    break;
                }
            }
        }
    }

    if (tem == B) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }

    delete[] vet;
    delete[] vet2;

    return 0;
}*/
