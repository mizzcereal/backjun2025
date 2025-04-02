#include <iostream>
#include <string>

using namespace std;

int main(void) {
    
    string s;
    int apb[26] = {0};
    
    cin >> s;
    
    for(int i=0; i<s.length(); i++){
        apb[s[i] - 'a']++;
    }
    
    for(int i=0; i<26; i++){
        cout << apb[i] << " ";
    }
}