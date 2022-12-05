#include <iostream>

using namespace std;

int main (){

    int i, j;
    float Matriz[7][10], SomaDiagonalP = 0;

    for(j = 0; j < 10; j++){
            for (i = 0; i < 5; i++){
                Matriz[6][j] =  0 ;
            }
        }

    for ( i = 0; i < 6; i++){
        for ( j = 0; j < 10; j++){
            Matriz[i][j] =  rand() % 10;
        }
    }

    //Soma DOS ELEMENTOS DA COLUNA 2
        for(j = 0; j < 10; j++){
            for (i = 0; i < 6; i++){
                Matriz[6][j] +=  Matriz[i][j] ;
            }
        }



    for ( i = 0; i < 7; i++){
        for (j = 0; j < 10; j++){
            cout << Matriz[i][j] << "-";
        }
        cout <<"\n";
    }
    cout << "\n---------------------------------" << endl;

    system("pause");
    return 0;
}