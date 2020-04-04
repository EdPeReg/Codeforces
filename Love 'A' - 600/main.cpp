
/* A case it's also when there are only a. */

#include <iostream>
#include <string>

int main() {
	int total = 0;
	bool flag = false;
	std::string str, str2, str3;
	std::cin >> str;
	str2 = str;
	str3 = str;

	for(size_t i(0); i < str2.size(); i++) {
		if(str2[i] != 'a') str2.erase(i,1);
		if(str3[i] == 'a') str3.erase(i,1);
		if(str[i] == 'a') total++;
		else flag = true;
	}

	if(str2.size() == str3.size()) {
		std::cout << "\n" << str2.size() + str3.size() - 1;
	} else if(flag == false) {
		std::cout << total;
	} else std::cout << total + 2;


	return 0;
}
