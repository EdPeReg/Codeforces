// https://codeforces.com/problemset/problem/71/A
// time: 10 min

#include <iostream>
#include <string>

using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--) {
		int cont = 0;
		string str;
		cin >> str;

		if(str.size() > 10) {
			// i = 1 because we want to start from the second character.
			// str.size() - 1 because we don't want to consider the last character.
			for(int i = 1; i < str.size() - 1; i++) {
				cont++;
			}
			cout << str[0] << cont << str[str.size() - 1] << "\n";
		} else {
			cout << str << "\n";
		}
	}

	return 0;
}
