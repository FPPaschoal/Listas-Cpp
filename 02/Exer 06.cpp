#include <iostream>

using namespace std;

int main(){

    float MassaInicial, MassaEsperada = 0.5, MassaFinal;
    int TempoSeg = 0, TempoMin = 0, TempoH = 0;

    cout << "Informe a Massa Inicial em grama" << endl;
    cin >> MassaInicial;

    MassaFinal = MassaInicial;

    while(MassaFinal >= MassaEsperada){

        TempoSeg += 50;
        MassaFinal = MassaFinal / 2;
    }

    while (TempoSeg >= 60){   

        if (TempoSeg >= 60){

            TempoSeg -= 60;
            TempoMin += 1;
        }       
        if (TempoMin >= 60){

            TempoMin -= 60;
            TempoH += 1;
        }
    }

    cout << "Demorou " << TempoH << "H " << TempoMin << "M " << TempoSeg << "S" << endl;

    return 0;

}