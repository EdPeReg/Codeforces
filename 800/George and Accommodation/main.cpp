// https://codeforces.com/problemset/problem/467/A

#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	int total = 0;
	while(n--) {
		int p, q;
		cin >> p >> q;

		if(p < q) {
			++total;
		}
	}
	cout << total << '\n';

	return 0;
}
