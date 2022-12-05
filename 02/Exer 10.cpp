#include <iostream>

using namespace std;

int main(){

    int PessoasCanal4 = 0, PessoasCanal5 = 0, PessoasCanal7 = 0, PessoasCanal12 = 0, PessoasCasa = 0, TVligada, NumeroCanal = 1, PessoasTotal = 0;

    double PorcentagemCanal4 = 0, PorcentagemCanal5 = 0, PorcentagemCanal7 = 0, PorcentagemCanal12 = 0 ;

    while(NumeroCanal != 0){

        cout <<"A TV esta ligada? [1]Sim [0]Nao" << endl;
        cin >> TVligada;
        if (TVligada == 1){
            
            cout << "Qual o numero do canal?" << endl;
            cin >> NumeroCanal;
            if (NumeroCanal != 0){
                cout << "Quantas pessoas estao assistindo? " << endl;
                cin >> PessoasCasa;
                PessoasTotal += PessoasCasa;

                switch (NumeroCanal){
                case 4:
                PessoasCanal4 += PessoasCasa;    
                break;
                case 5:
                PessoasCanal5 += PessoasCasa;    
                break;
                case 7:
                PessoasCanal7 += PessoasCasa;    
                break;
                case 12:
                PessoasCanal12 += PessoasCasa;    
                break;
                }
            }
        }else{}
    }

    PorcentagemCanal4 = (double)(PessoasCanal4 * 100) / PessoasTotal;
    PorcentagemCanal5 = (double)(PessoasCanal5 * 100) / PessoasTotal;
    PorcentagemCanal7 = (double)(PessoasCanal7 * 100) / PessoasTotal;
    PorcentagemCanal12 = (double)(PessoasCanal12 * 100) / PessoasTotal;

    cout << "Canal 4: " << PorcentagemCanal4 << "%" << endl;
    cout << "Canal 5: " << PorcentagemCanal5 << "%" << endl;
    cout << "Canal 7: " << PorcentagemCanal7 << "%" << endl;
    cout << "Canal 12: " << PorcentagemCanal12 << "%" << endl;

    system ("pause");
    return 0;
}