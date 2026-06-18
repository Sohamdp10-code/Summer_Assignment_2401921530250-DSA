class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        int n = t.size();
        vector<int> ans(n, 0);

        for (int i = n - 2; i >= 0; i--) {
            int j = i + 1;

            while (j < n && t[j] <= t[i]) {
                if (ans[j] == 0) {
                    j = n;
                    break;
                }
                j += ans[j];
            }

            if (j < n) ans[i] = j - i;
        }

        return ans;
    }
};
