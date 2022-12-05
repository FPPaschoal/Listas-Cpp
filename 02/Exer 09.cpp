#include <iostream>

using namespace std;

int main(){

    int CriancasNascidas, CriancasMortas = 1,CriancasMasculina= 0, NumeroMeses, Menos24 = 0;
    char Sexo = 'A';
    double PorcentagemMasculina, PorcentagemMenor24;


    cout<< "informe o numero de criancas nascidas" << endl;
    cin >> CriancasNascidas;

    while(CriancasMortas <= CriancasNascidas){

        cout << "informe o sexo da crianca morta [M]asculina [F]eminina [V]para sair" << endl;
        cin >> Sexo; 
        if (Sexo != 'V'){
            if (Sexo == 'M'){
                CriancasMasculina++;
            }
            cout << "informe o numero de meses de vida" << endl; ;
            cin >> NumeroMeses;
            if(NumeroMeses <= 24){
                Menos24++;
            }
            CriancasMortas++;
        }else{CriancasMortas = CriancasNascidas + 1;}
        
    }

    PorcentagemMasculina = (double)(CriancasMasculina * 100) / CriancasNascidas;
    PorcentagemMenor24 = (double)(Menos24 * 100) / CriancasNascidas;


    cout <<"A porcentagem de criancas do sexo masculino eh: " << PorcentagemMasculina <<"%" << endl;
    cout << "A porcentagem de criancas que morreram ate 24 meses: " << PorcentagemMenor24 << "%" << endl;


    system("pause");
    return 0; 
}