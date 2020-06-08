// https://codeforces.com/problemset/problem/9/A
// Time: 30 m.

/* I couldn't figure out how to convert to fraccional part. */

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	const double prob = 0.17;
	int y, w, greatest;
	cin >> y >> w;

	if(y == w) {
		cout << 1 << "/" << 1 << "\n";	
	} else {
		greatest = max(y, w);	
		double aux = 6 - greatest + 1;
		cout << aux << "\n";

		cout << prob * aux;

	}

}
