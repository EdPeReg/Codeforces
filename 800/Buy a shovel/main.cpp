// https://codeforces.com/problemset/problem/732/A
// Time: 43 min.

/* In the examples that are provided we can see that:
 *
 * 117 3
 * 9
 *
 * 117 * 9 = 1053  
 *
 * Here you can see that 1053, the last digit matches with the r value (3).
 *
 * 15 2
 * 2
 *
 * 15 * 2 = 30
 *
 * Here 30 ends with a 0.
 *
 * So my answer was, I iterated from 1 to n, assuming that 1 to n is the number
 * of shovels he needs to buy.
 *
 * 117 * 1 = 117 -> 7 doesn't match with r value or 0.
 * 117 * 2 = 234 -> 4 doesn't match with r value or 0.
 * .
 * .
 * .
 * 117 * 9 = 1053 -> 3 match with r valur. Answer is 9 shovels.
 *
 * */

#include <iostream>

using namespace std;

int main() {
	int k, r, min = 1;
	cin >> k >> r;

	while(true) {
		int aux = k * min;

		if(aux % 10 == 0 or aux % 10 == r) {
			cout << min << "\n";
			break;
		} 
		min++;
	}
		
	return 0;

}
