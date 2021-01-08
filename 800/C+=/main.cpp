// https://codeforces.com/problemset/problem/1368/A
// Time 1h.

/*
 * Just take the less number of a and b and do the proper operation.
 *
 * */

#include <iostream>

using namespace std;

int main() {
	int t,a,b,n;
	cin >> t;

	while(t--) {
		cin >> a >> b >> n;
		int steps = 0;
		// Any of the two numbers can be the greater.
		while(a <= n and b <= n) {
			if(a < b) {
				a += b;
			} else {
				b += a;
			}
			++steps;
		}
		cout << steps << '\n';
	}

	return 0;
}
