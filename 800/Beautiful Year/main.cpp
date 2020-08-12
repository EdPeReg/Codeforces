// https://codeforces.com/problemset/problem/271/A
// Time: 34 min.

#include <iostream>
#include <string>

using namespace std; 

int main() {
	int year;
	cin >> year;

	while(true) {
		++year;

		int firstDigit = year / 1000;
		int secondDigit = year / 100 % 10;
		int thirdDigit = year / 10 % 10;
		int fourthDigit = year % 10;

		if(firstDigit != secondDigit and firstDigit != thirdDigit and firstDigit != fourthDigit
				and secondDigit != thirdDigit and secondDigit != fourthDigit and thirdDigit != fourthDigit) {
			break;
		}
	}
	cout << year;

	return 0;
}
