#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int x, y, w, h;
    int tmpx, tmpw;

    cin >> x >> y >> w >> h;
    tmpx = min(x, y);
    tmpw = min(w-x, h-y);
    cout << min(tmpx, tmpw);

    return 0;
}