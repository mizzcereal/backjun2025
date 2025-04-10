#include<iostream>

using namespace std;

void change_ne(int *a){

    if(*a > 0){
        *a = -(*a);
    }
}


int main(){

    int a, b;

    a=3;
    b=3;

    cout << "a : " << a << endl;
    cout << "b : " << b << endl;

    change_ne(&a);
    change_ne(&b);

    cout << "cha : " << a << endl;
    cout << "chb : " << b << endl;

}