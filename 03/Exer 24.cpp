#include <iostream>

using namespace std;

int main(){

    int i, VetorA[5], VetorPrimo[5], ContadorPrimos = 0;

    for(i = 0; i < 5; i++){
        VetorPrimo[i] = -1;
        ContadorPrimos = 0;

        cout << "Digite o valor " << i+1 << endl;
        cin >> VetorA[i];
        
        for(int a = 1; a < VetorA[i]; a++){
            
            if(VetorA[i] % a == 0){
                ContadorPrimos++;
            }
        }
        if(ContadorPrimos <= 2){
                VetorPrimo[i] = VetorA[i];
            }
    }

    cout << "\nNumeros primos digitados: ";

    for(i = 0; i < 5; i++){
        if(VetorPrimo[i] != -1){
            cout << VetorPrimo[i] << " ";
        }
    }
    
    return 0;
}