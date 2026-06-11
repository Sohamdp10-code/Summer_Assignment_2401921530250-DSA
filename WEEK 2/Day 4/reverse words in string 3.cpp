#include <string>
using namespace std;    
    string reverseWords(string s) {
        int n = s.size();
        string result;
        int i = 0;

        while (i < n) {
            // Skip leading spaces
            while (i < n && s[i] == ' ') {
                i++;
            }

            if (i >= n) break;

            // Find the end of the current word
            int j = i;
            while (j < n && s[j] != ' ') {
                j++;
            }

            // Append the current word to the result
            if (!result.empty()) {
                result = " " + result; // Add space before the existing result
            }
            result = s.substr(i, j - i) + result; // Prepend the current word

            i = j; // Move to the next word
        }

        return result;
    }
};