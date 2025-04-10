#include <iostream>

using namespace std;

int main(){

    int t,c;    
    cin >> t;

    for(int i = 0; i < t; i++){
        int quarter = 0; 
        int dime = 0; 
        int nickel = 0;
        int penny = 0;

        cin >> c;
        for(int j = c; j >=0; j-=25){
            if((c-25)>=0){
                quarter++;
                c-=25;
            }
        }
        for(int k = c; k>=0; k-=10){
            if((k-10)>=0){
                dime++;
                c-=10;
            }
        }
        for(int x = c; x>=0; x-=5){
            if((x-5)>=0){
                nickel++;
                c-=5;
            }
        }
        for(int y = c; y>=0; y-=1){
            if((y-1)>=00){
                penny++;
                c-=1;
            }
        }
        cout << quarter << " " << dime << " " << nickel << " " << penny << endl;
    }
}

