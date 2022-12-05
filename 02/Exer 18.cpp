#include <iostream>

using namespace std;

int main(){

    double TempoIdeal1, TempoIdeal2, TempoIdeal3, NumeroInscricao, Tempo1, Tempo2, Tempo3, Diferenca1, Diferenca2, Diferenca3, Pontos1, Pontos2, Pontos3, PontosTotal, MaiorPontos, InscriacaoVencedora;

    cout << "Informe o tempo padrao 1" << endl;
    cin >> TempoIdeal1;
    
    cout << "Informe o tempo padrao 2" << endl;
    cin >> TempoIdeal2;
    
    cout << "Informe o tempo padrao 3" << endl;
    cin >> TempoIdeal3;

    while (NumeroInscricao != 9999){

        cout << "Informe o numero de inscricao" << endl;
        cin >> NumeroInscricao;
        if(NumeroInscricao != 9999){

            cout << "Informe o tempo 1" << endl;
            cin >> Tempo1;
    
            cout << "Informe o tempo 2" << endl;
            cin >> Tempo2;
    
            cout << "Informe o tempo 3" << endl;
            cin >> Tempo3;

            Diferenca1 = TempoIdeal1 - Tempo1;
            Diferenca2 = TempoIdeal2 - Tempo2;
            Diferenca3 = TempoIdeal3 - Tempo3;

            if (Diferenca1 < 3){
                Pontos1 = 100;
            }else if(Diferenca1 >= 3 || Diferenca1 <=5 ){
                Pontos1 = 80;
            }else if(Diferenca1 > 5){
                Pontos1 = 80 - ((Diferenca1 - 5)/ 5);
            }

            if (Diferenca2 < 3){
                Pontos2 = 100;
            }else if(Diferenca2 >= 3 || Diferenca2 <=5 ){
                Pontos2 = 80;
            }else if(Diferenca2 > 5){
                Pontos2 = 80 - ((Diferenca2 - 5)/ 5);
            }

            if (Diferenca3 < 3){
                Pontos3 = 100;
            }else if(Diferenca3 >= 3 || Diferenca3 <=5 ){
                Pontos3 = 80;
            }else if(Diferenca3 > 5){
                Pontos3 = 80 - ((Diferenca3 - 5)/ 5);
            }
            
            PontosTotal = Pontos1 + Pontos2 + Pontos3;

            if(MaiorPontos < PontosTotal){
                MaiorPontos = PontosTotal;
                InscriacaoVencedora = NumeroInscricao;
            }

            cout << "\nInscricao: " << NumeroInscricao << endl;
            cout << "Pontos na etapa 1: " << Pontos1 << endl;
            cout << "Pontos na etapa 2: " << Pontos2 << endl;
            cout << "Pontos na etapa 3: " << Pontos3 << endl;
            cout << "Pontos Totais: " << PontosTotal << endl;
        }
    }

    cout << "\nEquipe Vencedora: " << InscriacaoVencedora << endl;
    cout << "Pontos Totais: " << MaiorPontos << endl;
    
    system("pause");
    return 0;
}

