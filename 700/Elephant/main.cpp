// https://codeforces.com/problemset/problem/617/A

/* 
 * It's optimal to do the biggest possible step everytime. So elephant should do several steps by distance 5 
 * and one or zero step by smaller distance. Answer equals to x/5 (rounding upward). 
 *
 * */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double n;
	cin >> n;

	cout << ceil(n / 5);

	return 0;
}
