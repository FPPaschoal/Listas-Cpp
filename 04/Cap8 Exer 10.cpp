// Nao consegui deixar em double!


#include <iostream>

using namespace std;

double SubRotina(float A);

int main(){

    double Resultado, Parcelas = -1;

    while (Parcelas <= 0){
      cout << "informe a quantidade de parcelas " << endl;
    cin >> Parcelas;
    }
    
    Resultado = (double)SubRotina(Parcelas);

    cout << "Resultado: " << (double)Resultado << endl;


    system("pause");
    return 0;
}

double SubRotina(float A){

    int i = 1;
    double Soma = 0;


    for (i = 1; i <= A; i++){

        Soma += 1 / i; 
        cout << i << endl;
    }

    return (double)Soma;

}