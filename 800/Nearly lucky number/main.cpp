// https://codeforces.com/problemset/problem/110/A
// Time: 36 min.
// Second try.

#include <iostream>
#include <string>

using namespace std;

int main() {
	bool isFour = false, isSeven = false;
	string n;
	cin >> n;

	for(int i = 0; i < n.size(); i++) {
		if(n.at(i) == '4') { 
			isFour = true; 
			continue;
		}
		if(n.at(i) == '7') { 
			isSeven = true;
		    continue;	
		}
		break;
	}

	if(isFour and isSeven) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}

	return 0;
}
