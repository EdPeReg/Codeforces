// 20:15

#include <iostream>
#include <vector>
#include <map>

int main() {
    int t, n;
    std::cin >> t;

    while(t--) {
        std::cin >> n;
        
        std::vector<int> v(n);
        std::map<int, int> pair;

        for(int& elem : v) {
            std::cin >> elem;
            pair[elem]++;       // Increase by 1 in this element.
        }
        
        for(int i = 0; i < n; ++i) {
            // If this number in the vector has only 1 element.
            if(pair[v[i]] == 1) {
                std::cout << i + 1 << '\n';
                break;
            }
        }
    }
}
