// 10:05

#include <iostream>
#include <vector>

int main() {
    int t, n, a;
    std::cin >> t;

    while(t--) {
        std::cin >> n;
        
        int index = 1;
        std::vector<int> v(n);
        for(int i = 0; i < n; ++i) {
            std::cin >> v[i]; 
        }

        for(int i = 1; i < n; ++i) {
            if(v[i] != v[i-1]) {
                index = i;
            }
        }

        if(v[v.size() - 1] != v[v.size() - 2])
            std::cout << ++index << '\n';
        else 
            std::cout << index << '\n';
    }
}

