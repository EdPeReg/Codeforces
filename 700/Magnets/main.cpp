// https://codeforces.com/problemset/problem/344/A

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, group = 0;
	cin >> n;

	vector<int> m;
	for(int i(0); i < n; i++) {
		int gm; // Group magnet.
		cin >> gm;
		m.push_back(gm);
	}

	for(int i(0); i < n - 1; i++) {
		// Check if the next element of the vector is different, if it is, there is
		// a new magnet group.
		if(m.at(i) != m.at(i + 1)) {
			group++;
		}
	}
	// To have the correct magnets group, if you don't add + 1, you will not take in 
	// consideration the last group.
	cout << group + 1 << "\n";


	return 0;
}
