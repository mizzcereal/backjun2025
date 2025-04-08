#include <iostream>

using namespace std;

int main(){

    string str;

    cin >> str;

    int length = str.length();

    for(int i = 1; i <= length; i++){
        cout << str[i-1];
        if(i % 10 == 0){
            cout << endl;
        }
    }

    return 0;
}