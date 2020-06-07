// https://codeforces.com/problemset/problem/61/A
// Time: 30 min.

/* My problem was to think that the xor operation will work correctly 
 * when you enter a binary number, it doesn't work properly. */

#include <iostream>
#include <bitset>

using namespace std;

int main() {
	long long a, b, res;
	cin >> a >> b;
	res = a ^ b;
	
	bitset<7> bin(res);

	cout << res << "\n"; 

	return 0;
}
