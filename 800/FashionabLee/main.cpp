// https://codeforces.com/problemset/problem/1369/A
// Time: 35 min.

#include <iostream>

int main() {
	int t;
	std::cin >> t;

	while(t--) {
		size_t n;
		std::cin >> n;
		if(n % 4 == 0) {
			std::cout << "YES\n";
		} else {
			std::cout << "NO\n";
		}
	}

	return 0;
}
