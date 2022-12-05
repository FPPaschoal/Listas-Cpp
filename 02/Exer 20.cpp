#include <iostream>

using namespace std;

int main(){

    int Dia1, Dia2, Mes1, Mes2, Ano1, Ano2, SomaDias1 = 0, SomaDias2 = 0, DiferencaDias;

    cout << "Informe o dia da Primeira data" << endl;
    cin >> Dia1;
    
    cout << "Informe o mes da Primeira data" << endl;
    cin >> Mes1;
    
    cout << "Informe o ano da Primeira data" << endl;
    cin >> Ano1;
    
    cout << "Informe o dia da Segunda data" << endl;
    cin >> Dia2;
    
    cout << "Informe o mes da Segunda data" << endl;
    cin >> Mes2;
    
    cout << "Informe o ano da Segunda data" << endl;
    cin >> Ano2;

   SomaDias1 += Dia1 - 1;

   if (Mes1 > 1){
    SomaDias1 += 31;   
   }if (Mes1 >2 && (Ano1 % 4) == 0){
    SomaDias1 += 29;
   }if (Mes1 >2 && (Ano1 % 4) != 0){
    SomaDias1 += 28;
   }if(Mes1 >3){
    SomaDias1 += 31;
   }if(Mes1 >4){
    SomaDias1 += 30;
   }if(Mes1 >5){
    SomaDias1 += 31;
   }if(Mes1 >6){
    SomaDias1 += 30;
   }if(Mes1 >7){
    SomaDias1 += 31;
   }if(Mes1 >8){
    SomaDias1 += 31;
   }if(Mes1 >9){
    SomaDias1 += 30;
   }if(Mes1 >10){
    SomaDias1 += 31;
   }if(Mes1 >11){
    SomaDias1 += 30;
   }if(Mes1 > 12){
    SomaDias1 += 31;}




   SomaDias2 += Dia2 - 1;

   if (Mes2 > 1){
    SomaDias2 += 31;   
   }if (Mes2 >2 && (Ano2 % 4) == 0){
    SomaDias2 += 29;
   }if (Mes2 >2 && (Ano2 % 4) != 0){
    SomaDias2 += 28;
   }if(Mes2 >3){
    SomaDias2 += 31;
   }if(Mes2 >4){
    SomaDias2 += 30;
   }if(Mes2 >5){
    SomaDias2 += 31;
   }if(Mes2 >6){
    SomaDias2 += 30;
   }if(Mes2 >7){
    SomaDias2 += 31;
   }if(Mes2 >8){
    SomaDias2 += 31;
   }if(Mes2 >9){
    SomaDias2 += 30;
   }if(Mes2 >10){
    SomaDias2 += 31;
   }if(Mes2 >11){
    SomaDias2 += 30;
   }if(Mes2 > 12){
    SomaDias2 += 31;}
    

   for (Ano1 = Ano1 - 1; Ano1 > 0; Ano1--){
   
    if((Ano1 % 4) == 0){
        SomaDias1 += 366;
    }else{
        SomaDias1 += 365;
    }
   }
  
   for (Ano2 = Ano2 - 1; Ano2 > 0; Ano2--){
   
    if((Ano2 % 4) == 0){
        SomaDias2 += 366;
    }else{
        SomaDias2 += 365;
    }
   }
   
  DiferencaDias = SomaDias1 - SomaDias2;

  cout << "Diferenca: " << DiferencaDias << endl;


    system("pause");
    return 0;
}