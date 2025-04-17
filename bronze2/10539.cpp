#include <iostream>

using namespace std;

int main(){

    int a,b,n;
    int sum = 0;

    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> b; //3 //2 
        a = b*i; //3 //4
        cout << a-sum << " "; //3 //1
        sum += (a-sum); //3 //7
    }
    
    return 0;
}