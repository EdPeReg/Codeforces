// https://codeforces.com/problemset/problem/448/A
// Time 30m.



#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
	vector<int> cups, medals;
	int n;

	/* The idea for the next two for loops was to have an individual
	 * vector for cups and medals, in that way I can do the sum easily.*/
	for(int i = 0; i < 3; i++) {
		int cup;
		cin >> cup;
		cups.push_back(cup);
	}

	for(int i = 0; i < 3; i++) {
		int medal;
		cin >> medal;
		medals.push_back(medal);
	}
	cin >> n;

	int sumCups = accumulate(cups.begin(), cups.end(), 0);
	int sumMedals = accumulate(medals.begin(), medals.end(), 0);
	
	// I only validate the condition of the how many cups and medals are
	// permitted in each shelf, but not about the number of shelfs.
	if(sumCups <= 5 and sumMedals <= 10 and n != 1) {
		cout << "YES\n";	
	} else {
		cout << "NO\n";	
	}

	return 0;
}
