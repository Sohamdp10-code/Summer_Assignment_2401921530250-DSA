#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        
        
        string cleaned = "";
        for (char c : s) {
            if (isalnum(c)) {              
                cleaned += tolower(c);     
            }
        }
        
        
        string reversed = cleaned;
        reverse(reversed.begin(), reversed.end());
        
        return cleaned == reversed;
    }
};