/******************************************************************************
conta corrente + MENU
*******************************************************************************/
#include <iostream>
using namespace std;

//declaracao global //pq se n oq tiver em main ou funcao n vai ler
string titular;
string titularmain; //só do main para colocar no argumento
float saldo = 0;
char valormenu; //só do main para colocar no argumento
float valorsaque;
float valor;
//char valormenu;

//funcoes
    //funcao cadastro
string cadastratitular (string nome){
    cout << "\nDigite o nome do titular: ";
    cin >> titular;
    return titular;
}

    //funcao deposito
void deposita(float valor){

    saldo = saldo + valor; //saldo += valor
}

    //funcao mostrar o saldo
void mostrasaldo(){ //n coloca nada pq o valor já é universal
    cout << "\nSaldo: " << saldo; 
}

    //funcao sacar
void saca(float valor){
    
    
    if (valor > saldo){
        cout << "Saldo insuficiente\n";
    }else{
        saldo = saldo - valor;
        cout << "Saque feito\n";
    }
}
    //funcao menu
void menu (){
    cout <<"\nDigite: D-depositar// S-sacar//E-sair";
    cin >> valormenu;
    
    while ((valormenu == 'D') or (valormenu == 'S')){ 
        switch (valormenu){
            case 'D':
                cout << "\nQuanto quer adicionar? ";
                cin >> valor;
                deposita(valor);
                mostrasaldo();
                break;
            case 'S':
            cout << "\nQuanto quer sacar? ";
                cin >> valorsaque;
                saca(valorsaque);
                mostrasaldo();
                break;
            default:
                mostrasaldo();
                cout << "Fim";
                break;
                int main();
        }
        cout <<"\nDigite: D-depositar// S-sacar//E-sair";
        cin >> valormenu;
    }
}

//main
int main()
{
    // pergunta nome
    titularmain = cadastratitular(titularmain);
    cout << "\nTitular: " << titularmain;
    mostrasaldo(); //não consegue colocar essa funcao dentro de cout de cima pq retorna um void
    
    //menu
    menu();

    return 0;
}
