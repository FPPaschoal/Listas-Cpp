#include <iostream>

using namespace std;

int main(){

    int idade = 1, contador = 0, soma = 0;
    double media;

   while (idade != 0){
        cout << "Informe a idade do individuo " << contador + 1 << endl;
        cin >> idade;

        if (idade != 0){
            soma = soma + idade;
            contador++;
        }  
    }
    
    media = (double) soma / contador;

    cout << "A media das idades eh: " << media << endl;

    return 0;

}