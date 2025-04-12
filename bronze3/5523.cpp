#include <iostream>

using namespace std;



int main(){

    int n, a, b;
    int a_count = 0;
    int b_count = 0;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        if(a > b){
            a_count++;
        }else if(a < b){
            b_count++;
        }else{
            continue;
        }
    }

    cout << a_count << " " << b_count << endl;
}