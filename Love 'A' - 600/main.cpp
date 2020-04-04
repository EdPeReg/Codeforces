//https://codeforces.com/problemset/problem/1146/A

/* Not completed
 * */


/* A case it's also when there are only a. */

#include <iostream>
#include <string>

int main() {
	int total = 0;
	bool flag = false;
	std::string str, str2, str3;
	std::cin >> str;
	str2 = str;
	str3 = str;

	for(size_t i(0); i < str2.size(); i++) {
		// The idea about erasing characters was, if the number of characters that are a
		// and the number of characters that aren't a are equal.
		if(str2[i] != 'a') str2.erase(i,1);
		if(str3[i] == 'a') str3.erase(i,1);
		// If there is only a, just get how many a are in the string.
		if(str[i] == 'a') total++;
		// In the case if the string are only a. "aaaa"
		else flag = true;
	}

	// If both are equal, just add me the two strings and substract 1, only works for cases i think 4 and 5.
	if(str2.size() == str3.size()) {
		std::cout << "\n" << str2.size() + str3.size() - 1;
	} else if(flag == false) { // If the string has only a, only print how many a has.
		std::cout << total;
	} else std::cout << total + 2; // At first it was total + 1, the first 3 cases works with total + 1.


	return 0;
}
