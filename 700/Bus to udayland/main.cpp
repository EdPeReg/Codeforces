// https://codeforces.com/problemset/problem/711/A
// 1. 28 min
// 2. 30 min

/* You only need to find a pair of OO, the first pair of OO you find, you will  
 * change it with ++ 
 * */


#include <iostream>

using namespace std;


int main() {
	// This will help you to break the for loop once the first pair OO 
	// are found.
	bool flag = false; 
	int n;
	char str;
	cin >> n;

	// Only the i row will change.
	char matrix[n][5];

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < 5; j++) {
			cin >> str;
			matrix[i][j] = str;
		}
	}

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < 5; j++) {
			// To avoid this case:
			// XX|XO
			// OX|XX
			//
			// XX|X+
			// +X|XX
			//
			// We need to know if the seat that is to the most right is 4, that means, 
			// do this if the seat of the most right is not the last one. 
			if(matrix[i][j] == 'O' and matrix[i][j + 1] == 'O' and j != 4) {
				cout << "YES";
				flag = true;
				matrix[i][j] = '+';
				matrix[i][j + 1]  = '+';
				break;
			}
		}
		// Just break here, we find the pair of OO, don't keep iterating.
		if(flag == true) break;
	}
	cout << "\n";

	if(flag == false) 
		cout << "NO\n";
	else {
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < 5; j++) {
				cout << matrix[i][j];
			}
			cout << "\n";
		}
	}

	return 0;
}
