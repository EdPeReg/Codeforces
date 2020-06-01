#include <iostream>
#include <string>

using namespace std;

int main() {
	//string abc = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	int n;
	string str;
	cin >> n;
	cin >> str;

	//int j = 0;
	if(n < 26) {
		cout << "NO\n";
	} else {
		cout << "YES\n";
		//for(int i = 0; i < n; i++) {
			//if(str[i] <= 'z' and str[i] >= 'a'
			   //or str[i] <= 'Z' and str[i] >= 'A')
				//cout << j++ << "\n";
		}

	return 0;
}
