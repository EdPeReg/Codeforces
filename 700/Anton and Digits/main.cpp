// https://codeforces.com/problemset/problem/734/B
// Time: 45 min.

/* First you need to have all the possible 256 combinations, to have this
 * you only need the min of k2, k5, k6. 
 * Once you have it, you only multiply it by 256, to have the amount of 256 you can have.
 * Once you had the amount of 256, you need to know the amount of 32 that you can have,
 * is the same logic, because you need either 2 or 3, you need to have the min of digits,
 * min(k2,k3), doing this you will have the min amount of 32, you multiply it by 32 and
 * you will have the amount of 32 to finally add it with the amount of 256 you have. */

#include <iostream>

using namespace std;

int main() {
	int dig2, dig3, dig5, dig6;
	int min = 0, total = 0;
	cin >> dig2 >> dig3 >> dig5 >> dig6;

	if(dig2 <= dig5 and dig2 <= dig6) {
		min = dig2;
	} else if(dig5 <= dig2 and dig5 <= dig6) {
		min = dig5;
	} else {
		min = dig6;
	}
	total = 256 * min;

	// Once you have the 256, you need to remove the digitis.
	dig2 -= min;
	dig5 -= min;
	dig6 -= min;

	min = dig2;
	if(dig2 > dig3) {
		min = dig3;
	}

	total = total + min * 32;

	cout << total << "\n";
	return 0;
}
