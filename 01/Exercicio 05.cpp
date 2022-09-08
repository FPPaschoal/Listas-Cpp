//Faça um algoritmo que calcule as raízes de uma Equação do 2o. Grau


#include <iostream>
#include <cmath>

using namespace std;

int main() {

    //Atribuindo variáveis no código
    float CoeficienteA, CoeficienteB, CoeficienteC, Delta, Resultado1, Resultado2;

    //Atribuindo valores para as variáveis
    cout << "Informe o coeficiente a \n";
    cin >> CoeficienteA;

    cout << "Informe o coeficiente b \n";
    cin >> CoeficienteB;

    cout << "Informe o coeficiente c \n";
    cin >> CoeficienteC;

    //Calculando o Delta
    Delta = (CoeficienteB * CoeficienteB) - 4 * CoeficienteA * CoeficienteC;


    //Calculando o resultado 1
    Resultado1 = (-CoeficienteB + sqrt(Delta)) / (2 * CoeficienteA);

    //Calculando o resultado 2
    Resultado2 = (-CoeficienteB - sqrt(Delta)) / (2 * CoeficienteA);

    //Informando o usuário sobre os resultados
    cout << "O X1 eh: " << Resultado1;

    cout << "\n \nO X2 eh: " << Resultado2 << endl;


    system("pause");

    return 0;

}