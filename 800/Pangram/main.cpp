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
		transform(str.begin(), str.end(), str.begin(), ::tolower);

		for(size_t i = 0; i < abc.size(); i++) {
			for(size_t j = 0; j < str.size(); j++) {
				if(abc[i] != str[j]) {
					found = false;
				} else {
					found = true;
					break;
				}
			}
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
