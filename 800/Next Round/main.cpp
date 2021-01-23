#include <iostream>

using namespace std;

int main() {
	int k, n, sum = 0;
	cin >> n >> k;

	int arr[n];
	for(int& e : arr) cin >> e;

	for(int i = 0; i < n; ++i) {
		if(arr[i] >= arr[k-1] and arr[i] > 0) ++sum;
	}
	cout << sum << '\n';

	return 0;
}
