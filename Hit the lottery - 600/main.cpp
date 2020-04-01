#include <iostream>

int main() {
	int n, total = 0;
	std::cin >> n;

	if(n / 100 != 0) {
		total += n / 100;	
		int aux = n / 100;
		n -= 100 * aux;
	} 
	if(n / 20 != 0) {
		total += n / 20;
		int aux = n / 20;
		n -= 20 * aux;
	} 
	if(n / 10 != 0) {
		total += n / 10;
		int aux = n / 10;
		n -= 10 * aux;
	} 
	if(n / 5 != 0) {
		total += n / 5;
		int aux = n / 5;
		n -= 5 * aux;
	} 
	if(n / 1 != 0) {
		total += n / 1;
		int aux = n / 1;
		n -= 1 * aux;
	}
	std::cout << total;

	return 0;
}
