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
            cout << "�̸� : " << human[i].name << endl;
            cout << "���� : " << human[i].age << endl;
            cout << "Ű : " << human[i].weight << endl;
            cout << "������ : " << human[i].height << endl;
        }else{
            cout << human[i].name << "���� 25�� �̻��� �ƴմϴ�." << endl;
        }
    }

}


int main(){

    int n = 0;

    cout << "��� ���� �Է��ϼ��� : ";
    cin >> n;

    Person *human = new Person[n];
    for(int i =0; i < n; i++){
        cout << "�̸��� �Է��ϼ��� : ";
        cin >> human[i].name;
        cout << "���̸� �Է��ϼ��� : ";
        cin >> human[i].age;
        cout << "Ű�� �Է��ϼ��� : ";
        cin >> human[i].height;
        cout << "�����Ը� �Է��ϼ��� : ";
        cin >> human[i].weight;
    }
    
    check_age(human, n);

    delete[] human;
    return 0;

}