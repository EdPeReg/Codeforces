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
