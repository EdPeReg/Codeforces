#include <iostream>
#include <set>

using namespace std;

int main() {
	int t;
	set<int> s;
	cin >> t;

	while(t--) {
		int n;
		cin >> n;

		for(int i = 0; i < n; i++) {
			int element;
			cin >> element;
			s.insert(element);
		}

		cout << s.size() << "\n";
		s.clear();
	}

	return 0;
}
