#include <iostream>

using namespace std;

int main() {
    int num, cow, location, location_save = -1, count = 0;

    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> cow >> location;
        
        if (i > 0 && location_save == location) { 
            count++;
        }
        location_save = location; 
    }

    cout << count;

    return 0;
}
