//https://codeforces.com/problemset/problem/1097/A
//incomplete

#include <iostream>
#include <vector>
#include <string>


int main() {
	std::vector<std::string> cards = {"2D", "2C", "2S", "2H",
									 "3D", "3C", "3S", "3H",
									 "4D", "4C", "4S", "4H",
									 "5D", "5C", "5S", "5H",
									 "6D", "6C", "6S", "6H",
									 "7D", "7C", "7S", "7H",
									 "8D", "8C", "8S", "8H",
									 "9D", "9C", "9S", "9H",
									 "TD", "TC", "7S", "7H",
									 "JD", "JC", "JS", "JH",
									 "QD", "QC", "QS", "QH",
									 "KD", "KC", "KS", "KH",
									 "AD", "AC", "AS", "AH"};
	std::string card;
	std::cin >> card;

	for(size_t i = 0; i < cards.size(); i++) {
		if(card[i] == cards[i][i + 1]) {
			std::cout << "match";
			break;
		}
	}
	
	return 0;
}
