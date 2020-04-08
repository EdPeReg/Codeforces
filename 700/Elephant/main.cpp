// https://codeforces.com/problemset/problem/617/A

/* I'm not proud of it but well, 
 * basically you need to count the number of operations I did in the 
 * substraction, we stat from the highest steps, and after that we go to the 
 * second highest step and so on.
 * 
 * n = 12
 * n = 12 - 5 -> 7
 * n = 7 - 5  -> 2
 * n = 2 - 5  -> Wrong, now start from the second highest step.
 *
 * n = 2 - 4  -> Wrong
 * n = 2 - 3  -> Wrong
 * n = 2 - 2  -> 0, Finish
 *
 * The total valid operations are 3.
 *
 * */

#include <iostream>

using namespace std;

int main() {
	int n, total = 0;
	cin >> n;

	// These ugly else if should be done in another way.
	if(n == 5) cout << 1;
	else if(n == 4) cout << 1;
	else if(n == 3) cout << 1;
	else if(n == 2) cout << 1;
	else if(n == 1) cout << 1;
	else {
		for(int i = 5; i >= 1; i--) {
			// To avoid negative numbers.
			if(n - i < 0) {
				continue;
			} else {
				n = n - i;
			}

			while(n >= 0) {
				total++;
				// To avoid negative numbers.
				if(n - i < 0) {
					break;
				} else {
					n = n - i;
				}
			} 
		}
		cout << total;
	}

	return 0;
}
