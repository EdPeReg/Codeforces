// https://codeforces.com/problemset/problem/509/A

/* Another way to do it, if you notice, the last position of the matrix will be ALWAYS the max number,
 * you only print that position without iterate all over the matrix.
 * n - 1 because we are starting at position 0. */

#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int matrix[n][n];

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			matrix[i][j] = 1;
		}
	}

	for(int i = 1; i < n; i++) {
		for(int j = 1; j < n; j++) {
			matrix[i][j] = matrix[i - 1][j] + matrix[i][j - 1];
		}
	}

	cout << matrix[n - 1][n - 1] << "\n";

	return 0;
}
