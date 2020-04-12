#include <iostream>

using namespace std;

int main() {
	bool flag = false;
	int n;
	char str;
	cin >> n;

	char matrix[n][5];

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < 5; j++) {
			cin >> str;
			matrix[i][j] = str;
		}
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < 5; j++) {
			if(matrix[i][j] == 'O' and matrix[i][j + 1] == 'O') {
				cout << "YES";
				flag = true;
				matrix[i][j] = '+';
				matrix[i][j + 1]  = '+';
				break;
			}
		}
		if(flag == true) break;
	}
	cout << "\n";

	if(flag == false) 
		cout << "NO\n";
	else {
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < 5; j++) {
				cout << matrix[i][j];
			}
			cout << "\n";
		}
	}

	return 0;
}
