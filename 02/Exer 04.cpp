#include <iostream>

using namespace std;

int main(){
  string nome;
  float preco_compra, preco_venda, tot_compra = 0, tot_venda = 0;
  float lucro_total = 0, lucro = 0;
  int lucro10 = 0, lucro1020 = 0, lucro20 = 0;

  cout << "Nome do produto (digite Sair para Encerrar): ";
  cin >> nome;

  while(nome != "Sair") {
    cout << "Preco de compra e preco de venda: ";
    cin >> preco_compra >> preco_venda;

    lucro = preco_venda - preco_compra;

    if(lucro/preco_venda < 0.1)
      lucro10++;
    else if(lucro/preco_venda < 0.2)
      lucro1020++;
    else 
      lucro20++;
  
    tot_compra += preco_compra;
    tot_venda += preco_venda;
    lucro_total += lucro;

    cout << "Nome do produto (digite Sair para Encerrar): ";
    cin >> nome;
  }

  cout << lucro10 << " produtos possuem lucro < 10%.\n";
  cout << lucro1020 << " produtos possuem lucro entre 10% e 20%.\n";
  cout << lucro20 << " produtos possuem lucro > 20%.\n";
  cout << "Total de compras: " << tot_compra << endl;
  cout << "Total de vendas: " << tot_venda << endl;
  cout << "Lucro total: " << lucro_total << endl;

  return 0;
}