#include <iostream>

using namespace std;

int main(){

    int t;

    cin >> t;

    for(int i = 0; i < t; i++){
        int sum = 0;
        int n[7];
        int min_n = 101;
        for(int j = 0; j<7; j++){
            cin >> n[j];
            if(n[j]%2 == 0){
                sum +=n[j];
                if(n[j] < min_n){
                    min_n = n[j];
                }
            }
        }
        cout << sum << " " << min_n << endl;
    }

    return 0;
    
}