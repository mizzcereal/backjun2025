#include <iostream>

using namespace std;

int main(){

    int in, out;
    int train_in_human = 0;
    int max_train_human = 0;

    for(int i = 0; i < 10; i++){
        cin >> out >> in;
        train_in_human += in;
        train_in_human -= out;
        if(max_train_human < train_in_human){
            max_train_human = train_in_human;
        }
    }
    cout << max_train_human;
}