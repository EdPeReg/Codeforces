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
		if(arr.at(i + 1) > arr.at(i)) {
			answer.push_back(i);
		} else {
			answer.clear();
		}
	}

	cout << answer.size() + 1 << "\n";


	return 0;
}
