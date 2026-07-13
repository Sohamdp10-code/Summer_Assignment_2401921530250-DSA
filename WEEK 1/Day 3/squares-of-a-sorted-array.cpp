class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result;
        
        
        for(int num : nums) {
            result.push_back(num * num);
        }
        
        
        sort(result.begin(), result.end());
        
        return result;
    }
};

