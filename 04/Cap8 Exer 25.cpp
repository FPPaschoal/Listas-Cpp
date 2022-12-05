#include <iostream>

using namespace std;

void MostarMedia(int Aluno);

int Notas[10][4], Alunos[10], Rec[10], QntdRec = 0;


int main(){

    int i, j;

    for(i = 0; i < 10; i++){
        Alunos[i] = rand() % 100;
    }


    for(i = 0; i < 10; i++){
        for(j = 0; j < 4; j++){
            Notas[i][j] = rand() % 11;
        }
    }

    for(i = 0; i < 10; i++){
        MostarMedia(i);
    }

    cout <<"\n\nAlunos de rec: " << endl;

    for(i = 0; i < QntdRec; i++){
        cout << Rec[i] << " ";
    }

    cout <<"\n\n";

    system("pause");
    return 0;
}



void MostarMedia(int Aluno){

    float Media = 0;
    int k;

    for(k = 0; k < 4; k++){
        Media += Notas[Aluno][k];
    }

    Media = Media / 4;

    cout << "O aluno: " << Alunos[Aluno] << " teve media " << Media << endl;

    if(Media < 6){
        Rec[QntdRec] = Alunos[Aluno];
        QntdRec++;
    }

}