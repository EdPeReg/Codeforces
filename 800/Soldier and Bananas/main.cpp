// https://codeforces.com/problemset/problem/546/A
// Time: 10m.

#include <iostream>

using namespace std;

int main() {
	int k,n,w, sum = 0;
	cin >> k >> n >> w;

	for(int i = 1; i <= w; ++i) {
		sum += i * k;
	}

	if(sum-n < 0) {
		cout << 0 << '\n'
	} else {
		cout << sum - n << '\n';
	}

	return 0;
}
