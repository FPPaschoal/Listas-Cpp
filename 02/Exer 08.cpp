#include <iostream>

using namespace std;

int main(){

    int NumeroPessoas, Sexo, QuantidadeMulheres = 0, QuantidadeHomens = 0, Resposta, RespostaSim = 0, RespostaNao = 0;
    double PorcentagemMulheres = 0, PorcentagemHomens = 0;

    cout << "Informe a quantidade de pessoas entrevistadas" << endl;
    cin >> NumeroPessoas;

    for (int i = 1; i <= NumeroPessoas; i++){

        cout << "Informe o Sexo da pessoa " << i << " [1]Masculino [2]Feminino" << endl;
        cin >> Sexo;

        if(Sexo == 1){
            QuantidadeHomens++;
        }else{QuantidadeMulheres++;}
        
        cout << "Informe a resposta do entrevistado " << i << " [1]Sim [2]Nao" << endl;
        cin >> Resposta;

        if(Resposta == 1){
            RespostaSim++;
        }else{RespostaNao++;}
    }
    
    PorcentagemHomens = (double)(QuantidadeHomens * 100) / NumeroPessoas;
    PorcentagemMulheres = (double)(QuantidadeMulheres * 100) / NumeroPessoas;

    cout << "Sim: " << RespostaSim << endl;
    cout << "Nao: " << RespostaNao << endl;
    cout << "Porcentagem de homens: " << PorcentagemHomens << "%" << endl;
    cout << "Porcentagem de Mulheres: " << PorcentagemMulheres << "%" << endl;
    
    system("pause");
    return 0;
}