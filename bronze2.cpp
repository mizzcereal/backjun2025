#include <iostream>

using namespace std;

int main() {
    int num, cow, location;
    int positions[11];
    bool visited[11] = {false};
    int count = 0;

    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> cow >> location;
        
        if (!visited[cow]) { 
            positions[cow] = location;
            visited[cow] = true;
        }else if (positions[cow] != location){
            count++;
            positions[cow] = location;
        }
    }

    cout << count;

    return 0;
}
