//https://codeforces.com/problemset/problem/677/A

/* 
 * You only need to check if each person should bend or not, depending 
 * of the fence height.
 * */

#include <iostream>

using namespace std;

int main() {
	int n, h, total = 0;
	cin >> n >> h;

	while(n--) {
		int p;
		cin >> p;

		if(p <= h) total += 1;
		else total += 2;
	}
	cout << total << "\n";

	return 0;
}
