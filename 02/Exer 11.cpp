#include <iostream>

using namespace std;

int main(){

    int CodigoCurso = 1, NumeroVagas = 0, NumeroMasculino = 0, NumeroFeminino = 0, SomaCandidatos = 0, CodigoCursoMaiorNumeroCandidatoVaga = 0, TotalCandidatos = 0, Contador = 1;

    double CandidatoPorVaga = 0, MaiorNumeroCandidatoVaga = 0, PorcentagemFeminino = 0;


    while (CodigoCurso != 0){
        
        cout << "informe o codigo do curso " << Contador << endl;
        cin >> CodigoCurso;

            if (CodigoCurso != 0){

               cout << "informe o numero de vagas do curso " << Contador << endl;
               cin >> NumeroVagas;

               cout << "informe o numero de candidatos do sexo Masculino" << endl;
               cin >> NumeroMasculino;
               
               cout << "informe o numero de candidatos do sexo Feminino" << endl;
               cin >> NumeroFeminino;

                SomaCandidatos = NumeroFeminino + NumeroMasculino;
            
               TotalCandidatos = TotalCandidatos + SomaCandidatos;

               CandidatoPorVaga = (double) SomaCandidatos / NumeroVagas;

               if (Contador == 1){
                MaiorNumeroCandidatoVaga = CandidatoPorVaga;
                CodigoCursoMaiorNumeroCandidatoVaga = CodigoCurso;
               }
               
               if (CandidatoPorVaga > MaiorNumeroCandidatoVaga){
                MaiorNumeroCandidatoVaga = CandidatoPorVaga;
                CodigoCursoMaiorNumeroCandidatoVaga = CodigoCurso;
               }

                PorcentagemFeminino = (NumeroFeminino * 100) / SomaCandidatos;

                cout << "Curso: " << CodigoCurso << "\n Candidatos por vaga: " << CandidatoPorVaga << "\n Porcentagem do sexo feminino: " << PorcentagemFeminino << "%" << endl; 

            }
        Contador++;
    }
    
    cout << "O curso : " << CodigoCursoMaiorNumeroCandidatoVaga << " possui o maior numero de candidatos por vaga, sendo: " << MaiorNumeroCandidatoVaga << endl;
    
    cout << "O total de candidatos eh: " << TotalCandidatos << endl;

    system("pause");
    return 0;
}