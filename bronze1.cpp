#include <iostream>

using namespace std;

int main(){

    int a, n, result;

    cin >> n;
    cin >> a;

    for(int i = 0; i < n; i++){
        result += a%10;
        a /= 10;
    }

    cout << result;

    return 0;
}