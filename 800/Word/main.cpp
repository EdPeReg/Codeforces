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

	if(upper == lower) {
		for(auto& c : str) {
			if(isupper(c)) c += 32;
		}
	} else if(upper < lower) {
		for(auto& c : str) {
			if(isupper(c)) c += 32;
		}
	} else {
		for(auto& c : str) {
			if(islower(c)) c -= 32;
		}
	}
	std::cout << str << '\n';

	return 0;
}
