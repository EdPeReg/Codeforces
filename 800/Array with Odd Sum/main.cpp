// https://codeforces.com/problemset/problem/1296/A
// Time: 1h:30m.

#include <iostream>

using namespace std;

int main() {
	int t, x, n;
	cin >> t;

	while(t--) {
		int sum = 0;
		cin >> x;
		bool even = false, odd = false;
		for(int i = 0; i < x; ++i) {
			cin >> n;
			if(n % 2 == 1) {
				odd = true;
			} else if(n % 2 == 0) {
				even = true;
			}
			sum += n;
		}

		if(sum % 2 == 1 or even == odd) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}

	return 0;
}
