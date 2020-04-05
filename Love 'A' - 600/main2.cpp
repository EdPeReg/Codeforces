//https://codeforces.com/problemset/problem/1146/A

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
	
	for(size_t i(0); i < str.size(); i++) {
		if(noA >= a) { 
			str.erase(i,1);
			noA--;
		}
	}

	std::cout << str.size();

	return 0;
}
