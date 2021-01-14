#include <iostream>

using namespace std;

int main() {
	long long t,n,m;
	cin >> t;

	while(t--) {
		cin >> n >> m;
		if(n == 1) {
			cout << 0 << '\n';
		} else if(n == 2) {
			cout << m << '\n';
		} else {
			cout << m*2 << '\n';
		}
	}

	return 0;
}
