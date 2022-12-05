#include <iostream>

using namespace std;

int main(){

    double LucroStandard, LucroLuxo, LucroTotalStandard, LucroTotalLuxo, LucroTotal, MaiorLucro;
    int OperariosStandard, OperariosLuxo, OperariosTotal, MaiorOperariosLuxo, MaiorOperariosStandard;

    cout << "Digite o valor do lucro da Standard" << endl;
    cin >> LucroStandard;

    cout << "Digite o valor do lucro da luxo" << endl;
    cin >> LucroLuxo;

    OperariosTotal = 40;
    OperariosStandard = 24;
    OperariosLuxo = OperariosTotal - OperariosStandard;

    cout << "Standard  Luxo  Total"<< endl;
    for(OperariosLuxo = OperariosTotal - OperariosStandard; OperariosLuxo <= 32; OperariosLuxo += 2){


        LucroTotalStandard = LucroStandard * OperariosStandard;
        LucroTotalLuxo = LucroLuxo * (OperariosLuxo / 2);
    
        LucroTotal = LucroTotalStandard + LucroTotalLuxo;

        if(MaiorLucro < LucroTotal){
            MaiorLucro = LucroTotal; 
            MaiorOperariosLuxo = OperariosLuxo;
            MaiorOperariosStandard = OperariosStandard;
            }

        OperariosStandard = OperariosStandard - 2 ;

    }

    cout << "\nMaior Lucro: " << MaiorLucro << endl;
    cout << "Numero de Operarios Standard: " << MaiorOperariosStandard << endl;
    cout << "Numero de Operarios Luxo: " << MaiorOperariosLuxo << endl;


    system("pause");
    return 0;
}