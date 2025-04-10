#include <iostream>

using namespace std;

int getNewId(){

    static int id = 0;
    id++;

    return id;

}

int main(){

    cout << "ID : " << getNewId() << endl;
    cout << "ID : " << getNewId() << endl;
    cout << "ID : " << getNewId() << endl;
    cout << "ID : " << getNewId() << endl;
    cout << "ID : " << getNewId() << endl;



    return 0;
}