// 1. 39 min.
// https://codeforces.com/problemset/problem/581/A

/* There could be two cases, when red socks are greater or less than blue socks.
 * 
 * RED SOCKS.	BLUE SOCKS.	
 * | | | | |	| | |
 *		   
 * | | | | |	| | |
 * --- | | ------ | |
 *	   | ---------- |
 *     --------------
 *
 *  We have 3 days where it can wear as hipster, and 1 day where he only wears red socks.
 *  If you do more examples here red socks are greater than blue socks, the day where he can
 *  wear red and blue socks will be always the blue sock number, what about the other day.
 *  If you substract the number of red socks with the number of blue socks, you have two 
 *  posibilities, if it's 2, it means that can only wear socks of the same color 1 day,
 *  if it's different than 2, you divide that substraction by 2 and you will have the number of days.
 *
 *  In this case, because the result is 2, he can only wear 1 pair of socks for 1 day.
 *  Another case:
 *
 *  7 - 2 = 6, We have 7 red socks and 2 blue socks
 *  6 / 2 = 3 , after the substraction, you divide by 2 and you will have the days that he will wear
 *  		    the same color.
 *
 *  The other case is when the blue socks are greater than the red socks, the logic is the same, but inverted.
 *
 * */

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
