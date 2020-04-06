//https://codeforces.com/problemset/problem/1220/A

/* Well, the problems says this "It is guaranteed that it is possible to rearrange the letters in such a way that they form a sequence of words", with this, it means that assures you that it will be always a one or zero words.
 *
 * Having this in mind, you can check what makes unique the word "zero" and what makes
 * unic the word "one", for the word zero, it always should have a "z", for the word one,
 * it should always have a "n", so, if you find two z, it means there would be two words zero,
 * the same happens with one.
 * To get the output that the computer wants, you need to sort first the string.
 *
 * If the sentence that is above wans't say, this logic could not be applied. You would need to be sure that
 * the word "zero" has the other letters, the same applies for the word one.
 * */

#include <iostream>
#include <string>
#include <algorithm>

int main() {
	int n;
	std::string str;
	std::cin >> n;
	std::cin >> str;

	std::sort(str.begin(), str.end());
	for(size_t i = 0; i < str.size(); i++) {
		if(str[i] == 'z') std::cout << "0 ";
		if(str[i] == 'n') std::cout << "1 ";
	}

	return 0;
}

