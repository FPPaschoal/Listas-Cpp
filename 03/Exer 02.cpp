#include <iostream>

using namespace std;

int main(){

    int Vetor[7], i;

    for(i = 0; i < 7; i++){

        cout << "Informe o valor do vetor " << i+1 << endl;
        cin >> Vetor[i];
    }

    cout << "\n ------------------" << endl;

    cout << "Multiplos de 2" << endl;

    for(i= 0; i < 7; i++){

        if(Vetor[i] % 2 == 0){
            cout << Vetor[i] << " ";
        }
    }


    cout << "\n ------------------" << endl;

    cout << "Multiplos de 3" << endl;

    for(i= 0; i < 7; i++){

        if(Vetor[i] % 3 == 0){
            cout << Vetor[i] << " ";
        }
    }


    cout << "\n ------------------" << endl;

    cout << "Multiplos de 2 e 3" << endl;

    for(i= 0; i < 7; i++){

        if(Vetor[i] % 2 == 0 && Vetor[i] % 3 == 0){
            cout << Vetor[i] << " ";
        }
    }

    return 0 ;
}