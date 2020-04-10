#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, totalA = 0, totalD = 0;
	string str;
	cin >> n;
	cin >> str;
	
	for(int i(0); i < n; i++) {
		if(str[i] == 'A') totalA++;
		else if(str[i] == 'D') totalD++;
	}

	if(totalA > totalD) cout << "Anton\n";
	else if(totalD > totalA) cout << "Danik\n";
	else cout << "Friendship\n";

	
			
	return 0;
}
