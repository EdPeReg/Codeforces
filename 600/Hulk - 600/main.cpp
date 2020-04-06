//https://codeforces.com/problemset/problem/705/A

/* Incomplete, I don't know how to concatenate the words, I noticed
 * that when it's even that word "i love" it's added, when it's odd
 * the word "I hate" it's added. */


#include <iostream>
#include <string>

int main() {
	int n;
	std:: cin >> n;

	std::string that = "that ";
	std::string iHate = "I hate";
	std::string iLove = "I love";

	if(n == 1) {
		std::cout << "I hate";
	} else {
		while(n) {
			if(n % 2  == 0) {
				std::cout << iLove;
			} else {
				std::cout << iHate;
			}
			n--;
		}
	}

	std::cout << " it";

	return 0;
}
