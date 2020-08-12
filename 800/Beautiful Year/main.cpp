#include <iostream>
#include <string>

using namespace std; 

int main() {
	int year, otherYear;
	cin >> year;
	otherYear = year;
	++otherYear;

	while(true) {
		bool isEqual = false;
		std::string strYear = std::to_string(otherYear);
		for(size_t leftPos = 0; leftPos < strYear.size(); leftPos++) {
			for(size_t nextPos = leftPos + 1; nextPos < strYear.size(); nextPos++) {
				if(strYear.at(leftPos) == strYear.at(nextPos)) {
					++otherYear;
					isEqual = true;
					break;
				} else {
					isEqual = false;
				}
			}
			if(isEqual) {
				break;
			}
		}
		if(!isEqual) {
			break;
		}
	}

	cout << otherYear << '\n';
	return 0;
}
