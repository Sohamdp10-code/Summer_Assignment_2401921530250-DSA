class Solution {
public:
    bool repeatedSubstringPattern(string s) {

        int n = s.length();

        for(int len = 1; len <= n/2; len++) {

            if(n % len != 0)
                continue;

            string part = s.substr(0, len);

            string temp = "";

            int times = n / len;

            for(int i = 0; i < times; i++) {
                temp += part;
            }

            if(temp == s)
                return true;
        }

        return false;
    }
};