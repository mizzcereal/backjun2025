#include <iostream>

using namespace std;

int main(){

    string fbi[5];
    int fbi_count = 0;

    for(int i = 0; i < 5; i++){
        cin >> fbi[i];
        if(fbi[i].find("FBI") != -1){  
            fbi_count++;
        }
    }
    if(fbi_count == 0){
        cout << "HE GOT AWAY!";
    }else{
        cout << fbi_count << endl;
    }
    return 0;
    
}