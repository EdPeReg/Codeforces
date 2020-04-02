#include <iostream>

int main() {
	int n, i = 1, total = 0;
	std::cin >> n;

	while(i < n) {
		if(n % i == 0) total++;
		i++;
	}
	std::cout << total << "\n";

	return 0;
}
