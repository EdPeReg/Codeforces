//In this problem, it is only ever optimal to erase characters that are not "a". 
//Let x be the number of "a" characters in the string s, and let n be the total number of 
//characters in s. In order for the as to be a strict majority, we can have at most x−1
//characters that are not "a", so the maximum string length is bounded from above by 2x−1. 
//The string length is also bounded above by the length of s, so the answer is min(n,2x−1).

// If you print the string, it will show again the same string, without the deleted characters.

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string t;
    cin >> t;
    cout << min(2*(int)count(t.begin(),t.end(),'a')-1,(int)t.size());
}

