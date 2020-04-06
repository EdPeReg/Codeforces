//https://codeforces.com/problemset/problem/1223/A

/* 
 * Well, maybe one step is to divide the number by 2.
 *
 * Like this:
 *
 * n  = 5
 * 5 / 2 = 2
 *
 * Once you divided by 2, you substract that result to n and the
 * result will be on the right. And the result of the devition on the left.
 * Now you see if you need to complete or not. In this case you need 1
 * to match the equation.
 *
 * 2 + 1 = 3 
 *
 * */


#include <iostream>

int main() {
	int n;
	std::cin >> n;
	
	while(n--) {
		int n2;
		std::cin >> n2;

		n2 /= 2;
	}

	return 0;
}
