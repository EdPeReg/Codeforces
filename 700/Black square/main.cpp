// https://codeforces.com/problemset/problem/431/A
// 35 min.
// 15 min.
// 50 min total.

/* Each line has some value, that is how many calories the boy will burn if he touch that line.
 * The second line is how many times he touch that line.*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	int total = 0;

	// Because there are always four lines, we need to read the first line until a ' ' is found,
	// this is in this way because we want each value. 
	string str1, str2, str3, str4, str5;
	getline(cin, str2, ' ');
	getline(cin, str3, ' ');
	getline(cin, str4, ' ');
	getline(cin, str5);
	getline(cin, str1);

	for(size_t i(0); i < str1.size(); i++) {
		// Because we only have 4 lines, we need to know what line he's touching.
		// depending on that, we only compute its value, remember that we need to
		// convert that value to int.
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
