#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int n;
	int total = 0;
	vector<int> vect;
	cin >> n;

	while(n--) {
		int number;
		cin >> number;
		vect.push_back(number);
	}

	vector<int>::iterator max;
	max = max_element(vect.begin(), vect.end());		

	for(int number : vect) {
		total += *max - number;
	}

	cout << total << "\n";

	return 0;
}
