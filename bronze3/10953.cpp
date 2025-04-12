#include <iostream>

using namespace std;

int main() {
	int t;
	int a, b, sum;
	char c;
	
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> a >> c >> b;
		sum = a + b;
		cout << sum << endl;
	}
}