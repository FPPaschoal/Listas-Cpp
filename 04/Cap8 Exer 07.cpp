#include <iostream>

using namespace std;

void Leitor();

int main(){

    Leitor();

    system("pause");
    return 0;
}

void Leitor(){

    int i = 0;
    float Num = 1, SomaNum = 0;

    while (Num != 0){
        
        cout << "Digite o valor " << i+1 << endl;
        cin >> Num;
        if(Num != 0){
            SomaNum += Num;
            i++;
        }
    }
    
    cout << "A media eh: " <<  SomaNum / i << endl; 

}