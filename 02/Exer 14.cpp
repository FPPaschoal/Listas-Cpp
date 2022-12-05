#include <iostream>

using namespace std;

int main(){

    double CidadeA = 1, CidadeB = 0, DistanciaCidades, TempoH, TemposMaior2 = 0;
    

    while (CidadeA != CidadeB){
        cout << "informe o KM da primeira cidade" << endl;
        cin >> CidadeA;
        
        cout << "informe o KM da segunda cidade" << endl;
        cin >> CidadeB;
   
        DistanciaCidades = CidadeA - CidadeB;

        for(int V = 20; V <=80; V = V + 10){

            TempoH = DistanciaCidades / V;

            if (TempoH >= 2){
                cout << "Na distancia de " << DistanciaCidades << "Km demora " << TempoH << "H em " << V << "Km/h" << endl;
            }
        }
    }

    system("pause");
    return 0;
}