#include <iostream>

using namespace std;

int main(){

    int Vetor[6], ContadorPar = 0, ContadorImpar = 0, i;

    for(i = 0; i < 6; i++){

        cout << "Informe o numero do vetor " << i+1 << endl;
        cin >> Vetor[i];

        if(Vetor[i] % 2 == 0){
            ContadorPar++;
        }else{
            ContadorImpar++;
        }
    }
    
    cout << "\n ------------------" << endl;

    cout << "Numeros pares: " << ContadorPar << endl;
    
    for(i = 0; i < 6; i++){

        if(Vetor[i] % 2 == 0){
            cout << Vetor[i] << " ";
        }
    }

    cout << "\n ------------------" << endl;

    cout << "Numeros impares: " << ContadorImpar << endl;  
    
    for(i = 0; i < 6; i++){

        if(Vetor[i] % 2 == 1){
            cout << Vetor[i] << " ";
        }
    }

    return 0 ;
}