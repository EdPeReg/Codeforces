//https://codeforces.com/problemset/problem/785/A

/* Something quickly, you can do it using the first character
 * of the word, because there is not more other caracters repeated, 
 * if there were a string where its first character is repeated, this doesn't
 * would not work; For me, not efficient. */

#include <iostream>
#include <string>

int main() {
	std::string str;
	int n, total = 0;
	std::cin >> n;

	while(n--) {
		std::cin >> str;
		if(str[0] == 'T') {
			total += 4;
		}
		if(str[0] == 'C') {
			total += 6;
		}
		if(str[0] == 'O') {
			total += 8;
		}
		if(str[0] == 'D') {
			total += 12;
		}
		if(str[0] == 'I') {
			total += 20;
		}
	}
	std::cout << total;

	return 0;
}
