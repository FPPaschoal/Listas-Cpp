#include <iostream>

using namespace std;

int main(){

    string Alunos[8];
    float AlunoNota[8], MediaNotas, SomasNotas = 0;
    int i;

    for(i = 0; i < 8; i++){
        cout << "Digite o NOME do aluno " << i+1 << endl;
        cin >> Alunos[i];

        cout << "Digite a NOTA de " << Alunos[i] << endl;
        cin >> AlunoNota[i];

        SomasNotas += AlunoNota[i];
    }   

    for(i=0; i< 8; i++){
        cout << Alunos[i] << " " << AlunoNota[i] << endl;
    }

    MediaNotas = SomasNotas / 8;

    cout << "Media da classe: " << MediaNotas << endl;

    return 0;
}