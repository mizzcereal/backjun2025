#include <iostream>

using namespace std;

int main(){

    int minguk;
    int manse;

    int minguksum = 0;
    int mansesum = 0;

    for(int i = 0; i <4; i++){
        cin >> minguk;
        minguksum += minguk;
    }
    for(int i = 0; i < 4; i++){
        cin >> manse;
        mansesum += manse;
    }

    cout << max(minguksum, mansesum);

    return 0;
}