// https://codeforces.com/problemset/problem/1328/A
// Time: 10m.

#include <iostream>

int main() {
	size_t t,a,b;
	std::cin >> t;

	while(t--) {
		std::cin >> a >> b;
		if(a % b) {
			std::cout << b - a % b << '\n';
		} else {
			std::cout << 0 << '\n';
		}
	}

	return 0;
}
