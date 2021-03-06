// https://codeforces.com/problemset/problem/510/A
// Time: 1:53 min.

/* You can see a pattern in the matrix, the rows that aren't even always has
 * '#', the rows that are even has first a '# in the last element, and the
 * next one '#' in the first element and so on. '*/


#include <iostream>

using namespace std;

int main() {
	bool first(false);
	int n, m;
	cin >> n >> m;

	for(int row = 1; row <= n; row++) {
		for(int column = 1; column <= m; column++) {
			// Rows that aren't even always has '#'.
			if(row % 2 != 0) {
				cout << "#";
			} else if(!first and column == m) {
				// Print in the last position.
				cout << "#";
				first = true;
			} else if(first and column == 1) {
				// Print in the first position.
				cout << "#";
			} 
			// When we are in the last position, now first is false, if
			// we say first = false since the beggining, it will print
			// #.....# 
			else if(column == m) {
				cout << ".";
				first = false;
			} else {
				cout << ".";
			}
		} 
		cout << '\n';
	}

	return 0;
}
