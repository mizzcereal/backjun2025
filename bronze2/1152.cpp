#include <iostream>
#include <string>

using namespace std;

int main(){

    string eng;
    int count = 1;

    getline(cin, eng);

    for(int i =0; i < eng.length(); i++){
        if(eng[i] == ' '){
            count++;
        }
    }
    if(eng[eng.length()-1] == ' '){
        count -= 1;
    }
    if(eng[0] == ' '){
        count -= 1;
    }

    cout << count;
}

    
