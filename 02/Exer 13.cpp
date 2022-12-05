#include <iostream>

using namespace std;

int main(){

    int NumeroConsumidor = 1, QuantidadeKWH = 0, CodigoConsumidor = 0, Contador = 0;

    double PrecoKWH = 0, TotalPagar = 0, MaiorConsumo = 0, MenorConsumo = 0, ConsumoTotalResidencial = 0, ConsumoTotalComercial = 0, ConsumoTotalIndustrial = 0, MediaGeralConsumo = 0, ConsumoGeral = 0;


    cout << "Qual eh o valor do kWh?" << endl;
    cin >> PrecoKWH;

    while(NumeroConsumidor != 0){

        cout << "Informe o Numero do Consumidor" << endl;
        cin >> NumeroConsumidor;
            if(NumeroConsumidor != 0){

                cout << "Qual foi a quantidade de kWh consumida no mes?" << endl;
                cin >> QuantidadeKWH;

                cout << "Qual eh o tipo de consumidor? [1]Residencial [2]Comercial  [3]Industrial" << endl;
                cin >>CodigoConsumidor;

                TotalPagar = PrecoKWH * QuantidadeKWH;
                ConsumoGeral += TotalPagar;

                if (Contador == 0){
                    MaiorConsumo = TotalPagar;
                    MenorConsumo = TotalPagar;
                }if (MaiorConsumo < TotalPagar){
                    MaiorConsumo = TotalPagar;
                }if (MenorConsumo > TotalPagar){
                    MenorConsumo = TotalPagar;
                }
                
                switch (CodigoConsumidor){
                case 1:
                    ConsumoTotalResidencial += TotalPagar;
                break;
                case 2:
                    ConsumoTotalComercial += TotalPagar;
                break;
                case 3:
                    ConsumoTotalIndustrial += TotalPagar;
                break;
                }

                cout << "Consumidor: " << NumeroConsumidor << endl;
                cout << "Total a pagar: " << TotalPagar << endl;
                Contador++;
            }
           
    }
     MediaGeralConsumo = ConsumoGeral / Contador;

            cout << "O maior consumo foi: " << MaiorConsumo << endl;
            cout << "O menor consumo foi: " << MenorConsumo << endl;
            cout << "Consumo Residencial: " << ConsumoTotalResidencial << endl;
            cout << "Consumo Comercial: " << ConsumoTotalComercial << endl;
            cout << "Consumo Industrial: " << ConsumoTotalIndustrial << endl;
            cout << "Media Geral de Consumo: " << MediaGeralConsumo << endl;

    system("pause");
    return 0;
}