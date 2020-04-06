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
	
	int j = 0;
	while(true) {
		if(noA >= a and str[j] != 'a') { 
			str.erase(j,1);
			std::cout << "str: " << str << "\n";
			noA--;
		} else {
			j++;
		}
		if(noA == 0 or noA < a) break;
	}

	std::cout << str.size();

	return 0;
}
