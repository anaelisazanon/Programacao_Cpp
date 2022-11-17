// LER VALOR PRODUTO e 
//codigo cliente 1 (normal), 2 (especial), 3(vip)
// switch case imprime desconto 1(0); 2(10%) *0,9 ; 3 (20%) *0,8
// desconto = valor * (1 - 0,1)
//desconto = valor * (1 - 0,2)

#include <iostream>
using namespace std;

int main(){
    
    float valor_produto;
    int cod_cliente;
    float desconto;
    
    cout << "Digite o valor do produto: ";
    cin >> valor_produto;
    
    cout << "\nDigite o código do cliente 1 (normal), 2 (especial), 3(vip)";
    cin >> cod_cliente;
    
    switch (cod_cliente){
        case 1:
            desconto = valor_produto;
            cout << "\nO valor final é de " << desconto;
            break;
            
        case 2:
            desconto = valor_produto * (0.9);
            cout << "\nO valor final é de " << desconto;
            break;
            
        case 3:
            desconto = valor_produto * (0.8);
            cout << "\nO valor final é de " << desconto;
            break;
            
        default:
            cout << "Não é válido";
            break;
        
    }
    
    return 0;
}
