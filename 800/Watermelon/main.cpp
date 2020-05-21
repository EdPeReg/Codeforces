// https://codeforces.com/problemset/problem/4/A
// Time: 18:32
//
// There is a pattern when you divide the watermelon the result should not be odd.

#include <iostream>

using namespace std;

int main() {
	int w;
	cin >> w;

	if(w % 2 == 0 and w / 2 != 1) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}

	return 0;
}
