class Solution {
public:
    int compress(vector<char>& chars) {
        int write = 0;  
        int read = 0;   
       

        while (read < chars.size()) {
            char cur = chars[read];
            int count = 0;

            
            while (read < chars.size() && chars[read] == cur) {
                read++;
                count++;
            }

            
            chars[write++] = cur;

            
            if (count > 1) {
                string s = to_string(count);
                for (char d : s) {
                    chars[write++] = d;
                }
            }
        }
        return write;
    }
};
