// https://codeforces.com/problemset/problem/469/A
// Time: 1h 10 min.

/* It seems that works, the problem is to know the amounf of number that has the input. 
 * Sometimes is not from 0 to level of numbers. */

#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {
	set<int> littleX, littleY;
	bool passLevel = false;
	int levelNumbers;
	cin >> levelNumbers;

	for(int i = 0; i < levelNumbers; ++i) {
		int level;
		cin >> level;
		littleX.insert(level);
	}

	for(int i = 0; i < levelNumbers - 1; ++i) {
		int level;
		cin >> level;
		littleY.insert(level);
	}

	for(int i = 1; i <= levelNumbers; ++i) {
		if(littleX.find(i) == littleX.end()) {
			if(littleY.find(i) != littleY.end()) {
				passLevel = true;
			}
		}
	}

	if(passLevel) {
		cout << "I become the guy.\n";
	} else {
		cout << "Oh, my keyboard!\n";
	}

	return 0;
}
