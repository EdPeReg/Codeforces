#include <iostream>

int main() {
	int t;
	std::cin >> t;

	while(t--) {
		int x,y,n;
		std::cin >> x >> y >> n;

		for(int k = n; k >= 0; --k) {
			if(k % x == y) {
				std::cout << k << '\n';
				break;
			}
		}
	}

	return 0;
}
