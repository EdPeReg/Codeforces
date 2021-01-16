// https://codeforces.com/problemset/problem/112/A
// Time 1h.

#include <iostream>
#include <cctype>

void convert(std::string& a) {
	for(int i = 0; i < a.size(); ++i) {
		if(std::isupper(a.at(i))) {
			a[i] = a[i] + 32;
		}
	}
}

int main() {
	std::string a, b;
	std::cin >> a >> b;
	
	convert(a);
	convert(b);

	if(a == b) {
		std::cout << 0 << '\n';
	} else {
		int j = 0;
		for(int i = 0; i < a.size(); ++i) {
			if(a.at(i) < b.at(j)) {
				std::cout << -1 << '\n';
				break;
			} else if(a.at(i) > b.at(j)){
				std::cout << 1 << '\n';
				break;
			} 
			++j;
		}
	}

	return 0;
}
