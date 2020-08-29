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
		
		if(firstTime) {
			total = in;
			max = total;
			firstTime = false;
		} else {
			total = total - out + in;
			if(total > max) {
				max = total;
			}
		}
	}

	cout << max << '\n';

	return 0;
}
