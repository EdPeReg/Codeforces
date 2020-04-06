// https://codeforces.com/problemset/problem/1186/A

/* You need enough books and pens to give to each participant, 
 * if the number of participants are equal or greater than pencials
 * and notebooks, that means there are enough notebooks and pencils. */


#include <iostream> 

int main() {
	int n, m, k;
	std::cin >> n >> m >> k;

	if(n <= m and n <= k) std::cout << "Yes";
	else std::cout << "No";

	return 0;
}
