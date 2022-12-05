#include  <iostream>

using namespace std;

int main (){

    string Alunos[15], Situacao[15];
    float Notas[15][5], Media[15], MediaClasse = 0;
    int i,j;

    for(j = 0; j < 15; j++){
        Media[j] = 0;
    }

    for(i = 0; i < 15; i++){
    cout << "Informe o nome do aluno " << i + 1 << endl;
    cin >> Alunos[i];

        for(j = 0; j < 5; j++){
            cout << "Informe a nota " << j + 1<< " do(a) " << Alunos[i] << endl;
            cin >> Notas[i][j];
            
            Media[i] += Notas[i][j];   
            
            }
            Media[i] = Media[i] / 5;

            if(Media[i] < 6){
                Situacao[i] = "Reprovado";
            }else{
                Situacao[i] = "Aprovado";
            }
    }

    for(i = 0; i < 15; i++){
        cout << Alunos[i] << ": ";
        for(j = 0; j < 5; j++){
            cout << Notas[i][j] << " ";
        }
        cout << "\nMedia: " << Media[i] << " // " << Situacao[i] << endl; 
        cout << "\n--------------\n";
    }

    for(i = 0; i < 15; i++){

        MediaClasse += Media[i] ;
    }
    MediaClasse = MediaClasse / 15;

    cout << "Media da classe: " << MediaClasse << endl;

    system("pause");
    return 0;
}