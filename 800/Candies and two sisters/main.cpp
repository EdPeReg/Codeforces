#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--) {
		int aux = 1, n, distr = 0;
		cin >> n;

		n--;
		while(n-- > aux++) {
			distr++;
		}
		cout << distr << "\n";
	}

	return 0;
}
