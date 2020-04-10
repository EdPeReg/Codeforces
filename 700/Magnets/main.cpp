#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, group = 0;
	cin >> n;

	vector<int> m;
	for(int i(0); i < n; i++) {
		int gm;
		cin >> gm;
		m.push_back(gm);
	}

	for(int i(0); i < n - 1; i++) {
		if(m.at(i) != m.at(i + 1)) {
			group++;
		}
	}
	cout << group + 1 << "\n";


	return 0;
}
