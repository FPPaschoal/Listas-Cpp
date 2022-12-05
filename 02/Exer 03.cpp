#include <iostream>

using namespace std;

int main(){
    
    double Celsius, Fahrenheit;

    for (Fahrenheit = 50; Fahrenheit <= 150; Fahrenheit++){

        Celsius = (5 * (Fahrenheit - 32)) / 9;

        cout << Fahrenheit << " Graus Fahrenheit equivale a " << Celsius << " Graus Celsius" << endl;    
    } 

    system("pause");
    return 0;

}