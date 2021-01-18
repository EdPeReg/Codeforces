// https://codeforces.com/contest/1360/problem/B
// Time 1h.

#include <iostream>
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
		// Is necessary to sort our array to get the minimum difference between the numbers.
		std::sort(arr,arr+n);
	
		int j = 0;
		for(int i = n-1; i > 0; --i) {
			// Store the difference that exist between numbers, starting from out last element of our array.
			// To avoid negative numbers.
			diff[j++] = arr[i] - arr[i-1]; 
		}

		// n-1 to not exceed your array limit.
		std::sort(diff,diff+(n-1));
		// The minimum difference will be our answer.
		std::cout << diff[0] << '\n';
	}

	return 0;
}
