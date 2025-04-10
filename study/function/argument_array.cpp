#include <iostream>

using namespace std;

int average(int arr[], int count){
    int sum = 0;
    int avg = 0;

    for(int i = 0; i < count; i++){
        sum += arr[i];
    }

    avg = (sum/count);

    return avg;
}

int main(){

    int study=0;
    cout << "과목 수를 입력하세요 : ";
    cin >> study;
    
    int *score = new int[study];

    for(int i = 0; i<5; i++){
        cout << "점수를 입력하세요 : ";
        cin >> score[i];   
    }

    cout << "평균점수 : " << average(score, study);

    delete[] score;
    
    return 0;
}