#include <iostream>

using namespace std;

float PesoIdeal(int A, char S);

int main(){

    char Sexo;
    float Altura, PesoI;


    cout << "Informe o seu sexo [M]asculino  [F]eminino" << endl;
    cin >> Sexo;
    
    cout << "Informe o sua altura (em Metros)" << endl;
    cin >> Altura;

    PesoI = PesoIdeal(Altura,Sexo);

    cout << "Seu peso ideal: " << PesoI << endl;

    system("pause");
    return 0;
}

float PesoIdeal(int A, char S){

    float Peso;

    switch (S){
    case 'M':
        Peso = 72.7 * A - 58;
        
        break;
    case 'm':
        Peso = 72.7 * A - 58;
        
        break;
    case 'F':
        Peso = 61.1 * A - 44.7;
        
        break;
    case 'f':
        Peso = 61.1 * A - 44.7;
        
        break;
    }
    return Peso;

}