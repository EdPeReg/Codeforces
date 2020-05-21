#include <iostream>

using namespace std;

int main() {
	int n, r;
	bool t;
	cin >> n;

	r = n % 10;
	n = n / 10;
	while(r == 7 or r == 4) {
		r = n % 10;
		n = n / 10;
		t = true;

		if(n == 0) {
			t = false;	
		}
			
	}

	if(t) 
		cout << "NO\n";
	else
		cout << "YES\n";

	return 0;
}
