/* EX 17 https://github.com/isquicha/exercicios-logica-c
Faça um Programa para uma loja de tintas.
O programa deve pedir o tamanho em metros quadrados da área a ser pintada.
Considere que a cobertura da tinta é de 1 litro para cada 6 metros quadrados
e que a tinta é vendida em latas de 18 litros, que custa R$ 80,00
ou em galões de 3,6 litros, que custam R$ 25,00.
Informe ao usuário as de tinta a serem compradas
e os respectivos preços em 3 situações:
    comprar apenas latas de 18 litros;
    comprar apenas galões de 3,6 litros;
    misturar latas e galões, de forma que o preço seja o menor.
        Acrescente 10% de folga e sempre arredondando os valores para cima,
        isto é, considere latas cheias.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
//Declaracao
    float area, litro, valor_lata_menor, valor_lata_maior;
    float area_mais_dez; 
    float litro_mist;
    float valor_mist_lata_maior, valor_mist_lata_menor;
    int qtd_lata_maior, qtd_lata_menor;
    int qtd_mist_lata_menor=0, qtd_mist_lata_maior;
    float valor_mist;
    float resto;
    
//Entrada
    cout <<"Digite a area em metro quadrados";
    cin >> area;
    area_mais_dez = area * 1.1f;

//Operacao Quant de litros
    litro = area / 6;
    cout << "\n Litro:" << litro;

    litro_mist = area_mais_dez / 6;
    cout << "\n Litro com 10 porcento extra:" << litro_mist;

//Operacao Latas
    qtd_lata_maior = ceil(litro / 18);
    cout << "\n Latas maiores: " << qtd_lata_maior;

    qtd_lata_menor = ceil(litro / 3.6f);
    cout << "\n Latas menores: " << qtd_lata_menor;

//Operacao Latas Misturadas
    //Dividir quantidade de litros necessários por 18 e receber numero inteiro;
    qtd_mist_lata_maior = litro_mist / 18;
    
    //O resto será a quantidade de litros em galões (latas menores)
    resto = litro_mist - (18 * qtd_mist_lata_maior);

    if (resto > 10.8){
        qtd_mist_lata_maior++;
    }else{
        qtd_mist_lata_menor = ceil(resto / 3.6f);
    }

//Preço conta
    valor_lata_menor = 25 * qtd_lata_menor;
    valor_lata_maior = 80 * qtd_lata_maior;

    valor_mist_lata_maior = 80 * qtd_mist_lata_maior;
    valor_mist_lata_menor = 25 * qtd_mist_lata_menor;
    valor_mist = valor_mist_lata_maior + valor_mist_lata_menor;

//Saída
    cout << "\n Precisa de " << qtd_lata_maior << " latas maior ";
    cout << "\n O valor sera de " << valor_lata_maior << " reais ";

    cout << "\n Precisa de " << qtd_lata_menor << " latas menor ";
    cout << "\n O valor sera de  " << valor_lata_menor << " reais ";

    cout << "\n Para mistura precisa de " << qtd_mist_lata_maior << " latas maior ";
    cout << "\n e " << qtd_mist_lata_menor << " latas menor ";
    cout << "\n O valor de latas misturadas sera de " << valor_mist << " reais ";

    return 0; 
}
