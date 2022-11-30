/******************************************************************************
Ler dados de 3 alunos (nome, idade, curso)// imprimir os dados de todos os alunos
String nome[3];
FUNCAO
*******************************************************************************/
#include <iostream>
using namespace std;

//Variáveis Globais
string vet_nome[3];
int vet_idade[3];
string vet_curso[3];

//Nome  
    //funcao Ler os Nomes
string lerNome(){
    string tmp_nome;
    cout << "Digite seu nome: ";
    cin >> tmp_nome;
    return tmp_nome;
}
    //funcao Salvar os Nomes
void salvarNome(string p_nome, int p){
    vet_nome[p] = p_nome;
}

//Idade
    //funcao Ler as Idades
int lerIdade(){
    int tmp_idade;
    cout << "Digite a idade: ";
    cin >> tmp_idade;
    return tmp_idade;
}
    //funcao Salvar os Nomes
void salvarIdade(int p_idade, int p){
    vet_idade[p] = p_idade;
}
    
//Curso
    //funcao Ler os Cursos
string lerCurso(){
    string tmp_curso;
    cout << "Digite o curso: ";
    cin >> tmp_curso;
    return tmp_curso;
}
    //funcao Salvar os Cursos
void salvarCurso(string p_curso, int p){
    vet_curso[p] = p_curso;
}

int main()
{
    for(int j=0; j<=2; j++){
        salvarNome(lerNome(), j); //é igual a     nomeTmp = lerNome(); salvarNome(nomeTmp, j); //string nomeTmp;
        salvarIdade(lerIdade(),j);
        salvarCurso(lerCurso(),j);
    }
    
    for(int j=0; j<=2; j++){
        cout << "\nNome do aluno " << j << ": " << vet_nome[j];
        cout << "\nIdade do(a)" << nome[j] << ": " << vet_idade[j];
        cout << "\nNome do curso do(a)" << nome[j] << ": " << vet_curso[j] << "\n";
    }
    
    return 0;
}
