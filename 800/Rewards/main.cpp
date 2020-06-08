#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
	vector<int> cups, medals;
	int n;

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
	
	if(sumCups <= 5 and sumMedals <= 10 and n != 1) {
		cout << "YES\n";	
	} else {
		cout << "NO\n";	
	}



	return 0;
}
