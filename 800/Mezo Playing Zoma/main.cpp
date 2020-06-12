#include <iostream>
#include <cmath>

using namespace std;

int main() {
	string moves;
	int n, r = 0, l = 0;
	cin >> n;
	cin >> moves;

	for(size_t i = 0; i < moves.size(); i++) {
		if(moves.at(i) == 'R') r++;
		if(moves.at(i) == 'L') l--;
	}

	int dist = abs(l - r);
	cout << dist + 1 << "\n";

	return 0;
}
