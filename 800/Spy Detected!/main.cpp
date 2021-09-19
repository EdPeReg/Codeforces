// 20:15

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int t, n, a;
    std::cin >> t;

    while(t--) {
        std::cin >> n;
        
        std::vector<int> v(n);
        for(int i = 0; i < n; ++i) {
            std::cin >> v[i]; 
        }
        
        int index = 0;
        for(int i = 0; i < n - 1; ++i) {
            if(v[i] != v[i+1]) {
                index = i;
                break;
            }
        }

        // We have multiple numbers that aren't intruders.
        if(std::count(v.begin(), v.end(), v[index]) > 1) {
            std::cout << index + 2 << '\n';
        } 
        // When the is the first one, only add 1.
        else {
            std::cout << index + 1 << '\n';
        }
    }
}
