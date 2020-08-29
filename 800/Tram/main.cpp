// https://codeforces.com/problemset/problem/116/A
// Time: 30 min.

#include <iostream>

using namespace std;

int main() {
	int stops;
	cin >> stops;

	int total = 0;
	int max = 0;
	bool firstTime = true;
	while(stops--) {
		int out, in;
		cin >> out >> in;
		
		// In the first stop, the maximum number of seats are the people
		// who enters in the tram.
		if(firstTime) {
			total = in;
			max = total;
			firstTime = false;
		} else {
			// After that first stop, each stop we save how many people were in the tram,
			// the maximum amount of people that were in the tram, are the maximum amount of
			// tram's capacity.
			total = total - out + in;
			if(total > max) {
				max = total;
			}
		}
	}

	cout << max << '\n';

	return 0;
}
