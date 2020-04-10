// Codeforce solution.

/* 
 * The first number in answer (number of days which Vasya can dress fashionably) is min(a, b) 
 * because every from this day he will dress one red sock and one blue sock. After this Vasya will 
 * have either only red socks or only blue socks or socks do not remain at all. Because of 
 * that the second number in answer is max((a - min(a, b)) / 2, (b - min(a, b)) / 2).
 * Asymptotic behavior of this solution — O(1).
 * */

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int red, blue;
	cin >> red >> blue;

	cout << min(red, blue) << " ";
	cout << max((red - min(red, blue)) / 2, (blue - min(red, blue)) / 2) << "\n";

	return 0;
}
