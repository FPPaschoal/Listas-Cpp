#include <iostream>

using namespace std;

int main(){

    int i, VetorA[10], VetorB[10];

    for(i = 0; i < 10; i++){

        VetorB[i] = 0;        
        cout << "Digite o valor " << i+1 << " do vetor A" << endl;
        cin >> VetorA[i];
        
        if (VetorA[i] > 0){
            VetorB[i] = VetorA[i];
        }
    }
    
    cout << "Vetor B: ";
    for (i = 0; i < 10; i++){
        if (VetorB[i] > 0){
            cout << VetorB[i] << " ";
        }
    }

    return 0 ;
}