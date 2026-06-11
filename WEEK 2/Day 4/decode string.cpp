class Solution {
public:
    string decodeString(string s) {
        stack<pair<string, int>> st;
        string curr = "";
        int num = 0;

        for (char ch : s) {
            if (isdigit(ch)) {
                num = num * 10 + (ch - '0');
            }
            else if (ch == '[') {
                st.push({curr, num});
                curr = "";
                num = 0;
            }
            else if (ch == ']') {
                auto [prev, repeat] = st.top();
                st.pop();

                string temp = "";
                while (repeat--) {
                    temp += curr;
                }

                curr = prev + temp;
            }
            else {
                curr += ch;
            }
        }

        return curr;
    }
};
