// https://codeforces.com/problemset/problem/263/A
// 	Time: 30m.

#include <iostream>
#include <cmath>

int main() {
	int m[5][5];

	int n;
	for(int i = 1; i <= 5; ++i) {
		for(int j = 1; j <= 5; ++j) {
			std::cin >> n;
			if(n == 1) {
				std::cout << abs(3-i) + abs(3-j) << '\n'; 
			}
		}
	}

	return 0;
}
