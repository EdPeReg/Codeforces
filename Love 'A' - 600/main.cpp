
/* A case it's also when there are only a. */

#include <iostream>
#include <string>

int main() {
	int total = 0;
	bool flag = false;
	std::string str;
	std::cin >> str;

	for(size_t i(0); i < str.size(); i++) {
		if(str[i] == 'a') total++;
		else flag = true;
	}
	
	if(flag == false) std::cout << total;
	else std::cout << total + 1;

	return 0;
}
