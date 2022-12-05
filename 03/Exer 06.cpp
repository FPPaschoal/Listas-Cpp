#include <iostream>

using namespace std;

int main(){

    float TotalVendas[10], Percentual[10], Valor, MaiorValor, MenorValor;
    int i;
    string Nomes[10], MaiorNome, MenorNome;

    for(i = 0; i < 10; i++){
        cout << "Informe o NOME do vendedor " << i+1 <<endl;
        cin >> Nomes[i];
        cout << "Informe o TOTAL de VENDAS do vendedor " << i+1 <<endl;
        cin >> TotalVendas[i];
        cout << "Informe o PERCENTUAL de COMISSAO do vendedor " << i+1 << " [10=0.1] [50=0.5]" <<endl;
        cin >> Percentual[i];
    }

    cout << "\n------------------" << endl;

    for(i = 0; i < 10; i++){

        Valor = TotalVendas[i] * Percentual[i];

        cout << "\nNome: " << Nomes[i] << endl;
        cout << "Valor a receber: R$" << Valor << endl;
        cout << "Vendas: " << TotalVendas[i] << endl;

        if(i == 0){
            MaiorValor = Valor;
            MenorValor = Valor;
            MaiorNome = Nomes[i];
            MenorNome = Nomes[i];
        }
        if(MaiorValor < Valor){
            MaiorValor = Valor;
            MaiorNome = Nomes[i];
        }
        if(MenorValor > Valor){
            MenorValor = Valor;
            MenorNome = Nomes[i];
        }
    }

    cout << "\n---------------------" << endl;

    cout << "\nMaior Valor a receber" << endl;
    cout << "Nome: " << MaiorNome << endl;
    cout << "Valor: R$" << MaiorValor << endl;

    cout << "\nMenor Valor a receber" << endl;
    cout << "Nome: " << MenorNome << endl;
    cout << "Valor: R$" << MenorValor << endl;


    return 0;
}