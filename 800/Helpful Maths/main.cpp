// https://codeforces.com/problemset/problem/339/A
// Time: 20 min.

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	string str;
	cin >> str;
	str.erase(remove(str.begin(), str.end(), '+'), str.end());
	std::sort(str.begin(), str.end());

	for(int i = 1; i < str.size(); i += 2) {
		str.insert(i,"+");
	}
	cout << str << '\n';

	return 0;
}

