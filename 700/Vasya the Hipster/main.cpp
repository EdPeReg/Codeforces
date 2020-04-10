// 1. 39 min.

#include <iostream>

using namespace std;

int main() {
	int red, blue;
	cin >> red >> blue;

	if(red > blue) {
		int aux = 0;
		aux = red - blue;

		cout << blue;

		if(aux != 2) {
			cout << " " << aux / 2 << "\n";
		} else if(aux == 2) {
			cout << " " << 1 << "\n";
		}
	} else if(red == blue){
		cout << red << " " << 0 << "\n";
	} else if(blue > red) {
		int aux = 0;
		aux = blue - red;

		cout << red ;

		if(aux != 2) {
			cout << " " << aux / 2 << "\n";
		} else if(aux == 2) {
			cout << " " << 1 << "\n";
		}
	}

	return 0;
}
