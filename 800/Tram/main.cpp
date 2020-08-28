// https://codeforces.com/problemset/problem/116/A
// Time: 23 min.

#include <iostream>

using namespace std;

int main() {
	int stops;
	cin >> stops;

	int total = 0;
	int max = 0;
	while(stops--) {
		int out, in;
		cin >> out >> in;
		
		if(total == 0) {
			total = in;
			max = total;
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
