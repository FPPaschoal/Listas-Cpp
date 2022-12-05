#include <iostream>

using namespace std;

int SomaDivisor(int A);

int main(){

    int Num, Resultado;

    cout << "Informe o numero inteiro" << endl;
    cin >> Num;

    Resultado = SomaDivisor(Num);

    cout << "Soma dos divisores: " << Resultado << endl;

    system("pause");
    return 0;
}

int SomaDivisor(int A){

    int i, SomaDivisores = 0;

    for ( i = 1; i <= A; i++){
        if((A % i) == 0){
            SomaDivisores += i;
            cout << i << " eh divisor de " << A << endl;
        }
    }

    return SomaDivisores;

}