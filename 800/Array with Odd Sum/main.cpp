// https://codeforces.com/problemset/problem/1296/A
// Time: 11 min.

#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> vect;
	int t, x, n;
	cin >> t;

	while(t--) {
		cin >> x;
		for(int i = 0; i < x; ++i) {
			cin >> n;
			vect.push_back(n);
		}

		int j = 0;
		bool find = false;
		for(int i = 0; i < x; ++i) {
			for(int j = 1; j < x; ++j) {
				if((vect.at(i) + vect.at(j)) % 2 == 1) {
					cout << "YES\n";
					find = true;
					break;
				} else {
					find = false;
				}
			}
			if(find) {
				break;
			}
		}
		if(!find) {
			cout << "NO\n";
		}
		vect.clear();
	}

	return 0;
}
