// https://codeforces.com/problemset/problem/282/A
// Time. 10m

#include <iostream>
#include <string>

int main() {
	int n, x = 0;
	std::string str;
	std::cin >> n;

	while(n--) {
		std::cin >> str;
		if(str.find("+") != std::string::npos) {
			++x;
		} else {
			--x;
		}
	}
	std::cout << x << '\n';
}

