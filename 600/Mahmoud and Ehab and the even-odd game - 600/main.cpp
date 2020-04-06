//https://codeforces.com/problemset/problem/959/A

/* Basically you need to know if the number is even or odd. */

#include <iostream>


int main() {
	int n;
	std::cin >> n;

	if(n&1) {
		std::cout << "Ehab";	
	} else {
		std::cout << "Mahmoud";
	}


	return 0;
}
