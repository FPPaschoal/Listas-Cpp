//Faça um algoritmo que calcule a média final de uma disciplina que possui duas notas.


#include <iostream>


using namespace std;

int main(){

    //inserindo variáveis no código
    double nota1, nota2, media;

    //atribuindo valor para as variáveis
    cout << "Informe a nota 1:  ";
    cin >> nota1;

    cout << "Informe a nota 2: ";
    cin >> nota2;

    //Cauculando a média
    media = (nota1 + nota2) / 2;

    //informando ao usuário
    cout << "A media do aluno eh :" << media << endl;

    system("pause");

    return 0;
}
