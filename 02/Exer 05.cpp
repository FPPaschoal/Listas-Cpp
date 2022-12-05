#include <iostream>

using namespace std;

int main(){

    float HabitantesA = 9000000, HabitantesB = 20000000;
    int Anos = 0;

    while (HabitantesA <= HabitantesB){
        
        HabitantesA = HabitantesA * 1.03;
        HabitantesB = HabitantesB * 1.015;

        Anos = Anos + 1;
    }
    

    cout << "Ira demorar " << Anos << " anos" << endl;
    cout << HabitantesA << endl;
    cout << HabitantesB << endl;

    return 0;

}