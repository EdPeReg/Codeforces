#include <iostream>
#include <cmath>
#include <sstream>

int main() {
	size_t n;
	std::cin >> n;
	double result = pow(5,n);
	result /= 100;
	
	std::ostringstream strs;
	strs << result;
	std::string r = strs.str();

	size_t pos = r.find(".");
	std::cout << r.substr(pos + 1);

	return 0;
}
