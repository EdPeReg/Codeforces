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
