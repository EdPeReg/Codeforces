// https://codeforces.com/problemset/problem/1348/A
// Time: 50 min.

/* 
 * Basically here we didn't use arrays, I used arrays in the previous version
 * to store them and get the information, also to traverse the arrays and do the 
 * proper operations. Is not necessary to do that, we can sum up all the elements.
 *
 * There is not necessary for the function call pow(), because 1 << n do the same work
 * and is less efficient.
 * */

#include <iostream>

using namespace std;

int main() {
	int t, n;
	cin >> t;

	while(t--) {
		cin >> n;
		
		// 1 << n = 2^n
		// We put already the largest coin into our pile.
		int sum_a = (1 << n);
		int sum_b = 0;

		// Now we insert the smallest coins using n/2-1.
		for(int i = 1; i < n/2; ++i) {
			sum_a += (1 << i);
		}

		// Insert the remaining coins to the other pile with n/2.
		for(int i = n/2; i < n; ++i) {
			sum_b += (1 << i);
		}
		cout << sum_a - sum_b << '\n';
	}

	return 0;
}
