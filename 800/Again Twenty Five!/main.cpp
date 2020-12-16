// https://codeforces.com/problemset/problem/630/A
// Time 30 min.

/* Yeah, basically I couldn't figure out how to recieve such big numbers,
 * but REALLY big. */

#include <iostream>
#include <cmath>
#include <sstream>

int main() {
	size_t n;
	std::cin >> n;
	double result = pow(5,n); // Here's the problem, return INF with BUG numbers.
	result /= 100;
	
	std::ostringstream strs;
	strs << result;
	std::string r = strs.str();

	size_t pos = r.find(".");
	std::cout << r.substr(pos + 1);

	return 0;
}
