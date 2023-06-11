#include <bits/stdc++.h>
using namespace std;

int matriz[10][10],n,soma=0;
int main(){
    cin >> n;
    
//pegar matriz
    for (int i=0; i<n; i++){
        for(int j=0;j<n; j++){
            cin>> matriz[i][j];  
        }
    }
//ver a soma desejada da linha 0 1
    for(int i=0; i<n; i++){ 
        soma = soma + matriz[0][i];
    }
    
//soma linhas
    int deuruim=0;
    for (int i=0; i<n; i++){
        int somalinha=0;

        for(int j=0;j<n; j++){
            somalinha = somalinha + matriz[i][j];
        }
        if (somalinha != soma){
            deuruim = 1;
        }
    }
//soma colunas
    for (int i=0; i<n; i++){
        int somacoluna=0;

        for(int j=0;j<n; j++){
            somacoluna = somacoluna + matriz[j][i];
        }
        if (somacoluna != soma){
            deuruim = 1;
        }
    }

//soma diagonal 1 1  2 2  3 3
    int somadiagonal = 0;
    for (int i=0; i<n; i++){
        somadiagonal = somadiagonal + matriz[i][i];
    }
    if (somadiagonal != soma){
        deuruim = 1;
        }

//soma diagonal oposta //0 n-1 /1 n-2 / 2 n-3
    int somadiagonal2 = 0;
    for (int i=0,q=1; i<n; i++,q++){
        somadiagonal2 = somadiagonal2 + matriz[i][n-q];
    }
    if (somadiagonal2 != soma){
        deuruim = 1;
    }

if (deuruim == 1){
    cout << -1 << "\n";
}else{
    cout << soma << "\n";
}

}
