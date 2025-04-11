#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		string s;
		int A[29] = { 0 };
		cin >> s;
		int answer = 0;
		for (int j = 0; j < s.length(); j++) {
			A[s[j] - 'A'] = 1;
		}
		for (int k = 0; k < 26; k++) {
			if (A[k]!=0) {
				continue;
			}
			answer +=(i+65);
		}
		cout << answer << endl;
	}
	return 0;
}