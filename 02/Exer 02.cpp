#include <iostream>
#include <cctype>

using namespace std;

int main(){

    double Altura, AlturaMaior, AlturaMenor, MediaAlturas, SomaAlturas, Homens = 0;
    char Genero;
    int TamanhoGrupo, contador;

    cout << "Qual o tamanho do grupo? " << endl;
    cin >> TamanhoGrupo;

    for (contador = 1; contador <= TamanhoGrupo; contador++){
        cout << "Informe o Genero da pessoa " << contador << " [M]asculino / [F]eminino" << endl;
        cin >> Genero;

        Genero = toupper(Genero);

        cout << "Informe a altura da pessoa " << contador << endl;
        cin >> Altura;

        if(contador == 1){
            AlturaMaior = Altura;
            AlturaMenor = Altura;
        }

        if(AlturaMaior < Altura ){
            AlturaMaior = Altura;
        }

        if(AlturaMenor > Altura ){
            AlturaMenor = Altura;
        }

        SomaAlturas += Altura;

        if (Genero == 'M'){
            Homens++;
        }
    }
    
    MediaAlturas = SomaAlturas / (contador - 1);

    cout << "A media das Alturas eh: " << MediaAlturas << "\n A Maior Altura eh: " << AlturaMaior << "\n A Menor Altura eh: " << AlturaMenor << "\n Quantidade de Homens: " << Homens << endl;

    system("pause");

    return 0;

}