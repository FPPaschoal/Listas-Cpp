#include <iostream>

using namespace std;

int SeparaVetor(int X);

int main(){

    int i, VetorX[30], VetorA[30],VetorB[30], ContaA = 0, ContaB = 0;

    for(i = 0; i < 30; i++){
        VetorA[i] = 0;
        VetorB[i] = 0;
    }




    for(i = 0; i < 30; i++){
        if ((i % 2) == 0){
            VetorX[i] = rand() % 10;
        }else{
            VetorX[i] = -1 * (rand() % 10);
        }
    }
    for(i = 0; i < 30; i++){
        cout << VetorX[i] << "//";
    }

    for(i = 0; i < 30; i++){
        if(SeparaVetor(VetorX[i])){
            VetorA[ContaA] = VetorX[i];
            ContaA++;
        }else{
            VetorB[ContaB] = VetorX[i];
            ContaB++;
        }
    }
    cout <<"\n\n";

    for(i = 0; i < ContaA; i++){
        cout << VetorA[i] << "//";
    }
    cout <<"\n\n";
    for(i = 0; i < ContaB; i++){
        cout << VetorB[i] << "//";
    }

     cout <<"\n\n";

    system("pause");
    return 0;
}

int SeparaVetor(int X){

    int Resp;

    if(X > 0){
        Resp = 1;
    }else{
        Resp = 0;
    }
    return Resp;
}