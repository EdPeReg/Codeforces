// https://codeforces.com/contest/281/problem/A
// Time: 15 min

#include <iostream>

using namespace std;

int main() {
	string str;
	cin >> str;

	// Check if the first letter is in between capital letters.
	if(str[0] >= 'A' and str[0] <= 'Z') {
		std::cout << str << "\n";
	} else {
		// Substract 32 to have the correct ascii value.
		printf("%c", str[0] - 32);
		for(int i = 1; i < str.size(); i++) {
			std::cout << str[i];
		}
	}

	return 0;
}
