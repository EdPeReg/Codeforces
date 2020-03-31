#include <iostream>

int main() {
	int n, i, f;
	std::cin >> n;

	while(n--) {
		std::cin >> i;
		if(i == 1) {
			std::cout << "HARD";
			f = 1;
			break;
		} 
	}

	if(f != 1)
		std::cout << "EASY";

	return 0;
}
