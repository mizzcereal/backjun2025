#include <iostream>

using namespace std;

void swap(int &ref_a, int &ref_b){

    cout << "[swap func] before swap, ref_a : " << ref_a << " ref_ b : " << ref_b << endl;

    int temp = ref_a;
    ref_a = ref_b;
    ref_b = temp;

    cout << "[swap func] after swap, ref_a : " << ref_a << " ref_ b : " << ref_b << endl;

}

int main(){

    int a, b;
    a = 5;
    b = 10;

    cout << "[main] before swap, a : " << a << " b : " << b << endl;

    swap(a,b);

    cout << "[main] after swap, a : " << a << " b : " << b << endl;


    return 0;

}