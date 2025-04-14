#include <iostream>
#include <cmath>

using namespace std;

 int main(){

    int n;
    int pow_count = 0;

    cin >> n;

    for(int i = 1; i <= 30; i++){
        if(n == 1){
            pow_count++;
            break;
        }
        if(pow(2,i) == n){
            pow_count++;
            break;
        }
    }

    cout << pow_count << endl;
 }