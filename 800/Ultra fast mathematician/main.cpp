// https://codeforces.com/problemset/problem/61/A
// Time: 49 min.


#include <iostream>
#include <string>

using namespace std;

int main() {
	string a, b, answer;
	cin >> a >> b;
	
	for(size_t i = 0; i < a.size(); i++) {
		if(a.at(i) == b.at(i)) {
			answer += "0";
		} else {
			answer += "1";
		}
	}

	cout << answer << "\n"; 

	return 0;
}
