#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--) {
		int n;
		long long sum = 0;
		cin >> n;
		int c[n], o[n];

		for(int i = 0; i < n; ++i) {
			cin >> c[i];
		}

		for(int i = 0; i < n; ++i) {
			cin >> o[i];
		}

		for(int i = 0; i < n; ++i) {
			sum += max(c[i] - *min_element(c,c+n), o[i] - *min_element(o,o+n));
		}
		cout << sum << '\n';
	}
}
