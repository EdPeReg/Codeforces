// https://codeforces.com/problemset/problem/381/A
// Time: 35 min.

/* Basically, each person will chose the card with the highest number, but
 * they can only chose the card that is to the leftmost or rightmost.
 * Just get the greatest number, delete that card and sum it to its corresponding player. 
 * What about if it's 10,000,000 cards? doing the operations delete could be a bad idea. */

#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main() {
	deque<int> cards;
	int n, cardNumber;
	cin >> n;

	while(n--) {
		cin >> cardNumber;
		cards.push_back(cardNumber);
	}

	int serejaSum{0}, dimaSum{0};
	bool serejaTurn{true};
	while(!cards.empty()) {
		int leftmost = cards.front();
		int rightmost = cards.back();

		if(serejaTurn) {
			if(leftmost > rightmost) {
				serejaSum += leftmost;
				cards.erase(cards.begin());
				serejaTurn = false;
			} else {
				serejaSum += rightmost;
				cards.erase(cards.end());
				serejaTurn = false;
			}
		} else {
			if(leftmost > rightmost) {
				dimaSum += leftmost;
				cards.erase(cards.begin());
				serejaTurn = true;
			} else {
				dimaSum += rightmost;
				cards.erase(cards.end());
				serejaTurn = true;
			}
		}
	}

	cout << serejaSum << " " << dimaSum;
	return 0;
}
