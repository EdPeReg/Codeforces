// https://codeforces.com/problemset/problem/427/A
// Time: 1h


#include <iostream>

using namespace std;

int main() {
	int n, x, p = 0, c = 0;
	cin >> n;

	for(int i = 0; i < n; ++i) {
		cin >> x;
		if(x == -1) {
			++c;
			if(p > 0) {
				--c;
				--p;
			}
		} else {
			p += x;
		}	
	}

	cout << c << '\n';
	return 0;
}
