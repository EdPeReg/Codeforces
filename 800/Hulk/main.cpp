// https://codeforces.com/problemset/problem/705/A
// Time: 53 min.

#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;

	// 7 because it's the begginig where the word "that" will be inserted.
	int count = 7;
	int n;
	cin >> n;

	if(n == 1) {
		str+= "I hate ";
		cout << str << "it" << '\n';
	} else {
		for(int i = 1; i <= n; i++) {
			if(i % 2 == 0) {
				str += "I love ";
			} else {
				str += "I hate ";
			}

			// We don't want to insert the word "that" at the end of the 
			// string.
			if(i != n) {
				str.insert(count, "that ");
				// This will be now the new position to be inserted, it's 12
				// because we are taking in consideration that previously 
				// "that" was inserted. 
				count += 12;
			} 
		}
		cout << str << "it" << '\n';
	}

	return 0;
}
