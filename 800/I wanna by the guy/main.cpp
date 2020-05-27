// https://codeforces.com/problemset/problem/469/A
// Time: 40 min.

#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {
	set<int> levels, kx, ky, yes;
	int n;
	cin >> n;

	for(int i = 1; i <= n; i++) {
		levels.insert(i);
	}

	for(int i = 0; i < n; i++) {
		int num;
		cin >> num;
		kx.insert(num);
	}

	for(int i = 0; i < n - 1; i++) {
		int num;
		cin >> num;
		ky.insert(num);
	}

	// I was trying to make an union but wrong.
	set<int>::iterator it = set_union(kx, kx.begin(), ky, ky.end(), yes.begin());

	// SEE IF THE ELEMENTS OF THE FINAL SET ARE IN THE LEVEL SET.
	for(auto itr = levels.begin(); itr != levels.end(); itr++) {
		cout << *itr;
	}

	return 0;

}
