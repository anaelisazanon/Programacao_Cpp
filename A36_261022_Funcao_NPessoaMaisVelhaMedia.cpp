/******************************************************************************
Atividade 14 (for)
Para um número de N pessoas, leia o nome e a idade.
Por fim imprima na tela o nome e a idade da pessoa mais velha e da mais nova.
Imprima também a média das idades.
*******************************************************************************/
#include <iostream>
using namespace std;

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

//funcoes

int lerTotalPessoas(){
    int total; //n chamou no global
    cout << "\nDigite a quant pessoas: ";
    cin >> total;
    return total; //total vira lerTotalPessoas
}

void lerNomePessoas(){
    cout << "\nDigite o nome: ";
    cin >> nome;
}

void lerIdadePessoas(){
    cout << "\nDigite a idade desta pessoa: ";
    cin >> idade;
    soma_idades = soma_idades + idade;
}
    
    
int main()
{
    //******chamar funcao com variais locais dentro da funcao
    int quant_pessoas;
    quant_pessoas = lerTotalPessoas();
    
    //funcao com variaveis globais
    lerIdadePessoas();
    lerNomePessoas();
    
    //primeira que digitar será mais velha e mais nova

    nome_maior = nome;
    idade_maior = idade;
    nome_menor = nome;
    idade_menor = idade;

    //ver nome do resto e idade
    
    for(int i=1; i<quant_pessoas; i++){ 
        
        lerNomePessoas();
        lerIdadePessoas();
        
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
