//https://codeforces.com/problemset/problem/867/A

/* You need to analize if the next letter it's the same or not, if it's not the
 * same, it can be from san francisto to seattle or seattle or san francisco. 
 * Notice that I have str.size() - 1, I have this because I don't want to analize the
 * last letter of the string, If I analize the last letter of the string, I would analize
 * the last letter next to... nothing, like this:
 *
 * FS
 * F -> S,
 * S -> ?, Here the last letter is being compared with... only god knows.
 * */

#include <iostream>

int main() {
	int n;
	int FtoS = 0, StoF = 0;
	std::cin >> n;
	std::string str;
	std::cin >> str;

	for(size_t i(0); i < str.size() - 1; i++) {
		if(str[i] == 'F' and str[i] != str[i + 1]) FtoS++;
		if(str[i] == 'S' and str[i] != str[i + 1]) StoF++;
	}

	if(StoF > FtoS) std::cout << "YES\n";
	else std::cout << "NO\n";
	return 0;
}
