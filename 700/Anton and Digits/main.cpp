#include <iostream>

using namespace std;

int main() {
	int dig2, dig3, dig5, dig6;
	int min = 0, total = 0;
	cin >> dig2 >> dig3 >> dig5 >> dig6;

	min = dig2;
	if(dig2 > dig5) {
		min = dig5;
	} else if(dig2 > dig6) {
		min = dig6;
	}
	total = 256 * min;

	dig2 -= min;
	dig5 -= min;
	dig6 -= min;

	min = dig2;
	if(dig2 > dig3) {
		min = dig3;
	}

	total = total + min * 32;

	cout << total << "\n";
	return 0;
}
