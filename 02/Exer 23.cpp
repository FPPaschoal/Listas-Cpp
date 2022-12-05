#include <iostream>

using namespace std;

int main(){

    int Soma = 0;

    for (int i = 38; i >= 2; i--){
        
        Soma += (i * (i-1)) / (39-i);
    }
    
    cout << Soma <<endl;
    system ("pause");
    return 0;
}