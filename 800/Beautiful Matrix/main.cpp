// https://codeforces.com/problemset/problem/263/A
// 	Time: 30m.

#include <iostream>

int main() {
	int m[5][5];

	for(int i = 0; i < 5; ++i) {
		for(int j = 0; j < 5; ++j) {
			std::cin >> m[i][j];
		}
	}

	int i1,j1;
	bool stop = false;
	for(int i = 0; i < 5; ++i) {
		for(int j = 0; j < 5; ++j) {
			if(m[i][j] == 1) {
				i1 = i;
				j1 = j;
				stop = true;
				break;
			}
		}
		if(stop) break;
	}

	int moves = 0;
	while(i1 != 2 or j1 != 2) {
		if(i1 > 2) {
			--i1;
			++moves;
		} else if(i1 < 2){
			++i1;
			++moves;
		}

		if(j1 > 2) {
			--j1;
			++moves;
		} else if(j1 < 2){
			++j1;
			++moves;
		}
	}
	std::cout << moves << '\n';
	return 0;
}
