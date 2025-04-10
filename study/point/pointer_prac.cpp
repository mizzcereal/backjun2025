#include <iostream>

using namespace std;

int main(){

    char cv = 'a';
    int iv = 123;
    double dv = 123.456;

    char *cpv = &cv;
    int *ipv = &iv;
    double *dpv = &dv;

    cout << *cpv; //

    return 0;
}