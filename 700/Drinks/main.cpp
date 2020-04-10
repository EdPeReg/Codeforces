// https://codeforces.com/problemset/problem/200/B

/* Basically it's just a rule of three. 
 * 
 * 3    100%
 * 200  x
 *
 * */

#include <iostream>

using namespace std;

int main() {
	int n, total = 0;
	cin >> n;

	// To sum the the volume fraction of orange juice.
	for(int i = 0; i < n; i++) {
		double drink;
		cin >> drink;
		total += drink;
	}
	// To have the correct decimal place, we multiply by 100 the n, with this
	// you can move the decimal point to the left n places, with 100 we move 
	// it two places to the left.
	printf("%.12f\n", (double)total * 100 / (n * 100));
		
	return 0;
}
