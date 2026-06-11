#include <string>
using namespace std;    
    string reverseWords(string s) {
        int n = s.size();
        string result;
        int i = 0;

        while (i < n) {
            
            while (i < n && s[i] == ' ') {
                i++;
            }

            if (i >= n) break;

            
            int j = i;
            while (j < n && s[j] != ' ') {
                j++;
            }

           
            if (!result.empty()) {
                result = " " + result; 
            }
            result = s.substr(i, j - i) + result; 

            i = j; 
        }

        return result;
    }
};
