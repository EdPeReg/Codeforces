// https://codeforces.com/problemset/problem/1296/A
// Time: 1h:30m.

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
	vector<int> vect;
	int t, x, n;
	cin >> t;

	while(t--) {
		int sum = 0;
		cin >> x;
		bool even = false, odd = false;
		for(int i = 0; i < x; ++i) {
			cin >> n;
			if(n % 2 == 1) {
				odd = true;
			} else if(n % 2 == 0) {
				even = true;
			}
			vect.push_back(n);
		}
		sum = accumulate(vect.begin(), vect.end(), 0);
		if(sum % 2 == 1) {
			cout << "YES\n";
		} else if(even != odd) {
			cout << "NO\n";
		} else {
			cout << "YES\n";
		}
		vect.clear();
	}

	return 0;
}
