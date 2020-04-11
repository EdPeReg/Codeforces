// https://codeforces.com/problemset/problem/431/A
// 35 min.
// NOT COMPLETED.

/* The problem was in test 6, where it has in the first line something like this:
 * 1313 1423 1254 1235
 *
 * I thought that every test would be only one character but no, I need to consider
 * the whole string, maybe to read until a space is found to have all the number and not
 * only one character.
 * */

#include <iostream>
#include <string>

using namespace std;

int main() {
	int total = 0;
	string str1, str2;
	getline(cin, str1);
	getline(cin, str2);

	// Works only if the test case is like this:
	// 1 5 4 1
	// Not 1234 6431 2346 1254
	for(size_t i(0); i < str2.size(); i++) {
		if(str2.at(i) == '1') {
			total += (str1.at(0) - 48);				
		}
		if(str2.at(i) == '2') {
			total += (str1.at(2) - 48);				
		}
		if(str2.at(i) == '3') {
			total += (str1.at(4) - 48);				
		}
		if(str2.at(i) == '4') {
			total += (str1.at(6) - 48);				
		}
	}
	cout << total << "\n";

	return 0;
}
