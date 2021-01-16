// https://codeforces.com/problemset/problem/112/A
// Time 1h.

#include <iostream>

int main() {
	std::string a, b;
	std::cin >> a >> b;

	for(int i = 0; i < a.size(); ++i) {
		if(a.at(i) < 97) 
			a.at(i) += 32;
		if(b.at(i) < 97) 
			b.at(i) += 32;
	}

	if(a == b) {
		std::cout << 0 << '\n';
	} else if(a < b){
		std::cout << -1 << '\n';
	} else {
		std::cout << 1 << '\n';
	}

	return 0;
}
