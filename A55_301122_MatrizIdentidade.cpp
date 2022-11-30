/******************************************************************************
MATRIZ
*******************************************************************************/
#include <iostream>
using namespace std;

int matriz[6][6];

int main()
{
    for(int linha=0; linha<6; linha++){
    
        for(int col=0; col<6; col++){
            
            if (linha == col){
                cout << " " << 1;
            }else{
                cout << " " << matriz[linha][col];
            }
        }

        cout << "\n";
    }
    return 0;
}
