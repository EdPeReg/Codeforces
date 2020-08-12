// https://www.google.com/search?channel=fs&client=ubuntu&q=stopwatch

#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	int numberProblemsSolved = 0;
	while(n--) {
		int p, v, t;
		cin >> p >> v >> t;

		if((p == 1 and v == 1) or (p == 1 and t == 1) or (v == 1 and p == 1) or (v == 1 and t == 1)) {
			++numberProblemsSolved;
		}
	}

	cout << numberProblemsSolved;

	return 0;
}
