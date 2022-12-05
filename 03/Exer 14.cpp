#include <iostream>

using namespace std;

int main(){

    // Lucas, não entendi os requisitos para um aluno ficar de exame.

    string Alunos[6], Situacao[6];
    float P1[6], P2[6], Media[6], SomaMedias = 0;
    int i, Aprovados = 0, Reprovados = 0;

    for (i = 0; i < 6; i++){
        cout << "\n---------------------" << endl;        
        cout << "Informe o NOME do aluno " << i+1 << endl;
        cin >> Alunos[i];

        cout << "Digite a nota da P1 de " << Alunos[i] << endl;
        cin >> P1[i];

        cout << "Digite a nota da P2 de " << Alunos[i] << endl;
        cin >> P2[i];

        Media[i] = (P1[i] + P2[i]) / 2;
        
        if(Media[i] >= 6){
            Aprovados++;
            Situacao[i] = "Aprovado";
        }else{
            Reprovados++;
            Situacao[i] = "Reprovado";
        }
        SomaMedias += Media[i];

        cout << "Aluno: " << Alunos[i] << endl;
        cout << "1 Prova: " << P1[i] << endl;
        cout << "2 Prova: " << P2[i] << endl;
        cout << "Media: " << Media[i] << endl;
        cout << "Situacao: " << Situacao[i] << endl;
    }
    cout << "\n---------------------" << endl;
    cout << "Media da classe: " << SomaMedias / 6 << endl;
    cout << "Percentual Aprovados: " << (Aprovados * 100) / 6 << "%" << endl;
    cout << "Percentual Reprovados: " << (Reprovados * 100) / 6 << "%" << endl; 

    return 0;
}