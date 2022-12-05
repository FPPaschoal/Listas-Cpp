#include <iostream>

using namespace std;

int main(){
    int t = 1;
    double Soma;

    for (int i = 1; i <=99; i = i + 2){
        
        Soma += (double) i/t;

        cout << i <<endl;
        cout << t <<endl;
        cout << "-------" <<endl;
         t++;
    }
    
    cout << Soma << endl;
    
    system("pause");
    return 0;
}