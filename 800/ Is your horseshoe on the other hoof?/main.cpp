// https://codeforces.com/problemset/problem/228/A
// Time: 33m

/* The idea was to see if one number is the same to another numbers,
 * if that's the case, just increment x.
 *
 * 1 7 3 3 -> 3 == 3, increment 1
 * 7 7 7 7 -> all are the same, you need to increment at least 3 numbers
 * 			  to not be the same. */

#include <iostream>
#include <vector>


using namespace std;

int main() {
	vector<int> vect;
	int a, b, c, d, x = 0, j = 0, i = 0;
	cin >> a >> b >> c >> d;
	
	vect.push_back(a);
	vect.push_back(b);
	vect.push_back(c);
	vect.push_back(d);

	// My idea was to store the numbers in a vector and iterate on them,
	// but somehow continue doesn't work properly. 
	//for(size_t i = 0; i < vect.size(); i++) {
		//for(size_t j = 0; j < vect.size(); j++) {
			//if(i == j) {
				//cout << i << " " << j << " " << "\n";
				//cout << "vecttt i: " << vect.at(i) << "\n";
				//cout << "vectttt j: " << vect.at(j) << "\n";
				//continue;
			//}
			//if(vect.at(i) == vect.at(j)) {
				//x++;
				//cout << "vect i: " << vect.at(i) << "\n";
				//cout << "vect j: " << vect.at(j) << "\n";
			//}
		//}
	//}

	cout << "x: " << x << "\n";

	return 0;
}
