/******************************************************************************
1) Faça um programa que leia três números inteiros e imprima: o menor, o maior e o intermediário.
*******************************************************************************/
//ARRUMAR

#include <iostream>

using namespace std;

int main()
{
    int n1 = 10;
    int n2 = 5;
    int n3 = 7;

    
    if(n1 > n2 and n1 > n3)
    {
        cout << "n1 é o maior número";
        
        if(n2 > n3){
            
            cout << "\nn2 é o  número intermediário";
            cout << "\nn3 é o menor número";
        }
        else{
            
            cout << "\nn3 é o  número intermediário";
            cout << "\nn2 é o menor número"; 
        }
    }   

    if(n2 > n1 and n2 > n3)
    {
        cout << "n2 é o maior número";
        
        if(n1 > n3){
            
            cout << "\nn1 é o  número intermediário";
            cout << "\nn3 é o menor número";
        }
        else{
            
            cout << "\nn3 é o  número intermediário";
            cout << "\nn1 é o menor número"; 
        }
    }   
    
    if(n3 > n1 and n3 > n2)
    {
        cout << "n3 é o maior número";
        
        if(n1 > n2){
            
            cout << "\nn1 é o  número intermediário";
            cout << "\nn2 é o menor número";
        }
        else{
            
            cout << "\nn2 é o  número intermediário";
            cout << "\nn1 é o menor número"; 
        }
    }   
        
    return 0;
}
