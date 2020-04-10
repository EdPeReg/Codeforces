// https://codeforces.com/problemset/problem/200/B

/* Another way it's just to compute the average. */

#include <iostream>

using namespace std;

int main() {
	int n;
	double drink, total = 0.0 ;
	cin >> n;

	// To sum the the volume fraction of orange juice.
	for(int i = 0; i < n; i++) {
		cin >> drink;
		total += drink;
	}
	printf("%.12f\n", total / n);
		
	return 0;
}
