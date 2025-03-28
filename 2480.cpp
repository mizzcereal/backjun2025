#include <iostream>

using namespace std;

void equal3(int a){
    cout << 10000 + (a*1000);
}

void equal2(int a){
    cout << 1000 + (a*100);
}

void equal1(int a){
    cout << (a*100);
}

int main(){

    int x, y, z;

    cin >> x >> y >> z;

    if(x == y && y == z){
        equal3(x);
    }else if(x == y){
        equal2(x);
    }else if(y == z){
        equal2(y);
    }else if(x == z){
        equal2(x);
    }else{
        equal1(max(max(x,y),z));
    }

    return 0;

}


