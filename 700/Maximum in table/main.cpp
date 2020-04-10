// https://codeforces.com/problemset/problem/509/A
// 1. 19 min
// 2. 21 min

/* I think this is not efficient but well, basically I filled the matrix with 1 at the beggining,
 * and after that, I modify the other values using the formula provided to finally, have the max
 * number of the matrix.
 *
 * Note, it seems that the max number is always the last element in the matrix. */

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n, max = 0;
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

	if(n == 1) {
		cout << 1 << "\n";
	} else if(n == 2) {
		cout << 2 << "\n";
	} else {
		for(int i = 1; i < n - 1; i++) {
			for(int j = 1; j < n - 1; j++) {
				max = std::max(matrix[i][j], matrix[i + 1][j + 1]);
			}
		}
		cout << max << "\n";
	}

	return 0;
}
