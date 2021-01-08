// https://codeforces.com/problemset/problem/1368/A
// Time 1h.

#include <iostream>

using namespace std;

int main() {
	int t,a,b,n;
	cin >> t;

	while(t--) {
		cin >> a >> b >> n;
		int steps = 0;
		while(true) {
			if(a < b) {
				a += b;
			} else {
				b += a;
			}
			++steps;
			if(a > n or b > n) break;
		}
		cout << steps << '\n';
	}

	return 0;
}
