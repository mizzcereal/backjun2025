#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){

    int t;

    cin >> t;

    for(int i = 0; i <t; i++){
        int a = 0;
        int b = 0;

        cin >> a >> b;
        int tmp = a;
        for(int j = 1; j < b; j++){
            a = (a *tmp)%10;
        }
        if(a % 10 == 0){
            cout << 10;
        }else{
            cout << a % 10;
        }
    }

}