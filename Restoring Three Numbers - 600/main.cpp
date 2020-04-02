//https://codeforces.com/problemset/problem/1154/A

/* Well, this is a basic problem, let's take the first example:
 * 3 6 5 4
 * 2 1 3
 *
 * Where a = 2, b = 1, c = 3.
 * 2 + 1 = 3
 * 2 + 3 = 5
 * 1 + 3 = 4
 * 2 + 1 + 3 = 5
 *
 * The sum above, match with the input numbers, but this is the case when you know the output
 * (which you don't), 
 * Get the max number of the input and substract it to each element (but not with itself). 
 * max = 6
 * 6 - 3 = 3
 * 6 - 5 = 1
 * 6 - 4 = 2. */

#include <iostream>
#include <algorithm>

int main() {
	int vect[4];
	int a, b, c, d;
	std::cin >> a >> b >> c >> d;
	vect[0] = a;
	vect[1] = b;
    vect[2] = c;
    vect[3] = d;

	int *max;
	max = std::max_element(vect, vect + 4);

	for(int i = 0; i < 4; i++) {
		if(*max == vect[i]) continue;
		std::cout << *max - vect[i] << " ";
	}

	return 0;
}
