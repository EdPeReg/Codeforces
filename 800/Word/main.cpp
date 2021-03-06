//https://codeforces.com/problemset/problem/59/A
// Time: 30m.

#include <iostream>
#include <cctype>

int main() {
	std::string str;
	std::cin >> str;

	int lower = 0, upper = 0;
	for(auto& c : str) {
		if(isupper(c)) ++upper;
		else ++lower;
	}

	for(auto& c : str) {
		if((upper == lower) or upper < lower) {
			if(isupper(c)) c += 32;
		} else {
			if(islower(c)) c -= 32;
		}
	}
	std::cout << str << '\n';

	return 0;
}
