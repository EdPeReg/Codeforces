// https://codeforces.com/problemset/problem/520/A
// Time: 1 hr.

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	bool found;
	string abc = "abcdefghijklmnopqrstuvwxyz";
	int n;
	string str;
	cin >> n;
	cin >> str;

	if(n < abc.size()) {
		cout << "NO\n";
	} else {
		// Transform the string to lowercase, we do that because
		// the string can contain uppercase letters.
		transform(str.begin(), str.end(), str.begin(), ::tolower);

		// Will analize both strings, the user string and the string that
		// has the alphabet letters.
		for(size_t i = 0; i < abc.size(); i++) {
			for(size_t j = 0; j < str.size(); j++) {
				if(abc[i] != str[j]) {
					found = false;
				} else {
					found = true;
					break;
				}
			}

			// There is the case where you didn't find the letter, if
			// you didn't find it, there is no reason to analize the string
			// to find the others letters.
			if(found == false) {
				break;
			}
		}

		if(found) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}

	return 0;
}
