#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double Soma = 0;

    for (int i = 0; i <= 49; i++){
        
      Soma += pow(2, i + 1) / (50 - i) ;
    }
    
    cout << "Somatorio = " << Soma << endl;


    system("pause");
    return 0;

}