#include <iostream>

using namespace std;

int main(){

    string Produtos[5], Produtos50100[5];
    int i, ProdutosMenor50 = 0, ProdutosMaior100 = 0, PrecoMaior100 = 0;
    float Preco[5], MediaMaior100;

    for (i = 0; i < 5; i++){
        
        Produtos50100[i] = "";

        cout << "\n-----------------------------"<< endl;
        cout << "Digite o NOME do protudo " << i+1 << endl;
        cin >> Produtos[i];
        
        cout << "Digite o Preco " << Produtos[i] << endl;
        cin >> Preco[i];

        if(Preco[i] < 50){
            ProdutosMenor50++;
        }
        if(Preco[i] >=50 && Preco[i] <=100){
            Produtos50100[i] = Produtos[i];
        }
        if(Preco[i] > 100){
            ProdutosMaior100++;
            PrecoMaior100 += Preco[i];
        }
    }
    
    cout << "\nQuantidade de produtos infrerior a R$50: " << ProdutosMenor50 << endl;
    cout << "\nNomes dos produtos com preco entre R$50 e R$100"<< endl;
    for(i = 0; i < 5; i++){
        if(Produtos50100[i] != ""){
            cout << Produtos50100[i] << " ";
        }
    }
    cout << "\n\nMedia dos precos acima de R$100: R$" << PrecoMaior100 / ProdutosMaior100 << endl; 

    return 0;
}