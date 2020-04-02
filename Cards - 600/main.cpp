#include <iostream>
#include <string>
#include <algorithm>

int main() {
	int n;
	std::string str;
	std::cin >> n;
	std::cin >> str;

	std::sort(str.begin(), str.end());
	for(size_t i = 0; i < str.size(); i++) {
		if(str[i] == 'z') std::cout << "0 ";
		if(str[i] == 'n') std::cout << "1 ";
	}

	return 0;
}

