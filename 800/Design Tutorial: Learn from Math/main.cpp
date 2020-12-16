// https://codeforces.com/problemset/problem/472/A
// Time: 30m.

/* It seems that, every no prime number is a composite number.
 * https://en.wikipedia.org/wiki/Composite_number
 * */

#include <iostream>
#include <vector>

int main() {
	std::vector<int> no_primes;
	int n;
	std::cin >> n;
	
	// Awful code! is not efficient to find if the number is not prime.
	// Definitely DON'T DO THIS. For smaller numbers is ok, bigger numbers no.
	for(size_t i = 4; i < n; ++i) {
		for(size_t j = 2; j < i; ++j) {
			if(i % j == 0) {
				no_primes.push_back(i);
				break;
			}
		}
	}

	// Find two numbers that accomplish the sum.
	for(size_t i = 0; i < no_primes.size(); ++i) {
		for(size_t j = i + 1; j < no_primes.size() - 1; ++j) {
			if(no_primes.at(i) + no_primes.at(j) == n) {
				std::cout << no_primes.at(i) << " " << no_primes.at(j) << '\n';
			}
		}
	}

	return 0;
}
