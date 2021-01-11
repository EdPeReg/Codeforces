// https://codeforces.com/problemset/problem/1328/A
// Time: 10m.

#include <iostream>

int main() {
	size_t t,a,b;
	std::cin >> t;

	while(t--) {
		int total = 0;
		std::cin >> a >> b;

		if(a % b == 0) {
			std::cout << 0 << '\n';
		} else {
			while(true) {
				if(a++ % b != 0) {
					++total;
				} else {
					std::cout << total << '\n';
					break;
				}
			}
		}
	}

	return 0;
}
