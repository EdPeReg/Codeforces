#include <iostream>
#include <cmath>
#include <algorithm>

int main() {
	int t, n;
	std::cin >> t;

	while(t--) {
		std::cin >> n;
		int arr[n];
		for(int i = 0; i < n; ++i) {
			std::cin >> arr[i];
		}
		std::sort(arr,arr+n);

		if(n == 2) {
			std::cout << abs(arr[0] - arr[1]) << '\n';
		} else if(n % 2) {
			std::cout << abs(arr[n/2] - arr[n/2 + 1]) << '\n';
		} else {
			std::cout << abs(arr[(n-1)/2] - arr[(n-1)/2 - 1]) << '\n';
		}
	}

	return 0;
}
