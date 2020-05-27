#include <iostream>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	char pixels[n][m];

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> pixels[i][j];	
		}
	}

	if(pixels[0][0] == 'W') {
		cout << "#Black&White\n";
	} else {
		cout << "#Color\n";
	}

	return 0;
}
