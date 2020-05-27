#include <iostream>

using namespace std;

int main() {
	string str;
	cin >> str;

	if(str[0] >= 'A' and str[0] <= 'Z') {
		std::cout << str << "\n";
	} else {
		printf("%c", str[0] - 32);
		for(int i = 1; i < str.size(); i++) {
			std::cout << str[i];
		}
	}

	return 0;
}
