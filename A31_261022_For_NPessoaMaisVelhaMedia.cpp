/******************************************************************************
Atividade (for)
Para um número de N pessoas, leia o nome e a idade.
Por fim imprima na tela o nome e a idade da pessoa mais velha e da mais nova.
Imprima também a média das idades.
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    //declaracao
    int quant_pessoas;
    int idade;
    string nome;

    int idade_maior;
    string nome_maior;
    int idade_menor;
    string nome_menor;

    int media;
    int soma_idades = 0;
    
    //quant pessoas

    cout << "\nDigite a quant pessoas: ";
    cin >> quant_pessoas;

    //primeira que digitar será mais velha e mais nova

    cout << "\nDigite o nome: ";
    cin >> nome;
        
    cout << "\nDigite a idade desta pessoa: ";
    cin >> idade;

    nome_maior = nome;
    idade_maior = idade;
    nome_menor = nome;
    idade_menor = idade;
    soma_idades = soma_idades + idade;

    //ver nome do resto e idade
    
    for(int i=1; i<quant_pessoas; i++){ 
        
        cout << "\nDigite o nome: ";
        cin >> nome;
        
        cout << "\nDigite a idade desta pessoa: ";
        cin >> idade;
        
        if(idade < idade_menor){
            
            idade_menor =  idade; //tem que ser nessa ordem
            nome_menor = nome;
        }
        
        if(idade > idade_maior){
            
            idade_maior = idade;
            nome_maior = nome;
        }
        soma_idades = soma_idades + idade;
    }
    //media

    media = soma_idades/ quant_pessoas;

    //imprimir nome e idade da pessoa mais velha e mais nova
    
    cout << "\n" << idade_maior << " e a idade maior";
    cout << "\n" << nome_maior << " e a pessoa com idade maior";
   
    cout << "\n" << idade_menor << " e a idade menor";
    cout << "\n" << nome_menor << " e a pessoa com idade menor";

    cout << "\n" << media << "e a media das idades";

    return 0;
}
