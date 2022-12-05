#include <iostream>

using namespace std;

int main(){

    int Turmas, Contador = 1,Contador2 = 1, NumeroTurma, QuantidadeAlunos, Situacao, QuantidadeAusencia;
    int TurmasAusenciaMaior = 0;
    double PorcentagemAusencia = 0;

    cout << "Informe a quantidade de turmas existentes" <<endl;
    cin >> Turmas;

    while (Contador <= Turmas){
        
        cout << "informe o numero da turma para o levantamento" << endl;
        cin >> NumeroTurma;

        cout << "informe a quantidade de alunos da turma " << NumeroTurma << endl;
        cin >> QuantidadeAlunos;
        Contador2 = 1;
        QuantidadeAusencia = 0;

        while (Contador2 <= QuantidadeAlunos){
            
            cout <<" informe a situacao do aluno " << Contador2 << " [1]Presente [2]Ausente" << endl;
            cin >> Situacao;
            if(Situacao == 2){
                QuantidadeAusencia++;
            }
            Contador2++;
        }
        PorcentagemAusencia = (double) (QuantidadeAusencia * 100) / QuantidadeAlunos;

        if (PorcentagemAusencia >= 5){
            TurmasAusenciaMaior++;
        } 
        
        cout << "\n Turma: " << Contador <<endl;
        cout << "Porecentagem de ausencia: " << PorcentagemAusencia << "% \n" << endl;
        Contador++;

    }
    
    cout << "Turmas com mais de 5% de ausencia " << TurmasAusenciaMaior <<endl;

    system("pause");
    return 0;

}