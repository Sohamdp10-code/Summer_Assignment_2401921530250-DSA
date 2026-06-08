class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        vector<int> freq(26, 0);

        // Count letters in magazine
        for(char ch : magazine) {
            freq[ch - 'a']++;
        }

        // Use letters for ransom note
        for(char ch : ransomNote) {
            freq[ch - 'a']--;

            if(freq[ch - 'a'] < 0) {
                return false;
            }
        }

        return true;
    }
};