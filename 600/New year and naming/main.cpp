//https://codeforces.com/problemset/problem/1284/A
//incompleted.

#include <iostream>
#include <string>
#include <vector>


int main() {
	int n, m, q;
	std::vector<std::string> str1;
	std::vector<std::string> str2;
	std::string str;
	
	std::cin >> n >> m;
	//std::cin.ignore();
	//std::cin.clear();

	for(int i(0); i < n; i++) {
		std::cin >> str;
		str1.push_back(str);
	}

	for(int i(0); i < m; i++) {
		std::cin >> str;
		str2.push_back(str);
	}

	std::cin >> q;
	while(q--) {
		int aux;
		std::cin >> aux;	
		
		while(aux--) {
			for(size_t i(0); i < str1.size(); i++) {
				std::cout << str1.push_back(str2[i]);
			}
		}


	}






	return 0;
}
