#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> arr;
	vector<int> answer;
	int n;
	cin >> n;

	for(int i = 0; i < n; i++) {
		int num;
		cin >> num;
		arr.push_back(num);
	}

	for(size_t i = 0; i < arr.size() - 1; i++) {
		// This only works when the elements analized are the last, if a subarray
		if(arr.at(i + 1) > arr.at(i)) {
			answer.push_back(i);
			// The idea was also to include the previous element but it doesn't
			// work properly.
			//answer.push_back(i + 1);
		} else {
			// The problem with this, if the subarray is at any other part besides
			// the end, that subarray is deleted.
			// 1 2 3 1 -> the subarray 1 2 3 is deleted.
			answer.clear();
		}
	}

	cout << answer.size() + 1 << "\n";

	return 0;
}
