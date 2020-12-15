// https://codeforces.com/problemset/problem/1367/A
// Time: 34 min.

/* 
 * There is a pattern, for example:
 * b = abbaac.
 * 
 * 1. Take the first two characters.
 * 2. Now we will have "ba", "ac", from this tokens, take the second character
 *    and append it to our a.
 * 
 * Now our a will be a = abac.
 *
 * */

#include <iostream>
#include <string>

int main() {
	int t;
	std::string a,b;
	std::cin >> t;

	while(t--) {
		std::cin >> b;
		// Add the first two letters.
		a = b.substr(0,2);

		// Every two characters, get the correct character.
		for(size_t i = 3; i < b.size(); i += 2) {
			// Allows us to push a character.
			a.push_back(b[i]);	
		}
		std::cout << a << '\n';
		a.clear();
	}

	return 0;
}
