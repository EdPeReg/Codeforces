// https://codeforces.com/problemset/problem/236/A
// Time: 27 min.

#include <iostream>

using namespace std;

int main() {
	int total = 0;
	string user;
	cin >> user;

	int size = user.size();
	for(int i = 0; i < size; ++i) {
		for(int j = i+1; j < size; ++j) {
			// Only the first match.
			if(user.at(i) == user.at(j)) {
				++total;
				break;
			}
		}
	}

	if((size - total) % 2) {
		cout << "IGNORE HIM!\n";
	} else {
		cout << "CHAT WITH HER!\n";
	}

	return 0;
}
