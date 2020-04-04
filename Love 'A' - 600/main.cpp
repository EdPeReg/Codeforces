#include <iostream>
#include <string>

int main() {
	int total = 0;
	std::string str;
	std::cin >> str;

	for(size_t i(0); i < str.size(); i++) {
		if(str[i] == 'a') total++;
	}
	std::cout << total + 1;

	return 0;
}
