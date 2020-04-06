//https://codeforces.com/problemset/problem/996/A

/* This.
 * Well, my logic was this: We have 5 kinds of bills and n money,
 * to know how many bills you can get, you need to divide between all the 
 * bills, if it's different than 0, you have have how many bills you can have.
 * Once you know how many bills you have, you need to multiply how many bills you
 * get by the bill, to finally substract your money to that multiplication.
 *
 * 43 / 20 = 2, I got two bills.
 * 20 * 2 = 40, because I have to bills of 20, I have in total 40
 * 43 - 40 = 3, now I have this left. */


#include <iostream>

int main() {
	int n, total = 0;
	std::cin >> n;

	if(n / 100 != 0) {
		total += n / 100;	
		int aux = n / 100;
		n -= 100 * aux;
	} 
	if(n / 20 != 0) {
		total += n / 20;
		int aux = n / 20;
		n -= 20 * aux;
	} 
	if(n / 10 != 0) {
		total += n / 10;
		int aux = n / 10;
		n -= 10 * aux;
	} 
	if(n / 5 != 0) {
		total += n / 5;
		int aux = n / 5;
		n -= 5 * aux;
	} 
	if(n / 1 != 0) {
		total += n / 1;
		int aux = n / 1;
		n -= 1 * aux;
	}
	std::cout << total;

	return 0;
}
