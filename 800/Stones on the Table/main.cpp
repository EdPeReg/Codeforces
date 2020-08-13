// https://codeforces.com/problemset/problem/266/A
// Time: 20 min.

#include <iostream>

using namespace std; 

int main() {
	int n;
	cin >> n;
	string stones;
	cin >> stones;

	int counter = 0;
	for(int i = 0; i < n - 1; i++) {
		int nextPos = i + 1;
		if(stones.at(i) == stones.at(nextPos)) {
			++counter;
		}
	}
	cout << counter << '\n';


	return 0;
}
