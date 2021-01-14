// https://codeforces.com/problemset/problem/1353/A
// Time: 1h.

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int t,n,m;
	cin >> t;

	while(t--) {
		cin >> n >> m;
		cout << min(2,n-1)*m << '\n';
	}

	return 0;
}
