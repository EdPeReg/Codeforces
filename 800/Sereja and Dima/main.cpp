// https://codeforces.com/problemset/problem/381/A
// Time: 35 min.

/* Basically, each person will chose the card with the highest number, but
 * they can only chose the card that is to the leftmost or rightmost.
 * For this, you have two "pointers" where will point to the rightmost position and leftmost position,
 * instead of deleting the greatest card, just increment the leftmost pointer or decrement the rightmost pointer. 
 * This is good, becase you are avoiding the delete operation. */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> cards;
	int n, cardNumber;
	cin >> n;

	while(n--) {
		cin >> cardNumber;
		cards.push_back(cardNumber);
	}

	bool serejaTurn{true};
	int serejaSum{0}, dimaSum{0};
	int leftmostPos{0};
	int rightmostPos = cards.size() - 1;

	while(leftmostPos <= rightmostPos) {
		if(cards[leftmostPos] > cards[rightmostPos]) {
			if(serejaTurn) {
				serejaSum += cards[leftmostPos];
				serejaTurn = false;
				leftmostPos++;
			} else {
				dimaSum += cards[leftmostPos];
				serejaTurn = true;
				leftmostPos++;
			}
		} else {
			if(serejaTurn) {
				serejaSum += cards[rightmostPos];
				serejaTurn = false;
				rightmostPos--;
			} else {
				dimaSum += cards[rightmostPos];
				serejaTurn = true;
				rightmostPos--;
			}
		}
	}

	cout << serejaSum << " " << dimaSum;
	return 0;
}
