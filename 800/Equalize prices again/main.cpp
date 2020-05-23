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

		if(total % n == 0) {
			cout << total / n << "\n";
		} else if(total % n != 0) {
			cout << total % n << "\n";
		}
	}

	return 0;
}
