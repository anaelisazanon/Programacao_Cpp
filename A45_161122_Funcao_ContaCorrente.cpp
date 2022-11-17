/******************************************************************************
conta corrente
*******************************************************************************/
#include <iostream>
using namespace std;

//declaracao global //pq se n oq tiver em main ou funcao n vai ler
string titular;
string titularmain; //só do main para colocar no argumento
float saldo = 0;
float valormain; //só do main para colocar no argumento
float valorsaque;

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
bool saca(float valor){
    if (valor > saldo){
        return false;
    }else{
        saldo = saldo - valor;
        return true;
    }
}

//main
int main()
{
    // pergunta nome
    titularmain = cadastratitular(titularmain);
    cout << "\nTitular: " << titularmain;
    mostrasaldo(); //não consegue colocar essa funcao dentro de cout de cima pq retorna um void
    
    //pergunta quanto para adc
    cout << "\nQuanto quer adicionar? ";
    cin >> valormain;
    
    //chama deposita
    deposita(valormain); //valormain poderia ser 100
    mostrasaldo();

    //chama saque
    cout << "\nQuanto quer sacar? ";
    cin >> valorsaque;
    
    //retorna se saque foi feito ou nao
    if (saca(valorsaque) == true){  //n precisa do == pq já avalia true
        cout << "Saque feito\n";
        mostrasaldo();
        
    }else{
        cout << "Saldo insuficiente\n";
    }
    return 0;
}
