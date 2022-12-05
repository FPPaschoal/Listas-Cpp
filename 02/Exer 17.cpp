#include <iostream>

using namespace std;

int main(){

    double Lucro, LucroMaximo = 0, IngressosVendidos = 120, ValorIngresso, ValorIdeal, IngressosVendidosIdeal;

    for (ValorIngresso = 5; ValorIngresso > 0.5; ValorIngresso = ValorIngresso - 0.5){
        
        Lucro = (IngressosVendidos * ValorIngresso) - 200;

        if(LucroMaximo < Lucro){
            LucroMaximo = Lucro;
            ValorIdeal = ValorIngresso;
            IngressosVendidosIdeal = IngressosVendidos;
        }

        IngressosVendidos += 26;
    }
    
    cout <<"\nValor do ingresso: " << ValorIdeal << endl;
    cout <<"Ingressos vendidos: " << IngressosVendidosIdeal << endl;
    cout <<"Lucro: " << LucroMaximo << endl;

    system("pause");
    return 0;
}