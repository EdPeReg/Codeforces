// https://codeforces.com/problemset/problem/1343/B
// Time: 30m

#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> vectEven, vectOdd;
	int t;
	cin >> t;
	
	while(t--) {
		int n, sumEven = 0, sumOdd = 0;
		cin >> n;
		int aux = n / 2;

		/* The next two for loops it was to have a vector of even numbers
		 * and a vector of odd numbers. */
		for(size_t i = 1; i <= aux * 2; i++) {
			if(i % 2 == 0) {
				vectEven.push_back(i);
				sumEven += i;
			}
		}

		/* Because the even vector remains the same, we need to generate
		 * an odd vector of n size, to see if the next element will 
		 * accomplish the sum. */
		for(size_t i = 1; i <= n * 2; i++) {
			if(i % 2 != 0) {
				//sumOdd += i;
				vectOdd.push_back(i);
			}
		}

		cout << sumEven << "\n";
		//cout << sumOdd << "\n";

		/* The idea was to see if the first element of the odd vector
		 * plus the second element was the same that the sumEven. */
		for(int i = 0; i < vectOdd.size() - 1; i++) {
			int sum = vectOdd.at(i) + vectOdd.at(i + 1);
			if(sum  != sumEven) {
					
			}	
		}

	}

	return 0;
}
