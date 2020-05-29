// https://codeforces.com/contest/1335/problem/A
// Time: 30

#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--) {
		int aux = 1, n, distr = 0;
		cin >> n;

		n--;
		// It seems to throw the correct answer but is not efficient.
		while(n-- > aux++) {
			distr++;
		}
		cout << distr << "\n";
	}

	return 0;
}
