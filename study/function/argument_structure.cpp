#include <iostream>
#include <string>

using namespace std;

struct Person{
    string name;
    int age;
    int height;
    int weight;
};

void check_age(Person human[], int human_count){

    for(int i =0; i<human_count; i++){
        if(human[i].age >= 25){
            cout << "이름 : " << human[i].name << endl;
            cout << "나이 : " << human[i].age << endl;
            cout << "키 : " << human[i].weight << endl;
            cout << "몸무게 : " << human[i].height << endl;
        }else{
            cout << human[i].name << "님은 25세 이상이 아닙니다." << endl;
        }
    }

}


int main(){

    int n = 0;

    cout << "사람 수를 입력하세요 : ";
    cin >> n;

    Person *human = new Person[n];
    for(int i =0; i < n; i++){
        cout << "이름을 입력하세요 : ";
        cin >> human[i].name;
        cout << "나이를 입력하세요 : ";
        cin >> human[i].age;
        cout << "키를 입력하세요 : ";
        cin >> human[i].height;
        cout << "몸무게를 입력하세요 : ";
        cin >> human[i].weight;
    }
    
    check_age(human, n);

    delete[] human;
    return 0;

}