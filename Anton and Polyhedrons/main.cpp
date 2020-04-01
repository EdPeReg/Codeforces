//https://codeforces.com/problemset/problem/785/A

#include <iostream>
#include <string>

int main() {
	std::string tetra, cube, octa, dode, ico;
	std::string str;
	int n, total = 0;
	std::cin >> n;

	while(n--) {
		std::cin >> str;
		if(str[0] == 'T') {
			total += 4;
		}
		if(str[0] == 'C') {
			total += 6;
		}
		if(str[0] == 'O') {
			total += 8;
		}
		if(str[0] == 'D') {
			total += 12;
		}
		if(str[0] == 'I') {
			total += 20;
		}
	}
	std::cout << total;

	return 0;
}
