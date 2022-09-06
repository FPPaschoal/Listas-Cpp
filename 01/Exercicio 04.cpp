//Faça um algoritmo que calcule o rendimento de uma dada aplicação através da fórmula: F=P(1+i)^n


#include <iostream>
#include <cmath>

using namespace std;

int main() {

    //Atribuindo variáveis no código
    double ValorPresente, TaxaJuros, NumPeriodos, ValorFuturo, Rendimento;

    //Atribuindo valores para as variáveis
    cout << "Insira o valor presente: ";
    cin >> ValorPresente;

     cout << "Insira o numero de periodos: ";
    cin >> NumPeriodos;

     cout << "Insira a taxa de juros: ";
    cin >> TaxaJuros;

    //Calculando o valor futuro
    ValorFuturo = ValorPresente * pow(1 + TaxaJuros / 100, NumPeriodos) ;

    //Calculand o rendimento
    Rendimento = ValorFuturo - ValorPresente;

    //Informando o usuário
    cout << "O rendimento eh: " << Rendimento << endl;

    system("pause");

    return 0;
    
}