#include <iostream>

using namespace std;

int main(){

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t, a, b, sum;

    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> a >> b;
        sum = a+b;
        cout << sum << "\n";
    }

    return 0;
}