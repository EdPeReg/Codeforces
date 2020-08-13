// https://codeforces.com/problemset/problem/1385/A
// 30 min.

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--) {
		int x, y, z;
		cin >> x >> y >> z;

		// My idea was to start from the maximum number an iterate downwards.
		// Given some initial value to a, b, c depending if max is equal to x, y, z.
		for(int max = std::max({x, y, z}); max >= 1; max--) {

		}

	}

	return 0;
}
