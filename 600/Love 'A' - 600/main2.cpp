//https://codeforces.com/problemset/problem/1146/A

/* This is the solution. 
 *
 * The logic is this, we need to delete the character that is not an 'a'
 * You keep deleting that character until the number of characters that are not
 * 'a' is less than the number of 'a'.
 *
 * Like this:
 * xaxxxxa -> x = 5, a = 2
 *
 * axxxxa -> x = 4, a = 2
 * axxxa  -> x = 3, a = 2
 * axxa   -> x = 2, a = 2
 * axa    -> x = 1, a = 2 -> END.
 *
 * The way I did this was based on how many characters that are not 'a' I have,
 * I got first how many 'a' have and how many non 'a'.
 *
 * Maybe there is a better solution to do this, without obtaining how many 'a' and
 * non 'a' I have.
 *
 * NOTE: I ONLY CARE THE LENGTH, I DONT NEED TO REALLY DELETE THE CHARACTER THAT IS NOT
 * IN THE STRING, I DID TWO STEPS HERE, DELETE ALL CHARACTERS AND GET THE LENGTH.
 * YOU CAN GET THE LENGTH WITHOUT DELETING ANYTHING AND THAT'S OK BECAUSE YOU DON'T NEED
 * TO PRINT THE STRING.
 * */

#include <iostream>
#include <string>

int main() {
	std::string str;
	int noA = 0;
	int a = 0;
	std::cin >> str;

	// Obtain how many 'a' and not 'a' I have.
	for(size_t i(0); i < str.size(); i++) {
		if(str[i] != 'a') {
			noA++;
		} else {
			a++;
		}
	}
	
	int j = 0;
	while(true) {
		if(noA >= a and str[j] != 'a') { 
			str.erase(j,1);
			noA--;
		} else {
			j++;
		}

		if(noA == 0 or noA < a) break;
	}

	std::cout << str.size();
	return 0;
}
