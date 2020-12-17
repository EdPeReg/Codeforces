// https://codeforces.com/problemset/problem/1325/A
// Time 30m

#include <iostream>
#include <cmath>

int gcd(int a, int b) {
	if(b == 0)
		return a;
	return gcd(b, a % b);
}

int lcm(int a, int b) {
	return (a*b) / (gcd(a,b));
}

int main() {
	int t;
	std::cin >> t;
	while(t--) {
		int x;
		bool find = false;
		std::cin >> x;

		// NOT EFFICIENT. FIND ANOTHER WAY.
		for(int i = 1; i <= x; ++i) {
			for(int j = 1; j <= sqrt(x); ++j) {
				if(gcd(i,j) + lcm(i,j) == x) {
					std::cout << i << " " << j << '\n';
					find = true;
					break;
				}
			}
			if(find) break;
		}

	}
	

	return 0;
}
