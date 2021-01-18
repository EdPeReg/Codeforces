// https://codeforces.com/problemset/problem/263/A
// 	Time: 30m.

#include <iostream>
#include <cmath>

int main() {
	int m[5][5];

	for(int i = 0; i < 5; ++i) {
		for(int j = 0; j < 5; ++j) {
			std::cin >> m[i][j];
		}
	}

	int r,c;
	bool stop = false;
	for(int i = 0; i < 5; ++i) {
		for(int j = 0; j < 5; ++j) {
			if(m[i][j] == 1) {
				r = i;
				c = j;
				stop = true;
				break;
			}
		}
		if(stop) break;
	}

	// [3][3] Taking in consideration that starts with 1.
	std::cout << abs(3-r) + abs(3-c) << '\n'; 

	return 0;
}
