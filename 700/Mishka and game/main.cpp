// https://codeforces.com/problemset/problem/703/A
// 1. 13 min.

/* Straigh forward, you only need to compare both numbers, and depending of that, increment
 * mishka or chris. */

#include <iostream>
#include <utility>

using namespace std;

int main() {
	int n, mishka = 0, chris = 0;
	cin >> n;

	while(n--) {
		int n1, n2;
		pair<int, int> p; 
		cin >> n1 >> n2;

		p.first = n1;
		p.second = n2;

		if(p.first > p.second) 
			mishka++;
		else if(p.first < p.second)
			chris++;
	}

	if(mishka > chris)
		cout << "Mishka\n";
	else if(mishka < chris) 
		cout << "Chris\n";
	else
		cout << "Friendship is magic!^^\n";

	return 0;
}
