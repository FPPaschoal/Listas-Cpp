#include <iostream>

using namespace std;

int main(){

    int i, j, Vetor1[10], Vetor2[5], VetorResultante1[10], VetorResultande2[10], SomaVetor2 = 0;


    for(i = 0; i < 10; i++){
        cout << "Informe o valor(inteiro) do primeiro vetor " << i+1 << endl;
        cin >> Vetor1[i];
    }


    for(i = 0; i < 5; i++){
        cout << "Informe o valor(inteiro) do Segundo vetor " << i+1 << endl;
        cin >> Vetor2[i];
    }

    for(i = 0; i < 5; i++){
        SomaVetor2 += Vetor2[i];
    }

    cout << "\n";
    j = 0;
    for(i = 0; i < 10; i++){
        if(Vetor1[i] % 2 == 0){
            VetorResultante1[j] = SomaVetor2 + Vetor1[i];
            cout << VetorResultante1[j] << " ";
            j++;
        }
    }

    cout << "\n";

    for(i = 0; i < 10; i++){
        VetorResultande2[i] = 0;
        if(Vetor1[i] % 2 == 1){
            for(j = 0; j < 5; j++){
                if(Vetor1[i] % Vetor2[j] == 0){
                    VetorResultande2[i] = VetorResultande2[i] + 1;
                }
            }
            cout << VetorResultande2[i] << " ";
        }
    }


    return 0;
}