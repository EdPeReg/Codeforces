// https://codeforces.com/problemset/problem/707/A
// Time: 35 min.

/* It's going to be black and white if in the pixels you find:
 * - W (white)
 * - B (black)
 * - G (gray) 
 *
 * If you find other color, then is Color. */


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
		// Maybe you can use a break no improve code performance. 
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
