#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    string sung;
    int pre = 0;

    cin >> n;
    string* entry = new string[n];

    for (int i = 0; i < n; i++) {
        cin >> sung;
        entry[i] = sung[0];
    }

    for (int i = 0; i < n; i++) {
        int count = 0;
        bool print = false;
        for(int j = 0; j < i; j++){
            if(entry[j] == entry[i]){
                print = true;
                break;
            }
        }
        if(print){
            continue;
        }
        for (int k = 0; k < n; k++) {
            if (entry[i] == entry[k]) {
                count++;
            }
        }
        if (count >= 5) {
            cout << entry[i];
            pre++;
        }
    }

    if(pre == 0){
        cout << "PREDAJA";
    }


    delete[] entry;
    return 0;
}
