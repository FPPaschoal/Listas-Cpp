//Faça um algoritmo que realize a conversão de graus Farenheit para centígrados


#include <iostream>

using namespace std;

int main (){

    //Inserindo as variáveis no código
    double F, C;

    //Atribuindo valores para as variáveis
    cout << "Insira os graus fahrenheit: ";
    cin >> F;

    //Transformando graus fahrenheit para graus celsius
    C = (5 * (F - 32)) / 9;

    //Informando ao usuário
    cout << F << " graus fahrenheit eh igual a: " << C << " graus celsius" << endl;

    system("pause");

    return 0;


}