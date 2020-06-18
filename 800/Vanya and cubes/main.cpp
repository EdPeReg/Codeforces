// https://codeforces.com/problemset/problem/492/A
// TIme: 33 min.


/* Each level has a number of blocks, that is denoted with the next formula:
 * 1 + 2 + ... + (i - 1) + i 
 * Level 1 = 1
 * Level 2 = 3
 * Level 3 = 6
 * Level 4 = 10
 * Level 5 = 15
 *      .
 *      .
 *      .
 *
 * Depending of the n cubes given, will be the the maximum possible height.
 *
 * n = 25
 * height = 4
 *
 * Because at level 4 we sum the total of blocks 10+6+3+1=20 
 * At level 5 we sum the total of blocs 15+10+6+3+1=35, 35 pass the 25, that's
 * why it cannot be at height 5. */

#include <iostream>

using namespace std;

int main() {
	int n, sum = 0, numBlocks = 0;
	cin >> n;

	// i will represent the height. 
	for(int i = 1; i <= n; i++) {
		sum += i;
		numBlocks += sum;

		if(numBlocks > n) {	
			cout << i - 1 << "\n";
			break;
		} else if(numBlocks == n) {
			cout << i << "\n";
			break;
		}
	}

	return 0;
}
