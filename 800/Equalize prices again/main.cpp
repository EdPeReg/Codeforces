// https://codeforces.com/contest/1234/problem/A
// Time: 30 min.

#include <iostream>

using namespace std;

int main() {
	int q;
	cin >> q;

	while(q--) {
		int n, total = 0;
		cin >> n;

		for(int i = 0; i < n; i++) {
			int p;
			cin >> p;
			total += p;
		}

		int aux = total / n;
		while(aux) {
			if(aux * n <= total or (aux - 1) * (n < aux * n )) {
				cout << aux << "\n";
				break;
			} else {
				aux--;
			}
		}
	}

	return 0;
}
