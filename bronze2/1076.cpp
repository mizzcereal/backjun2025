#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){

    string color[10] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};
    string input;
    long long o[3];

    for(int i = 0; i <3; i++){
        cin >> input;
        for(int j = 0; j <10; j++){
            if(color[j] == input){
                o[i] = j;
            }
        }
    }
    o[2] = pow(10,o[2]);

    cout << (o[0]*o[2]*10) + (o[1]* o[2]);

    return 0;
}