/******************************************************************************
Crie um programa para calcular a nota final de um número X de alunos.
Para isso, o programa deverá perguntar para o usuário quantos alunos terão a nota final calculada.
Para cada aluno, o programa deverá ler a nota 1, a nota 2 e a nota 3.

As notas 1 e 2 valem peso 1 e a nota 3 vale peso 2.
Desta forma a nota final de cada aluno será calculada da seguinte forma:
Nota final= (nota1 + nota2 + 2*nota3)/4;
O programa deverá imprimir a nota final de cada aluno e informar seu estado, que é:
Aprovado para nota final maiores ou igual a 7;
Recuperação para nota final menores que 7 e maiores igual a 5;
Reprovado para nota final menores que 5;
Por fim, o programa deverá imprimir a maior e a menor nota final, assim como a média das notas finais.
Também deverá imprimir a quantidade de aprovados, de recuperação e de reprovados.
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int soma, nota, quant_alunos;
    float nota_final;
    float maior_nota_final = 0;
    float menor_nota_final = 10;
    int n1, n2, n3;
    float soma_nota_final = 0;
    float media;
    int total_aprovado;
    int total_reprovado;
    int total_recuperacao;
    
    //digitar total alunos
    cout << "\nDigite a quantidade de alunos: ";
    cin >> quant_alunos;

    //laco FOR
    
    for(int i=0; i<quant_alunos; i++){
        
        //leu as notas
        cout << "\n Digite a nota 1 ";
        cin >> n1;
        cout << "\n Digite a nota 2 ";
        cin >> n2;
        cout << "\n Digite a nota 3 ";
        cin >> n3;
        
        nota_final = (n1 + n2 + 2*n3)/4.0;
       
       //maior e menor
       if(nota_final > maior_nota_final){
            maior_nota_final = nota_final;
       }
       if(nota_final < menor_nota_final){
           menor_nota_final = nota_final;
       }
       
       //soma as notas finais
       soma_nota_final += nota_final; //soma_nota_final = nota_final + soma_nota_final
       
       //situacao
        cout << "\nA nota final do aluno é de: " << nota_final;
        
        if(nota_final >=7){
            total_aprovado++; //conta numero de aprovados
            cout<<"\n Então o aluno está Aprovado";
        }
        else if(nota_final < 5){ //se for if sem else tem que testar dnv if (nota <7 and >5)
            total_reprovado++;
            cout<<"\nEntão o aluno está Reprovado";
        }
        else{
            total_recuperacao++;
            cout<<"\nEntão o aluno está em Recuperação";
        }
        
    }
    
    //maior e menor
    
    media = soma_nota_final/quant_alunos;
    cout << "\nA media final dos alunos é de: " << media;
    
    cout << "\nA maior nota é : " << maior_nota_final;
    cout << "\nA menor nota é : " << menor_nota_final;
    
    cout << "\nA quantidade de alunos aprovados é : " << total_aprovado;
    cout << "\nA quantidade de alunos reprovados é : " << total_reprovado;
    cout << "\nA quantidade de alunos em recuperação é : " << total_recuperacao;
    
    return 0;
}
