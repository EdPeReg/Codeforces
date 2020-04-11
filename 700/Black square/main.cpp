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
	string str1, str2, str3, str4, str5;
	getline(cin, str2, ' ');
	getline(cin, str3, ' ');
	getline(cin, str4, ' ');
	getline(cin, str5);
	getline(cin, str1);

	for(size_t i(0); i < str1.size(); i++) {
		if(str1.at(i) == '1') {
			int aux = stoi(str2);
			total += aux;
		}
		if(str1.at(i) == '2') {
			int aux = stoi(str3);
			total += aux;
		}
		if(str1.at(i) == '3') {
			int aux = stoi(str4);
			total += aux;				
		}
		if(str1.at(i) == '4') {
			int aux = stoi(str5);
			total += aux;
		}
	}
	cout << total << "\n";

	return 0;
}
