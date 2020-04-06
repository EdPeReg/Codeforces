// https://codeforces.com/problemset/problem/1281/A

/* I only need to check the last two letters of the string, doing this, is not necessary to iterate
 * all the string.
 *
 * for each suffixes you check:
 * Filipino: 'o', 'p'
 * Japanese: 'u', 's'
 * Korean:   'a', 'd'
 *
 * Is important to notice that the order is backwards. 
 * Because I'm only checking two letters in the string, is necessary
 * to do str.size() - 1 and str.size() - 2, to be able to have the 
 * correct characters. */

#include <iostream>
#include <string>

int main() {
	int c;
	std::cin >> c;

	while(c--) {
		std::string str;
		std::cin >> str; 

		if(str[str.size() - 1] == 'o' and str[str.size() - 2] == 'p') {
			std::cout << "FILIPINO\n";
		}
		if(str[str.size() - 1] == 'u' and str[str.size() - 2] == 's') {
			std::cout << "JAPANESE\n";

		} 			
		if(str[str.size() - 1] == 'a' and str[str.size() - 2] == 'd') { 
			std::cout << "KOREAN\n";   
		}
	}

	return 0;
}
