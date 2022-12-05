#include <iostream>

using namespace std;

int main(){

    int Acao = 1;
    double Saldo, Deposito, Saque;

    cout << "Informe o Saldo da conta" << endl;
    cin >> Saldo;

    while (Acao != 0){
        
        cout << "\nInforme qual acao deseja fazer [0]Sair [1]Depositar [2]Sacar [3]Verificar Saldo" << endl;
        cin >> Acao;

        if (Acao != 0){
            
            switch (Acao){
            case 1:
                cout << "\nInforme a quantia para deposito" << endl;
                cin >> Deposito;

                Saldo += Deposito;
                cout << "\nSaldo atual: R$" << Saldo << endl;
            break;
            case 2:
                
                cout << "\nInforme quanto deseja Sacar" << endl;
                cin >> Saque;

                if (Saque <= Saldo){
                    Saldo = Saldo - Saque;
                    cout << "\nSaldo atual: R$" << Saldo << endl;
                }else{
                    cout << "\nNao ha fundos!" << endl;
                    cout << "Saldo atual: R$" << Saldo << endl;
                }

            break;
            case 3:
                cout << "Saldo atual: R$" << Saldo << endl;
            break;
            
            default:
                cout << "Acao nao Identificada!" << endl;
            break;
            }

        }
    }
    
    cout << "Fim do programa!" << endl;
    cout << "Saldo Final: R$" << Saldo << endl;

    system("pause");
    return 0;
}