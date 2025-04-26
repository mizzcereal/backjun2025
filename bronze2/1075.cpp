#include <iostream>
#include <string>

using namespace std;

int main(){

    int n, f;
    string s;

    cin >> n;
    cin >> f;

    s = to_string(n);
    for(int i = 2; i > 0; i--){
        s[s.length() - i] = '0';
    }
    n = stoi(s);

    while(1){
        if(n % f == 0){
            break;
        }else{
            n++;
        }
    }

    s = to_string(n);
    for(int i = 2; i > 0; i--){
        cout << s[s.length() - i];
    }
    n = stoi(s);

    return 0;
}