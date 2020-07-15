// https://codeforces.com/problemset/problem/1358/A

// Time: 1 h.

/* I was trying to figure out if m was odd or even of if it was grater than
 * n, because there are like some patters in the answers but I couldn't 
 * figure out yet. */

#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--) {
		int n, m;
		cin >> n >> m;

		if(m % 2 == 0 and m > n) {
			cout << n + m - 1 << '\n';
		} else if(m % 2 != 0 and m > n) {
			cout << m - n << '\n';
		} else if(m % 2 == 0 and m == n) {
			cout << m << '\n';
		} else if(n == m) {
			cout << (n + m) - 1 << '\n';
		}

		if(n > m) {
			cout << n + m << '\n';
		}
	}

	return 0;
}
