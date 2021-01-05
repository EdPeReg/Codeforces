// https://codeforces.com/problemset/problem/1296/A
// Time: 11 min.

#include <iostream>

using namespace std;

int main() {
	int t, x, n;
	cin >> t;

	while(t--) {
		int sum = 0;
		cin >> x;
		for(int i = 0; i < x; ++i) {
			cin >> n;
			sum += n;
		}
		if(sum % 2 == 0) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}

	return 0;
}
