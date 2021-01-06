// https://codeforces.com/problemset/problem/1348/A
// Time: 50 min.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int t, n;
	cin >> t;

	while(t--) {
		cin >> n;
		int weights[n];
		int a[n];
		int b[n];
		int sum_a = 0, sum_b = 0;

		int aux = 1;
		for(int i = 0; i < n; ++i) {
			weights[i] = pow(2,aux++);
		}

		a[0] = weights[n-1];
		for(int i = 1; i < n/2; ++i) {
			a[i] = weights[i-1];
		}
		for(int i = n/2-1; i < n-1; ++i) {
			b[i] = weights[i];
		}
		for(int i = 0; i < n/2; ++i) {
			sum_a += a[i];
		}
		for(int i = n/2-1; i < n-1; ++i) {
			sum_b += b[i];
		}
		cout << sum_a - sum_b << '\n';
	}

	return 0;
}
