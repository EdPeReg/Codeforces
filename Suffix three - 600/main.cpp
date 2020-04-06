// https://codeforces.com/problemset/problem/1281/A

/* Well, because I'm interested on check the last letters of the string, I start
 * iterating from back to front.
 * Also I see what makes unique the suffices, for Filipino you have a 'p' followed by a 'o'
 * Japanese, 'd' followed by 'e', 'm' followed by a 'a'.
 * Korean, 'm' followed by a 'n'.
 *
 * Having this, is not necessary to check every letter, you only check two letters.
 *
 * But because I'm iterating from back to front, I need to check those letters backwards.
 * Also I have a break because once I check the two letters, I don't want to continue analizing
 * all the string.
 * The str[i - 1] is neccesarry to check the next letter.
 *
 * Example:
 * 
 * kamusta_po 
 *         ^ ^
 *         | |
 * */


#include <iostream>
#include <string>

int main() {
	int c;
	std::cin >> c;

	while(c--) {
		std::string str;
		std::cin >> str; 

		for(size_t i(str.size()); i > 0; i--) {
			if(str[i] == 'o' and str[i - 1] == 'p') {
				std::cout << "FILIPINO\n";
			   	break;
			}
			if(str[i] == 'e' and str[i - 1] == 'd') {
				std::cout << "JAPANESE\n";
			   	break;

			} 			
			if(str[i] == 'a' and str[i - 1] == 'm') {
				std::cout << "JAPANESE\n";
			   	break;
			}
			if(str[i] == 'n' and str[i - 1] == 'm') { 
				std::cout << "KOREAN\n";   
				break;
			} 
		}
	}

	return 0;
}
