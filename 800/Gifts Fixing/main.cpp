// https://codeforces.com/problemset/problem/1399/B
// Time: 30 min.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--) {
		int n;
		long long sum = 0;
		cin >> n;
		vector<int> c(n);
		vector<int> o(n);

		for(auto& e : c) cin >> e;
		for(auto& e : o) cin >> e;

		for(int i = 0; i < n; ++i) {
			sum += max(c[i] - *min_element(c.begin(),c.end()), o[i] - *min_element(o.begin(),o.end()));
		}
		cout << sum << '\n';
	}
}
