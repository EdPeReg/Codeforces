/* I decided to have a flag (f) to know when it's going to be HARD
 * or not, it should be initialized, if you don't know, when the answer
 * is EASY, f will have value garbage. */

#include <iostream>

int main() {
	int n, i, f = 0;
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
