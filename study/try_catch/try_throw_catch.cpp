#include <iostream>

using namespace std;

int main(){
    try
    {
        int n;
        cout << "정수 중 하나를 입력 : ";
        cin >> n;

        if(n >0){
            cout << "throw 1" << endl;
            throw 1;
            cout << "after throw 1" << endl;
        }
        if(n < 0){
            cout << "throw -1" << endl;
            throw -1.0f;
            cout << "after throw -1" << endl;
        }
        if(n == 0){
            cout << "throw Z" << endl;
            throw 'Z';
            cout << "after throw Z" << endl;
        }
    }
    catch(int a)
    {
        cout << "catch" << a << endl;
    }
    catch(float b){
        cout << "catch" << b << endl;
    }
    catch(char c){
        cout << "catch" << c << endl;
    }catch(...){
        cout << "catch all" << endl;
    }

    return 0;
    
}