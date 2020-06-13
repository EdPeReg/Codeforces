// https://codeforces.com/problemset/problem/1343/B
// Time: 2h:35m

// TIME LIMITED EXCEEDED.

#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> vectEven, vectOdd, vectAnswer;
	int t;
	cin >> t;
	
	while(t--) {
		vectEven.clear();
		vectOdd.clear();
		vectAnswer.clear();
		bool yes = false;
		long sumEven = 0, sumOdd = 0;
		int n;
		cin >> n;
		int aux = n / 2;

		/* The next two for loops it was to have a vector of even numbers
		 * and a vector of odd numbers. */
		for(int i = 1; i <= aux * 2; i++) {
			if(i % 2 == 0) {
				vectEven.push_back(i);
				sumEven += i;
			}
		}

		/* Because the even vector remains the same, we need to generate
		 * an odd vector of n size, to see if the next element will 
		 * accomplish the sum. */
		for(int i = 1; i <= n * 2; i++) {
			if(i % 2 != 0) {
				vectOdd.push_back(i);
			}
		}

		vectAnswer.insert(vectAnswer.end(), vectEven.begin(), vectEven.end());

		size_t i = 0;
		while(i < vectOdd.size()) {
			sumOdd += vectOdd.at(i);	

			if(sumOdd == sumEven) {
				vectOdd.erase(vectOdd.begin() + i + 1, vectOdd.end());
				yes = true;
				break;
			} else if(sumOdd > sumEven) {
				if(vectOdd.size() != 1) {
					vectOdd.erase(vectOdd.begin() + i - 1);
				} else {
					break;
				}
				i = 0;
				sumOdd = 0;
			} else {
				i++;
			}
		}

		vectAnswer.insert(vectAnswer.end(), vectOdd.begin(), vectOdd.end());
		if(yes and vectOdd.size() == vectEven.size()) {
			cout << "YES\n";
			for(size_t i = 0; i < vectAnswer.size(); i++) {
				cout << vectAnswer[i] << " ";
			}
		} else {
			cout << "NO\n";
		}
	}

	return 0;
}
