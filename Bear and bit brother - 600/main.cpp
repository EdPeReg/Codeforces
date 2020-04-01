//https://codeforces.com/problemset/problem/791/A

#include <iostream>

int main() {
	int a, b, year = 1;
	std::cin >> a >> b;

	while(true) {
		a *= 3;
		b *= 2;
		if(a > b) {
			std::cout << year;
			break;
		}
		year++;
	}

	return 0;
}
