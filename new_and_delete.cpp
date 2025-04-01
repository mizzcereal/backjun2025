#include <iostream>

using namespace std;

int main(){

    int *pt_iv = new int;
    int *pt_iav = new int[5];

    *pt_iv = 100;
    cout << *pt_iv << endl;

    for(int i = 0; i < 5; i++){
        pt_iav[i] = i;
        cout << pt_iav[i] << endl;
    }

    delete pt_iv;
    
    delete[] pt_iav;

    return 0;
}