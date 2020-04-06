// https://codeforces.com/problemset/problem/263/A
// not completed.

#include <iostream>

int main() {
	int matrix[5][5];
	int total = 0;

	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			std::cin >> matrix[i][j];
		}
	}

	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			std::cout << matrix[i][j];
			
			// To know if the 1 is not in the center.
			if(!((i == 2 and j == 2) and (matrix[i][j] == 1 and matrix[i][j] == 1))) {
				std::cout << "no esta";
			}
		}
		std::cout << "\n";
	}
	std::cout << total << "\n";

	return 0;
}
