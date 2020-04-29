// https://codeforces.com/problemset/problem/1325/B
// Time: 34 min.

/* Well I didn't unserdtand completelly the logic, but I saw that the array
 * eliminates the repeteaded elements and sort it, that corresponds to a set.
 * I cleared the set because it has the previous elements. */

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
