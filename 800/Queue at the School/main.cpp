// https://codeforces.com/problemset/problem/266/B
// Time: FUCK.

#include <iostream>

using namespace std;

int main() {
	string children;
	int n, s;
	cin >> n >> s >> children;

	while(s--) {
		for(int i = 1; i < n; ++i) {
			if(children[i] == 'G' and children[i-1] == 'B') {
				children[i] = 'B';
				children[i-1] = 'G';
				++i;
			}
		}
	}
	cout << children << '\n';

	return 0;
}
