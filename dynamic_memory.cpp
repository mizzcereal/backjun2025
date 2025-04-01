#include <iostream>
#include <string>

using namespace std;

int main(){

    int customer;

    cout << "坷疵 规巩 颊丛 : ";
    cin >> customer;

    string *bread = new string[customer];

    for(int i = 0; i<customer; i++){
        bread[i] = "户_" + to_string(i);
    }
    cout << "--积惑等 户--" <<endl;
    for(int i = 0; i< customer; i++){
        cout << bread[i] << endl;
    }

    delete[] bread;

}