#include <iostream>

using namespace std;

int main() {
	bool isBlackWhite = true;
	int n, m;
	cin >> n >> m;
	char pixels[n][m];

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> pixels[i][j];	
		}
	}

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(pixels[i][j] != 'W' and pixels[i][j] != 'G' and pixels[i][j] != 'B') {
				isBlackWhite = false;
			} 
		}
	}

	if(isBlackWhite) {
		cout << "#Black&White\n";
	} else {
		cout << "#Color\n";
	}

	return 0;
}
