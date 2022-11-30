/******************************************************************************
MATRIZ
*******************************************************************************/
#include <iostream>
using namespace std;

int matriz[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};

int main()
{
    for(int linha=0; linha<3; linha++){
        
        for(int col=0; col<3; col++){
        cout << " " << matriz[linha][col];
        }
        
        cout << "\n";
    }
    return 0;
}
