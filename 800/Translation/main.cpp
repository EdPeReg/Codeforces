// 8:03

#include <iostream>

int main()
{
    std::string s, t;
    std::cin >> s >> t;
    
    int j = t.size() - 1;
    for(int i = 0; i < s.size(); ++i) {
        if(s[i] != t[j]) {
            std::cout << "NO";
            break;
        }
        --j;
    }

    if(j < 0) std::cout << "YES";
}
