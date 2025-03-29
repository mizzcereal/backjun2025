#include <iostream>

using namespace std;

int main(){

    int menu[5];

    cin >> menu[0];
    cin >> menu[1];
    cin >> menu[2];
    cin >> menu[3];
    cin >> menu[4];

    int cheap_ham = menu[0];
    int cheap_drink = menu[3];

    for(int i = 0; i < 3; i++){
        if(cheap_ham > menu[i]){
            cheap_ham = menu[i];
        }
    }
    for(int i = 3; i < 5; i++){
        if(cheap_drink > menu[i]){
            cheap_drink = menu[i];
        }
    }

    cout << (cheap_ham + cheap_drink) - 50;

    return 0;

}