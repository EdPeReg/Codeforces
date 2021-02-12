// https://codeforces.com/problemset/problem/110/A
// Time: 36 min.
// Second try.

#include <iostream>

using namespace std;

int main() {
	size_t n, cont = 0;
	cin >> n;

	while(n != 0) {
		if(n % 10 == 4 or n % 10 == 7) ++cont;
		n /= 10;
	}

	if(cont == 4 or cont == 7) cout << "YES\n";
	else cout << "NO\n";
}
