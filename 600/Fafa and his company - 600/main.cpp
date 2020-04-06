//https://codeforces.com/problemset/problem/935/A

/* We need to iterate from 1 to n, why 1? because it's the minimum
 * people you have.
 * When you are iterating, if you have n % i == 0, that means that 
 * you will have a leader, while the remainder it's 0, you will have
 * as many leaders, depending of the n workers. 
 *
 * */


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
