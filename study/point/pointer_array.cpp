#include <iostream>

using namespace std;

int main(){

    int lotto[5]= {1,4,5,10,24};

    cout << *lotto << endl;
    cout << *(lotto+2) << endl;
    cout << lotto[0] << endl;

    cout << "-------------" << endl;
    cout << "lotto[0] Address : " << &lotto[0] << endl;
    cout << "lotto address : " << lotto << endl;
}