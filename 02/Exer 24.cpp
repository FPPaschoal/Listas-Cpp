#include <iostream>

using namespace std;

int main(){

    double S = 0, termo;

    for(int i = 1; i <=10; i++){

        termo = (double) i / (i * i);
        if (i % 2 == 0){
            termo *= -1;
        }
        S += termo;        
    }

    cout << "S = " << S << endl;

    system("pause");
    return 0;

}