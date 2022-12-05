#include <iostream>

using namespace std;

int main(){

    int i,j, Matriz[5][5],SomaGeral = 0, SomaLinha4 = 0, SomaColuna2 = 0, SomaDiagonalPrincipal = 0, SomaDiagonalSecundaria = 0;


    for ( i = 0; i < 5; i++){
        for ( j = 0; j < 5; j++){
            Matriz[i][j] =  rand() % 10;
        }
    }

    for ( i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            cout << Matriz[i][j] << "-";
        }
        cout <<"\n";
    }
    cout << "\n---------------------------------" << endl;

    //SOMA DOS ELEMENTOS DA LINHA 4
        for (j = 0; j < 5; j++){
            SomaLinha4 +=  Matriz[3][j] ;
        }
        cout <<"\nSoma da linha 4\n" << SomaLinha4 << endl;
        cout << "\n---------------------------------" << endl;
    
    //Soma DOS ELEMENTOS DA COLUNA 2
        for (i = 0; i < 5; i++){
            SomaColuna2 +=  Matriz[i][1] ;
        }
        cout <<"\nSoma da linha 4\n" << SomaColuna2 << endl;
        cout << "\n---------------------------------" << endl;

    //SOMA DOS ELEMENTOS DA DIAGONAL PRINCIPAL
        j = 0;
        for(i = 0; i < 5; i++){
            SomaDiagonalPrincipal += Matriz[i][j];
            j++;
        }
        cout <<"\nSoma da linha 4\n" << SomaDiagonalPrincipal << endl;
        cout << "\n---------------------------------" << endl;
    
    
    //SOMA DOS ELEMENTOS DA DIAGONAL SECUNDARIA
        j = 4;
        for(i = 0; i < 5; i++){
            SomaDiagonalSecundaria += Matriz[i][j];
            j--;
        }
        cout <<"\nSoma da linha 4\n" << SomaDiagonalSecundaria << endl;
        cout << "\n---------------------------------" << endl;
    
    
    //SOMA DE TODOS OS ELEMENTOS DA MATRIZ
        for ( i = 0; i < 5; i++){
            for ( j = 0; j < 5; j++){
                SomaGeral += Matriz[i][j];
            }
        }
        cout <<"\nSoma da linha 4\n" << SomaGeral << endl;
        cout << "\n---------------------------------" << endl;

    system("pause");
    return 0 ;
}