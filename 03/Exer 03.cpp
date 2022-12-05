#include <iostream>

using namespace std;

int main(){

    int i, CodigoProduto[10], Estoque[10], Cliente = 1, Produto, Retirada,VerificaCodigo;

     for(i = 0; i < 10; i++){
        cout<< "informe o CODIGO do produto " << i+1 << endl;
        cin >> CodigoProduto[i];
    }
    for(i = 0; i < 10; i++){
        cout<< "informe o ESTOQUE do produto " << CodigoProduto[i] << endl;
        cin >> Estoque[i];
    }


    while (Cliente != 0){
        
        cout << "Informe o Codigo do CLIENTE" << endl;
        cin >> Cliente;
        if(Cliente != 0){

            cout << "Informe o codigo do PRODUTO" << endl;
            cin >> Produto;

             for(i = 0; i < 10; i++){
                if(Produto == CodigoProduto[i]){
                    VerificaCodigo = 0;
                    Produto = i;
                }
            }


            if(VerificaCodigo){
                cout<< "Produto invalido" << endl;
            }else{
            
                cout << "informe a quantidade de RETIRADA \n Estoque: " << Estoque[Produto] << endl;
                cin >> Retirada;

                if(Retirada > Estoque[Produto]){
                    cout << "Nao temos estoque suficiente dessa mercadoria" << endl;
                }else{
                    Estoque[Produto] = Estoque[Produto] - Retirada;
                    cout << "Pedido atendido. Obrigado e volte sempre"<< endl;
                }
            }
        }
    }
    
    cout << "\n \n ---------------------\n";
         for(i = 0; i < 10; i++){
            cout << "Produto: " << CodigoProduto[i] << " Estoque [" << Estoque[i] << "]" << endl; 
        }

    return 0;
}