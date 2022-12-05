#include <iostream>

using namespace std;

int main (){

    int i, j;
    float Matriz[10][10], SomaDiagonalP = 0;

    for ( i = 0; i < 10; i++){
        for ( j = 0; j < 10; j++){
            Matriz[i][j] =  rand() % 10;
        }
    }

    for ( i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            cout << Matriz[i][j] << "-";
        }
        cout <<"\n";
    }
    cout << "\n---------------------------------" << endl;

    //SOMA DOS ELEMENTOS DA DIAGONAL PRINCIPAL
    j = 0;
        for(i = 0; i < 10; i++){
            SomaDiagonalP += Matriz[i][j];
            j++;
        }
        cout <<"\nMedia da diagonal principal\n" << SomaDiagonalP / j << endl;
        cout << "\n---------------------------------" << endl;



    system("pause");
    return 0;
}