#include <iostream>

using namespace std;

int main(){

    int TamanhoTurma, Nota1, Nota2, Nota3, CodigoAluno, Contador = 1, Frequencia, ReprovadosFrequencia = 0, Reprovados = 0;
    double MediaNotas = 0, MediaMaior = 0, MediaMenor = 0, SomaMedias = 0, MediaTurma = 0, PorcentagemReprovadoFrequencia = 0;
    string Situacao; 

    cout << "informe o tamanho da Turma" << endl;
    cin >> TamanhoTurma;

    while (Contador <= TamanhoTurma){
        
        cout << "Informe o codigo do aluno " << Contador << endl;
        cin >> CodigoAluno;
        
        cout << "Informe a Nota 1 do aluno " << CodigoAluno << endl;
        cin >> Nota1;

        cout << "Informe a Nota 2 do aluno " << CodigoAluno << endl;
        cin >> Nota2;
        
        cout << "Informe a Nota 3 do aluno " << CodigoAluno << endl;
        cin >> Nota3;
        
        cout << "Informe a Frequencia do aluno " << CodigoAluno << endl;
        cin >> Frequencia;
        
        MediaNotas = (Nota1 + Nota2 + Nota3) / 3;
        
        if (Contador == 1){
            MediaMaior = MediaNotas;
            MediaMenor = MediaNotas;
        }
        
        if(MediaMaior < MediaNotas){
            MediaMaior = MediaNotas;
        }
        if(MediaMenor > MediaNotas){
            MediaMenor = MediaNotas;
        }

        if(MediaNotas >= 60 && Frequencia >= 40){
            Situacao = "Aprovado";
        }else{
            Situacao = "Reprovado";
            Reprovados++;
        }
        if(Frequencia < 40){
            ReprovadosFrequencia++;
        }

        cout << "\n Matricula: " << CodigoAluno << endl;
        cout << "Frequencia: " << Frequencia << endl;
        cout << "Media Final: " << MediaNotas << endl;
        cout << "Situacao: " << Situacao << endl;


        SomaMedias += MediaNotas;
        Contador++;
    }
    

    MediaTurma = SomaMedias / TamanhoTurma;
    PorcentagemReprovadoFrequencia = (double) (ReprovadosFrequencia * 100) / TamanhoTurma;

    cout << "\n Maior Media: " << MediaMaior << endl;
    cout << "Menor Media: " << MediaMenor << endl;
    cout << "Media da Turma: " << MediaTurma << endl;
    cout << "Reprovados: " << Reprovados << endl;
    cout << "Reprovados por Frequencia: " << PorcentagemReprovadoFrequencia << "%" << endl;


    system("pause");
    return 0;
}