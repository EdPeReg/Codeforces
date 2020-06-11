// https://codeforces.com/problemset/problem/1311/A
// Time: 30m

#include <iostream>

/* The general idea was to obtain the maximum number, after that, do the 
 * corresponding operations.
 * After that, analize if the number is even or odd, and depending of that
 * do the corresponding operations. */

using namespace std;

int main() {
	int t, moves = 0;
	cin >> t;

	while(t--) {
		int a, b;
		cin >> a >> b;

		if(a == b) {
			break;
		} else if(a > b) { // First the "easiest"
			int aux = a - b;

			// Aux should change, and if the while is false it means we
			// reach our objective. 
			while(aux != b) {
				if(aux % 2 == 0) {
					aux = a - aux;
					moves++;
				} else {
					aux = a - aux;
					aux = aux + (b - aux);
					moves++;
				}
			}

			if(aux == b) {
				cout << moves << "\n";
			}
		}
	}

	cout << moves << "\n";

	return 0;
}
