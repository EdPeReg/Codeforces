// https://codeforces.com/problemset/problem/1374/A
// Time: 30m

#include <iostream>

int main() {
	int t;
	std::cin >> t;

	while(t--) {
		int x,y,n;
		std::cin >> x >> y >> n;

		// Time limite exceeded.
		// The idea was, if we want the max, just start from the last number.
		for(int k = n; k >= 0; --k) {
			if(k % x == y) {
				std::cout << k << '\n';
				break;
			}
		}
	}

	return 0;
}
