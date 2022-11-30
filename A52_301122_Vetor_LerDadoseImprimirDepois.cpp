/******************************************************************************
Ler dados de 3 alunos (nome, idade, curso)// imprimir os dados de todos os alunos
String nome[3];
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    string nome[3];
    int idade[3];
    string curso[3];
    
//Ler dados de 3 alunos
    for(int i=0; i<3; i++){
        
        cout << "Digite seu nome: ";
        cin >> nome[i];
    
        cout << "Digite sua idade: ";
        cin >> idade[i];
    
        cout << "Digite seu curso: ";
        cin >> curso[i];
    }
    
    for(int j=0; j<=2; j++){
        cout << "\nNome do aluno " << j << ": " << nome[j];
        cout << "\nIdade do(a)" << nome[j] << ": " << idade[j];
        cout << "\nNome do curso do(a)" << nome[j] << ": " << curso[j] << "\n";
    }
    
    return 0;
}
