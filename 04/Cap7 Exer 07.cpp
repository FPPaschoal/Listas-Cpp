#include <iostream>

using namespace std;

int main(){

    int i,j, M[4][6], N[6][4], Soma = 0;

    for ( i = 0; i < 4; i++){
        for ( j = 0; j < 6; j++){
            M[i][j] =  rand() % 10;
        }
    }
    for ( i = 0; i < 4; i++){
        for (j = 0; j < 6; j++){
            cout << M[i][j] << "-";
        }
        cout <<"\n";
    }
    cout << "\n---------------------------------" << endl;
    for ( i = 0; i < 6; i++){
        for ( j = 0; j < 4; j++){
            N[i][j] =  rand() % 10;
        }
    }
    for ( i = 0; i < 6; i++){
        for (j = 0; j < 4; j++){
            cout << N[i][j] << "-";
        }
        cout <<"\n";
    }
    cout << "\n---------------------------------" << endl;

    for (i = 0; i < 4; i++){    
        Soma += M[i][0];
    }
    for (i = 0; i < 4; i++){    
        Soma += N[0][i];
    }
    cout << Soma << endl;
    cout << "\n---------------------------------" << endl;

    system("pause");
    return 0;
}