#include <iostream>
#include <cmath>
#include <algorithm>

int main() {
	int t, n;
	std::cin >> t;

	while(t--) {
		std::cin >> n;
		int arr[n];
		int diff[n];
		for(int i = 0; i < n; ++i) {
			std::cin >> arr[i];
		}
		std::sort(arr,arr+n);
	
		int j = 0;
		for(int i = n-1; i > 0; --i) {
			diff[j++] = arr[i] - arr[i-1]; 
		}

		std::sort(diff,diff+(n-1));
		std::cout << diff[0] << '\n';
	}

	return 0;
}
