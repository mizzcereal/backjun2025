#include <iostream>

using namespace std;

int main(){
    int a, n;
    int count = 0;

    cin >> a;

    for(int i = 0; i < a; i++){
        cin >> n;
        if(n == 1){
            continue;
        }

        bool result = true;
        for(int j = 2; j < n; j++){
            if(n % j == 0){
                result = false;
            }
        }
        if(result){
            count++;
        }
    }

    cout << count;
}