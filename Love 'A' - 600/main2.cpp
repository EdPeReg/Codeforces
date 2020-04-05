//https://codeforces.com/problemset/problem/1146/A

// not completed.

#include <iostream>
#include <string>

int main() {
	std::string str;
	int noA = 0;
	int a = 0;
	std::cin >> str;

	for(size_t i(0); i < str.size(); i++) {
		if(str[i] != 'a') {
			noA++;
		} else {
			a++;
		}
	}
	
	std::cout << "no a: " << noA << "\n";
	std::cout << "a: " << a << "\n";

	if(noA > a) {
		std::cout << a + 1;
	} else if(noA == a) {
		std::cout << str.size() - 1;
	} else {
		std::cout << str.size();
	}

	return 0;
}
