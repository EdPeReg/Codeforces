#include <iostream>
#include <cmath>

int main() {
	int t, n;
	std::cin >> t >> n;

	while(t--) {
		int arr[n];
		for(int i = 0; i < n; ++i) {
			std::cin >> arr[i];
		}

		if(n % 2) {
			std::cout << abs(arr[n/2] - arr[n/2 + 1]);
		} else {
			std::cout << abs(arr[(n-1)/2] - arr[(n-1)/2 - 1]);
		}
	}

	return 0;
}
