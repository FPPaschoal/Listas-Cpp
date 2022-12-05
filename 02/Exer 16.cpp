#include <iostream>

using namespace std;

int main(){

    double NumeroInscricao = 1, idade, Sexo, Experiencia, Contador = 1, CandidatosFeminino = 0, CandidatosMasculinos = 0, Homens45 = 0, MulheresExperiencia35 = 0, MenorIdadeMulher, idadeMediaHomens45, idadeHomens45 = 0 ;

    while (NumeroInscricao != 0){

        cout << "\nInforme o numero de inscricao do candidato " << Contador << endl;
        cin >> NumeroInscricao;

        if(NumeroInscricao != 0){
        cout << "Informe a idade do candidato " << NumeroInscricao << endl;
        cin >> idade;
        
        cout << "Informe o sexo do candidato " << NumeroInscricao  << " [1]Masculino [2]Feminino" << endl;
        cin >> Sexo;
        if(Sexo == 1){
            CandidatosMasculinos++;
        }else{
            CandidatosFeminino++;
        }

        cout << "Informe a experiencia do candidato " << NumeroInscricao  << " [1]Sim [2]Nao" << endl;
        cin >> Experiencia;


        if(idade > 45 && Sexo == 1){Homens45++;idadeHomens45 += idade;}
        
        if(Sexo == 2 && idade < 35 && Experiencia == 1){MulheresExperiencia35++;}
        
        if (Sexo == 2 && CandidatosFeminino == 1){MenorIdadeMulher = idade;}
        
        if(Sexo == 2 && MenorIdadeMulher > idade){MenorIdadeMulher = idade;}
        Contador++;
        }
    }

    idadeMediaHomens45 = idadeHomens45 / Homens45;

    cout << "\nCandidatos do sexo Masculino: " << CandidatosMasculinos << endl;
    cout << "Candidatos do sexo Feminino: " << CandidatosFeminino << endl;
    cout << "Idade Media dos homens com mais de 45 anos: " << idadeMediaHomens45 << endl;
    cout << "Mulheres com idade inferior a 35 e com experiencia: " << MulheresExperiencia35 << endl;
    cout << "Menor idade entre mulheres com experiencia: " << MenorIdadeMulher << endl;

    system ("pause");
    return 0;

}