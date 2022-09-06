//Faça um algoritmo que calcule o IMC (Índice de Massa Corporal) de um dado individuo a partir de seu peso e altura.


#include <iostream>
#include <cmath>

using namespace std;


int main(){

    //Inserindo variáveis no código
    double Altura, Peso, IMC;

    //atribuindo valores para as variáveis
    cout << "Insria seu peso (em kg): \n";
    cin >> Peso;

     cout << "Insria sua altura (em metros): \n";
    cin >> Altura;

    //Calculando o IMC
    IMC = Peso / pow(Altura, 2);

    //informando o usuário
    cout << "Seu IMC eh: " << IMC << endl;

    system("pause");

    return 0;

}


