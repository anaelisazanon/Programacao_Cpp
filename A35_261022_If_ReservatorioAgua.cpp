//Trabalho 1 (peso 3)
//Dada a atual crise hídrica do país, as pessoas começaram a construir reservatórios para armazenar água em suas propriedades. Faça um programa em linguagem C que auxilie os utilizadores do reservatório a controlarem seu consumo. 
//Obtenha do teclado a capacidade total do reservatório(em litros) e o consumo médio diário dos moradores (em litros/dia). 
//Assuma que o reservatório esteja cheio e informe: 
//(a) A autonomia do reservatório, em dias;
//(b) A classificação do consumo, de acordo com a quantidade de dias de autonomia: 
//Consumo elevado, se a autonomia for menor que 2 dias; 
//Consumo moderado, se a autonomia estiver entre 2 e 7 dias; 
//Consumo reduzido, se a autonomia maior que 7 dias.

#include <iostream>
#include <cmath>
using namespace std;

int main(){
//Declaração de variáveis
    int capacidade_total;
    int consumo_medio_diario;
    int capacidade_dias;

//Obter Capacidade total do reservatório (l)
    cout << "\nDigite a capacidade total do reservatorio em litros: ";
    cin >> capacidade_total;

//Obter Consumo médio diário dos moradores (l/dia)
    cout << "\nDigite o consumo medio diario dos moradores em litro por dia: ";
    cin >> consumo_medio_diario;

//(a) Autonomia do reservatório (dias)
    capacidade_dias = ceil(capacidade_total / consumo_medio_diario);
    cout << "\nA quantidade de dias que durara o reservatorio eh: " << capacidade_dias;

//(b) Classificacao do consumo 
    if(capacidade_dias < 2)
    {
        cout <<"\nConsumo elevado";
    }
    else if (capacidade_dias > 7)
    {
        cout <<"\nConsumo reduzido";
    }
    else{
        cout <<"\nConsumo moderado";
    }
return 0;
}
