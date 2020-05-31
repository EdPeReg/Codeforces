#include <iostream>

using namespace std;

int main() {
	int n, numChr = 0;
	string str;
	cin >> n >> str;
	
	for(int i = 0; i < str.size() - 2; i++) {
		if(str.at(i) == 'x' and str.at(i + 1) == 'x' and str.at(i + 2) == 'x') {
			numChr++;
		}
	}

	cout << numChr << "\n";
	return 0;
}
