// https://codeforces.com/problemset/problem/749/A
// NOT COMPLETED.
// 1. 30 min

/* My idea was to have a list of number primes in a vector, but I couldn't figure
 * out how to have that prime list, also I think this can be done without having a vector. */

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	vector<int> vect;
	cin >> n;

	for(int i = 2; i < n; i++) {
		vect.push_back(i);
	}

	return 0;
}
