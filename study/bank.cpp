#include <iostream>

using namespace std;

class bank{
    private:
        int safe;

    public:
        bank();
        void use_counter(int _in, int _out);
};

bank::bank(){
    safe = 1000;
    cout << "���ʱݰ� : " << safe << endl;
}

void bank::use_counter(int _in, int _out){
    safe += _in;
    safe -= _out;

    cout << "�Ա� : " << _in << endl;
    cout << "��� : " << _out << endl;
    cout << "�ݰ� : " << safe << endl;
}


int main(){
    bank my_bank;

    my_bank.use_counter(0, 20);
    my_bank.use_counter(50,0);
    my_bank.use_counter(100,50);

    return 0;
}