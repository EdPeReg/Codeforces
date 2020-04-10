#include <iostream>

using namespace std;

int main() {
	int n, total = 0;
	cin >> n;

	for(int i = 0; i < n; i++) {
		double drink;
		cin >> drink;
		total += drink;
	}
	printf("%.12f\n", (double)total * 100 / (n * 100));
		
	return 0;
}
