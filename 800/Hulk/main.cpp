#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	int count = 7;
	int n;
	cin >> n;

	if(n == 1) {
		str+= "I hate ";
		cout << str << "it" << '\n';
	} else {
		for(int i = 1; i <= n; i++) {
			if(i % 2 == 0) {
				str += "I love ";
			} else {
				str += "I hate ";
			}

			if(i != n) {
				str.insert(count, "that ");
				count += 12;
			} 
		}
		cout << str << "it" << '\n';
	}

	return 0;
}
