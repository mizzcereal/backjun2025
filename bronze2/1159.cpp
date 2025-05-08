#include <iostream>
#include <string>

using namespace std;

int main(){

    int n;
    string sung;

    cin >> n;
    string *entry = new string[n];
    
    for(int i = 0; i < n; i++){
        cin >> sung;
        entry[i] = sung[0];
    }
    
    for(int i = 0; i < n; i++){
        int count = 0;
        for(int j = 1; j <= n; j++){
            if(entry[i] == entry[j]){
                count++;
            }
        }
        if(count >= 5){
            cout << entry[i];
            continue;
        }
    }

    return 0;
}