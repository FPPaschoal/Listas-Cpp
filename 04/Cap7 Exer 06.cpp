#include <iostream>

using namespace std;

int main(){

    int i,j, Matriz[20][10], SomaColuna[10];
    string Msg;

    for (j = 0; j < 10; j++){
        SomaColuna[j] = 0;
    }

    for ( i = 0; i < 20; i++){
        for ( j = 0; j < 10; j++){
            Matriz[i][j] =  rand() % 10;
        }
    }
    for ( i = 0; i < 20; i++){
        for (j = 0; j < 10; j++){
            cout << Matriz[i][j] << "-";
        }
        cout <<"\n";
    }
    cout << "\n---------------------------------" << endl;
    
     for ( i = 0; i < 20; i++){
        for ( j = 0; j < 10; j++){
            SomaColuna[j] += Matriz[i][j];
        }
    }

    for (j = 0; j < 10; j++){
        cout << SomaColuna[j] << "-";
    }
    cout << "\n---------------------------------" << endl;
        
     for ( i = 0; i < 20; i++){
        for ( j = 0; j < 10; j++){
            Matriz[i][j] = Matriz[i][j] * SomaColuna[j] ; 
        }
    }

     for ( i = 0; i < 20; i++){
        for (j = 0; j < 10; j++){
            cout << Matriz[i][j] << " - ";
        }
        cout <<"\n";
    }



    system("pause");
    return 0;
}