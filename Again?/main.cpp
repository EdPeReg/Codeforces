//https://codeforces.com/problemset/problem/1331/D

/* Well, basically you only need to know if the last number is odd or even.
 * Because it's receiving a string, I obtain the last character of the string.
 *
 * The last - 48 convert from ascii to integer. 
 *
 * Maybe another way is to input the hexadecimal number directly instead string.
 * */

#include <iostream>
#include <string>

int main() {
	std::string str;
	std::cin >> str;
	int last = str[str.size() - 1];
	
	if((last - 48) & 1) std::cout << 1;
	else std::cout << 0;

	return 0;
}
