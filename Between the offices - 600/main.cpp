#include <iostream>

int main() {
	int n;
	int FtoS = 0, StoF = 0;
	std::cin >> n;
	std::string str;
	std::cin >> str;

	for(size_t i(0); i < str.size() - 1; i++) {
		if(str[i] == 'F' and str[i] != str[i + 1]) FtoS++;
		if(str[i] == 'S' and str[i] != str[i + 1]) StoF++;
	}

	if(FtoS == StoF) std::cout << "NO\n";
	else std::cout << "YES\n";

	return 0;
}
